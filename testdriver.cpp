#include "testdriver.h"

TestDriver::TestDriver(QObject *parent) : QObject(parent)
{

}

TestDriver::~TestDriver()
{

}

bool TestDriver::run(TestCaseItem * test)
{
	MqDriver mq;
	return mq.runTestCase(test);
}

bool TestDriver::run(TestCaseItem * test, QTextEdit * logWindow)
{
	MqDriver mq(logWindow);
	bool res = mq.runTestCase(test);
    if(res)
        test->setStatus(TestCaseStatus::Passed);
    else
        test->setStatus(TestCaseStatus::Failed);
    return res;
}