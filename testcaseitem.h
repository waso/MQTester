#ifndef TESTCASEITEM_H
#define TESTCASEITEM_H

#include <QDomNode>
#include <imqi.hpp>
#include "treeitem.h"
#include "custom_types.h"
#include "queuedetails.h"
#include "xmldao.h"
#include "acceptancecriteria.h"

class TestCaseItem : public TreeItem, public XmlDao, public AcceptanceCriteria
{
private:
    int id;
    unsigned long long int responseTime;
    QueueDetails inQueueDetails;
    QueueDetails outQueueDetails;
    QString request;
    QString response;
    int reqMsgIdSetType;
    int reqCorrelIdSetType;
    QString userMsgId;
    QString userCorrelId;
    long responseTimeout;
    int responseSelectionMethod;
    QString realRequestMsgId;
    QString realRequestCorrelId;
    QString realResponseMsgId;
    QString realResponseCorrelId;   
    int status;

public:
    TestCaseItem(const QList<QVariant> &data, TreeItem *parent = 0);
    ~TestCaseItem();

    QueueDetails *getInQueueDetails();
    QueueDetails *getOutQueueDetails();

    void setRequest(QString req);
    QString getRequest();

    void setResponse(QString res);
    QString getResponse();

	void toXml(QXmlStreamWriter * stream);
	void fromXml(QDomNode xml);

    void setReqMsgIdSetType(int type);
    int getReqMsgIdSetType();

    void setReqCorrelIdSetType(int type);
    int getReqCorrelIdSetType();

    void setUserMsgId(QString id);
    QString getUserMsgId();

    void setUserCorrelId(QString corid);
    QString getUserCorrelId();

    void setResponseSelectionMethod(int method);
    int getResponseSelectionMethod();

    void setResponseTimeout(long t_out);
    long getResponseTimeout();

    void setRealRequestMsgId(ImqBinary id);
    QString getRealRequestMsgId();

    void setRealRequestCorrelId(ImqBinary id);
    QString getRealRequestCorrelId();

    void setRealResponseMsgId(ImqBinary id);
    QString getRealResponseMsgId();

    void setRealResponseCorrelId(ImqBinary id);
    QString getRealResponseCorrelId();

    void setStatus(int s);
    int getStatus();

    bool validate();

    static unsigned long count;

signals:

public slots:

};

#endif // TESTCASEITEM_H
