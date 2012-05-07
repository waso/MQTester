#include "testsrunnerdialog.h"

TestsRunnerDialog::TestsRunnerDialog(QPersistentModelIndex *index, QWidget *parent) : QDialog(parent), _index(index)
{
	ui.setupUi(this);
	connect(ui.closeButton, SIGNAL(clicked()), this, SLOT(closeWindow()));
	connect(ui.runButton, SIGNAL(clicked()), this, SLOT(run()));
	itemsToRun.clear();
	setButtonsMode(TestsRunnerDialog::test_stopped);
}

TestsRunnerDialog::~TestsRunnerDialog()
{

}

void TestsRunnerDialog::closeWindow()
{
    done(1);
}

void TestsRunnerDialog::run()
{
	TestDriver driver(this);
	bool res;
	bool failed = false;

	itemsToRun.clear();
	ui.logWindow->clear();
	prepare(_index);
	advanceProgressBar(progressBarMin);
	colorProgressBar(Qt::green);
	setButtonsMode(TestsRunnerDialog::test_started);

	for(int i = 0; i < itemsToRun.count(); i++)
	{
		res = driver.run(itemsToRun.at(i), ui.logWindow);

		if(res == false && failed == false)
		{
			failed = true;
			colorProgressBar(Qt::red);
		}

		if((i+1) == itemsToRun.count())
		{
			advanceProgressBar(progressBarMax);
			setButtonsMode(TestsRunnerDialog::test_stopped);
			return;
		}
		else
		{
			advanceProgressBar();
		}
	}
}

void TestsRunnerDialog::prepare(QPersistentModelIndex * parent)
{
	TreeItem * parentItem = static_cast<TreeItem *>(parent->internalPointer());
	for(int i = 0; i < parentItem->childCount(); i++)
	{
		QPersistentModelIndex child = QPersistentModelIndex(parent->child(i, 0));
		TreeItem * curentItem = static_cast<TreeItem *>(child.internalPointer());
		int type = curentItem->getType();

		if(type == ItemType::TestCase)
		{
			TestCaseItem * toAppend = static_cast<TestCaseItem *>(child.internalPointer());
			itemsToRun.append(toAppend);
		}
		else if(type == ItemType::Suite)
		{
			prepare(new QPersistentModelIndex(parent->child(i, 0)));
		}
	}
}

void TestsRunnerDialog::advanceProgressBar()
{
	int curent = ui.progressBar->value();
	int single_step = (progressBarMax / itemsToRun.count());
	if((curent + single_step) > ui.progressBar->maximum())
	{
		advanceProgressBar(progressBarMax);
		return;
	}
	emit ui.progressBar->setValue(curent + single_step);
}

void TestsRunnerDialog::advanceProgressBar(int val)
{
	if(val > ui.progressBar->maximum())
		val = progressBarMax;
	emit ui.progressBar->setValue(val);
}

void TestsRunnerDialog::colorProgressBar(int color)
{
	QString green = "#04BD26";
	QString red = "#FF0000";
	QString col;

	if(color == Qt::red)
		col = red;
	else
		col = green;
	ui.progressBar->setStyleSheet(getProgressBarTemplate(col));
}

inline QString TestsRunnerDialog::getProgressBarTemplate(QString color)
{
	QString style = "QProgressBar {"
		"border: 1px solid black;"
		"text-align: top;"
		"padding: 1px;"
		"border-radius: 3px;"
		"background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,"
		"stop: 0 #E6E9EB,"
		"stop: 1 #E6E9EB );"
		"width: 15px;}"
		"QProgressBar::chunk {"
		"background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,"
		"stop: 0 "+ color +","
		"stop: 1 "+ color +" );"
		"border-radius: 3px;"
		"border: 1px solid black;}";
	return style;	
}

void TestsRunnerDialog::setButtonsMode(ButtonsMode mode)
{
	if(mode == TestsRunnerDialog::test_started)
	{
		ui.stopButton->setEnabled(true);
	}
	else if(mode == TestsRunnerDialog::test_stopped)
	{
		ui.stopButton->setEnabled(false);
	}
}