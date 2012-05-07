#ifndef TESTSRUNNERDIALOG_H
#define TESTSRUNNERDIALOG_H

#include <QDialog>
#include <QPersistentModelIndex>
#include <QList>
#include <QPalette>
#include <QColorGroup>
#include <QColor>
#include <QList>
#include <windows.h>
#include "testcaseitem.h"
#include "treeitem.h"
#include "testdriver.h"
#include "report.h"
#include "ui_testsrunnerdialog.h"

class TestsRunnerDialog : public QDialog
{
    Q_OBJECT

public slots:
	void closeWindow();
	void run();

public:
    TestsRunnerDialog(QPersistentModelIndex *index, QWidget *parent = 0);
    ~TestsRunnerDialog();

private:
    Ui::TestsRunnerDialog ui;
	enum ButtonsMode { test_started, test_stopped};

	static const int progressBarMax = 100000;
	static const int progressBarMin = 0;
	QPersistentModelIndex *_index;
	QList<TestCaseItem *> itemsToRun;
    //Report * _repo;

	void prepare(QPersistentModelIndex * parent);
	void advanceProgressBar();
	void advanceProgressBar(int val);
	void colorProgressBar(int color);
	QString getProgressBarTemplate(QString color);
	void setButtonsMode(ButtonsMode mode = TestsRunnerDialog::test_stopped);
};

#endif // TESTSRUNNERDIALOG_H
