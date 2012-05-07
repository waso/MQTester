#ifndef MQDRIVER_H
#define MQDRIVER_H

#include <QObject>
#include <QString>
#include <imqi.hpp>
#include "testcaseitem.h"
#include "log.h"

class MqDriver : public QObject
{
	Q_OBJECT

public:
	MqDriver(QTextEdit *logWidget, QObject *parent = 0);
	MqDriver(QObject *parent = 0);
	~MqDriver();

	bool runTestCase(TestCaseItem *tc);

private:
	Log * log;

    void setMessageFormat(ImqMessage * msg, QString format);
    void setPutMessageOptions(ImqMessage * msg, ImqPutMessageOptions * pmo, TestCaseItem * _tc);
    void setGetMessageOptions(ImqMessage * msg, ImqGetMessageOptions * gmo, TestCaseItem * _tc, ImqMessage * inmsg);
    ImqBoolean setTransportType(ImqChannel * channel, QString transportType);
};

#endif // MQDRIVER_H
