#include "mainwindow.h"

class TreeItem;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), curFile("")
{
    model = new TreeModel();
    ui->setupUi(this);
    resize(819, 614);
    ui->projectTreeView->setModel(model);

	connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(closeApp()));
	connect(ui->actionMenuExit, SIGNAL(triggered()), this, SLOT(closeApp()));
	connect(ui->actionItemInformation, SIGNAL(triggered()), this, SLOT(displayInfo()));
    connect(ui->actionMenuItemInformation, SIGNAL(triggered()), this, SLOT(displayInfo()));
	connect(ui->actionAddProject, SIGNAL(triggered()), this, SLOT(addNewPojectTreeItem()));
	connect(ui->actionMenuAddProject, SIGNAL(triggered()), this, SLOT(addNewPojectTreeItem()));
	connect(ui->actionAddSuite, SIGNAL(triggered()), this, SLOT(addNewSuiteTreeItem()));
	connect(ui->actionMenuAddSuite, SIGNAL(triggered()), this, SLOT(addNewSuiteTreeItem()));
	connect(ui->actionAddTestCase, SIGNAL(triggered()), this, SLOT(addNewTestCaseTreeItem()));
	connect(ui->actionMenuAddTestCase, SIGNAL(triggered()), this, SLOT(addNewTestCaseTreeItem()));
	connect(ui->actionDeleteTreeItem, SIGNAL(triggered()), this, SLOT(deleteItemFromProjectTree()));
    connect(ui->actionMenuDeleteTreeItem, SIGNAL(triggered()), this, SLOT(deleteItemFromProjectTree()));
	connect(ui->projectTreeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(openContentTreeTab(QModelIndex)));
	connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(save()));
	connect(ui->actionMenuSave, SIGNAL(triggered()), this, SLOT(save()));
	connect(ui->actionMenuSaveAs, SIGNAL(triggered()), this, SLOT(saveAs()));
	connect(ui->contentTabPanel, SIGNAL(tabCloseRequested(int)), this, SLOT(closeContentTabWidget(int)));
	connect(ui->contentTabPanel, SIGNAL(currentChanged(int)), this, SLOT(focusActiveTab(int)));
	connect(ui->projectTreeView, SIGNAL(customContextMenuRequested(const QPoint &)), SLOT(showProjectTreeContentMenu(const QPoint &)));
	connect(ui->actionRunTestCase, SIGNAL(triggered()), this, SLOT(runItem()));
	connect(ui->actionMenuRunTestCase, SIGNAL(triggered()), this, SLOT(runItem()));
	connect(ui->actionOpenFile, SIGNAL(triggered()), this, SLOT(loadContentFromFile()));
    connect(ui->actionMenuOpenFile, SIGNAL(triggered()), this, SLOT(loadContentFromFile()));
    connect(ui->actionReportExport, SIGNAL(triggered()), this, SLOT(reportExport()));
    connect(ui->actionMenuReportExport, SIGNAL(triggered()), this, SLOT(reportExport()));
    connect(ui->actionReport, SIGNAL(triggered()), this, SLOT(reportShow()));
    connect(ui->actionMenuReport, SIGNAL(triggered()), this, SLOT(reportShow()));
    connect(ui->actionMenuAbout, SIGNAL(triggered()), this, SLOT(about()));
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::displayInfo()
{
    QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();
    if(selectedItems.count() > 0)
    {
        TreeItem *testcase = static_cast<TreeItem *>(selectedItems.at(0).internalPointer());
		QMessageBox::information(this, tr("Info"),  tr("Name: ") + testcase->getItemName());
    }
}


void MainWindow::addNewPojectTreeItem()
{
    model->add(tr("My Project"), ItemType::Project, QModelIndex());

    return;
}

void MainWindow::addNewSuiteTreeItem()
{
    QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();
    if(selectedItems.count() > 0)
    {
        TreeItem *parentItem = static_cast<TreeItem *>(selectedItems.at(0).internalPointer());
        if(parentItem->getType() == ItemType::Project)
        {
            model->add(tr("My Suite"), ItemType::Suite, selectedItems.at(0));
						expandElement(selectedItems.at(0));
        }
        else
        {
            QMessageBox::information(this, tr("Info"), tr("Please select a project"));
        }
    }
    else
    {
        QMessageBox::information(this, tr("Info"), tr("Please select a project"));
    }
    return;
}

void MainWindow::addNewTestCaseTreeItem()
{
    QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();
    if(selectedItems.count() > 0)
    {
        TreeItem *parentItem = static_cast<TreeItem *>(selectedItems.at(0).internalPointer());
        if(parentItem->getType() == ItemType::Suite)
        {
            model->add(tr("My Test Case"), ItemType::TestCase, selectedItems.at(0));
			expandElement(selectedItems.at(0));
			//parentItem->child(parentItem->childCount())->index();
        }
        else
        {
            QMessageBox::information(this, tr("Info"), tr("Please select a Suite"));
        }
    }
    return;
}

void MainWindow::deleteItemFromProjectTree()
{
	QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();
    if(selectedItems.count() > 0)
    {
        int button = QMessageBox::question(this, tr("Confirm Delete"), tr("Are you sure?"), QMessageBox::Yes | QMessageBox::No);
        if (button == QMessageBox::Yes)
        {
			//Check if item is opened and close correct tab in such case
			for(int i = 0; i < ui->contentTabPanel->count(); i++)
			{
				TabForm * tabWidget = static_cast<TabForm *>(ui->contentTabPanel->widget(i));
				QPersistentModelIndex pIndex = QPersistentModelIndex(selectedItems.at(0));
				if(pIndex == tabWidget->getIndex())
				{
					ui->contentTabPanel->removeTab(i);
					delete tabWidget;
					break;
				}
			}
			bool removed;
            removed = model->removeRow(selectedItems.at(0));
        }
    }
    return;
}

void MainWindow::openContentTreeTab(QModelIndex index)
{
	// If selected index is somehow invalid, check for selected indexes in other place and pick first one
	if(!index.isValid())
	{
		QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();
		if(selectedItems.count() > 0)
		{
			index = selectedItems.at(0);
		}
		else
		{
			return;
		}
	}

	// Check if selected index is already opened. If so, focus correct tab
	for(int i = 0; i < ui->contentTabPanel->count(); i++)
	{
		TabForm * tabWidget = static_cast<TabForm *>(ui->contentTabPanel->widget(i));
		if(index == tabWidget->getIndex())
		{
			ui->contentTabPanel->setCurrentIndex(i);
			return;
		}
	}

	TreeItem *selectedItem = static_cast<TreeItem *>(index.internalPointer());
	QPersistentModelIndex *pIndex = new QPersistentModelIndex(index);
	int type = selectedItem->getType();

	if(type == ItemType::TestCase)
	{
		TestCaseForm * tcForm = new TestCaseForm(pIndex, this);
        ui->contentTabPanel->addTab(tcForm, selectedItem->getItemName());
		ui->contentTabPanel->setCurrentIndex(ui->contentTabPanel->count()-1);
	}
	else if(type == ItemType::Suite || type == ItemType::Project)
	{
        TestsRunnerDialog trForm = TestsRunnerDialog(pIndex, this);
        trForm.exec();
	}
}

void MainWindow::expandElement(QModelIndex el)
{
	if(!ui->projectTreeView->isExpanded(el))
	{
		ui->projectTreeView->expand(el);
	}
}

void MainWindow::closeContentTabWidget(int index)
{
	TestCaseForm *tcFormToClose;

	TabForm * tabWidget = static_cast<TabForm *>(ui->contentTabPanel->widget(index));
	QModelIndex selectedIndex = tabWidget->getIndex();

	TreeItem *itemToClose = static_cast<TreeItem *>(selectedIndex.internalPointer());
	if(itemToClose->getType() == ItemType::TestCase)
	{
		tcFormToClose = static_cast<TestCaseForm *>(ui->contentTabPanel->widget(index));
	}
	tcFormToClose->saveData();
	ui->contentTabPanel->removeTab(index);
	delete tabWidget;
}

void MainWindow::showProjectTreeContentMenu(const QPoint &pos)
{
	QMenu *menu = new QMenu;
	QModelIndex selectedIndex = ui->projectTreeView->indexAt(pos);

	if(!selectedIndex.isValid())
		return;

	TreeItem *selectedItem = static_cast<TreeItem *>(selectedIndex.internalPointer());
	if(selectedItem->getType() == ItemType::Project)
	{
		menu->addAction(tr("Add Suite"), this, SLOT(addNewSuiteTreeItem()));
	}
	else if(selectedItem->getType() == ItemType::Suite)
	{
		menu->addAction(tr("Add TestCase"), this, SLOT(addNewTestCaseTreeItem()));
	}
	else if(selectedItem->getType() == ItemType::TestCase)
	{
		menu->addAction(tr("Open"), this, SLOT(openContentTreeTab()));
	}

	menu->addAction(tr("Rename Item"), this, SLOT(renameProjectTreeItem()));
	menu->exec(QCursor::pos());
}

void MainWindow::renameProjectTreeItem()
{
	QModelIndexList selectedItems = ui->projectTreeView->selectionModel()->selectedIndexes();

	if(selectedItems.count() == 0)
        return;

	TreeItem *itemToRename = static_cast<TreeItem *>(selectedItems.at(0).internalPointer());
    RenameItemDialog dialog(this);
    dialog.setUserInput(itemToRename->getItemName());
    dialog.exec();
    if(dialog.getUserInput().length() > 0)
    {
        itemToRename->setItemName(dialog.getUserInput());
        for(int i = 0; i < ui->contentTabPanel->count(); i++)
		{
			TabForm * tabWidget = static_cast<TabForm *>(ui->contentTabPanel->widget(i));
            QPersistentModelIndex pIndex = tabWidget->getIndex();
			if(pIndex == QPersistentModelIndex(selectedItems.at(0)))
			{
                ui->contentTabPanel->setTabText(i, itemToRename->getItemName());
				break;
			}
		}
    }
}

void MainWindow::runItem()
{
	saveAllTabs();

    if(ui->contentTabPanel->count() == 0)
        return;

	TestCaseForm * tciter = static_cast<TestCaseForm *>(ui->contentTabPanel->currentWidget());
	QPersistentModelIndex tcIndex = tciter->getIndex();
	TestCaseItem * tcToRun = static_cast<TestCaseItem *>(tcIndex.internalPointer());
	TestDriver driver(this);

    bool res = driver.run(tcToRun);
    tciter->setTestStatus(res);
	if(res)
	{
		tciter->updateResponseMessage();
	}
    tciter->updateRunHour();
}

void MainWindow::closeApp(QCloseEvent * event)
{
	saveAllTabs();

	int ret = verifySave();
	if(ret == QMessageBox::Cancel)
	{
		if(event)
			event->ignore();
		return;
	}
	else if(ret == QMessageBox::Save)
		save();

	QApplication::exit();
}

int MainWindow::verifySave()
{
	saveAllTabs();
	DataStorage stor = DataStorage(this);
	if(stor.compare(model))
	{
		QMessageBox msg;
		msg.setText("The document has been modified.");
		msg.setInformativeText("Do you want to save your changes?");
		msg.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
		msg.setDefaultButton(QMessageBox::Save);
		return msg.exec();
	}
	else
	{
		return QMessageBox::Discard;
	}
}

void MainWindow::focusActiveTab(int index)
{
	if(index < 0)
		return;

	TabForm * tabWidget = static_cast<TabForm *>(ui->contentTabPanel->widget(index));
	QPersistentModelIndex itemIndex = tabWidget->getIndex();
    ui->projectTreeView->selectionModel()->setCurrentIndex(itemIndex, QItemSelectionModel::ClearAndSelect);
}

void MainWindow::save()
{
	if(curFile.isEmpty())
	{
		curFile = QFileDialog::getSaveFileName(this, tr("Save"), QDir::homePath(), QString(".xml files (*.xml)"));
		if(curFile.isEmpty())
			return;
	}
	saveToFile(curFile);
}

void MainWindow::saveAs()
{
	curFile = QFileDialog::getSaveFileName(this, tr("Save as..."), QDir::homePath(), QString(".xml files (*.xml)"));
	if(curFile.isEmpty())
			return;
	saveToFile(curFile);
}

void MainWindow::saveToFile(QString filename)
{
	saveAllTabs();
	DataStorage filestorage = DataStorage(this);
	if(filestorage.save(model,filename))
		ui->statusBar->showMessage(tr("File saved"), 2000);
	else
		QMessageBox::warning(this, tr("MQTester"), tr("Error while saving data."));
}


void MainWindow::saveAllTabs()
{
	for(int i = 0; i < ui->contentTabPanel->count(); i++)
	{
		TestCaseForm * testcase = static_cast<TestCaseForm *>(ui->contentTabPanel->widget(i));
		testcase->saveData();
	}
}
void MainWindow::closeEvent(QCloseEvent *event)
{
	closeApp(event);
}

void MainWindow::loadContentFromFile()
{
	int ret = verifySave();
	if(ret == QMessageBox::Cancel)
		return;
	else if(ret == QMessageBox::Save)
		save();

	curFile = QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(), QString(".xml files (*.xml)"));
	if(curFile.isEmpty())
			return;

	DataStorage storage = DataStorage(this);
	storage.load(model, curFile);
}

void MainWindow::reportExport()
{
    Report rep(this);
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", QString(), "*.pdf");
    rep.exportToPdf(model, fileName);
    ui->statusBar->showMessage(tr("PDF Report saved"), 2000);
}

void MainWindow::reportShow()
{
    Report rep(this);
    ReportView repView(this);
    repView.setContent(rep.generateReportContent(model));
    repView.exec();
}

void MainWindow::about()
{
    AboutWindow about(this);
    about.exec();
}