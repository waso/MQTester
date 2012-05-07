#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include <QFileDialog>
#include <QList>
#include <QUrl>
#include <QDesktopServices>
#include <QStringList>
#include <QCloseEvent>

#include "custom_types.h"
#include "testcaseform.h"
#include "treemodel.h"
#include "ui_mainwindow.h"
#include "testdriver.h"
#include "datastorage.h"
#include "testsrunnerdialog.h"
#include "report.h"
#include "reportview.h"
#include "renameitemdialog.h"
#include "aboutwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void displayInfo();
    void addNewPojectTreeItem();
    void addNewSuiteTreeItem();
    void addNewTestCaseTreeItem();
    void deleteItemFromProjectTree();
	void openContentTreeTab(QModelIndex index = QModelIndex());
	void showProjectTreeContentMenu(const QPoint &);
	void renameProjectTreeItem();
	void runItem();
	void focusActiveTab(int index);
	void save();
	void saveAs();
	void loadContentFromFile();
    void reportExport();
    void reportShow();
    void about();

protected:
    void changeEvent(QEvent *e);
	void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    TreeModel *model;
	QString curFile;

	void expandElement(QModelIndex el);
	void saveToFile(QString filename);
	void saveAllTabs();
	int verifySave();

private slots:
	void closeContentTabWidget(int index);
	void closeApp(QCloseEvent * event = 0);
};

#endif // MAINWINDOW_H
