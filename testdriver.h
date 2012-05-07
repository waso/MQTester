#ifndef TESTDRIVER_H
#define TESTDRIVER_H

#include <QObject>
#include "mqdriver.h"
#include "testcaseitem.h"

class TestDriver : public QObject
{
	Q_OBJECT

public:
	TestDriver(QObject *parent);
	~TestDriver();
	bool run(TestCaseItem * test);
	bool run(TestCaseItem * test, QTextEdit * logWindow);

private:
	
};

#endif // TESTDRIVER_H
