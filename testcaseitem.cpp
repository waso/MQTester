#include "testcaseitem.h"

TestCaseItem::TestCaseItem(const QList<QVariant> &data, TreeItem *parent) :  TreeItem(data,parent), AcceptanceCriteria()
{        
    id = (++TestCaseItem::count);
    type = ItemType::TestCase;
    reqMsgIdSetType = MessageIdSetMethod::Automatically;
    reqCorrelIdSetType = MessageIdSetMethod::Automatically;
    responseSelectionMethod = ResponseSelectionMethod::Request_Id_Equal_Response_Id;
    responseTimeout = 5;
    status = TestCaseStatus::NoRun;
}

TestCaseItem::~TestCaseItem()
{
    TestCaseItem::count--;
}

QueueDetails *TestCaseItem::getInQueueDetails()
{
    return &inQueueDetails;
}

QueueDetails *TestCaseItem::getOutQueueDetails()
{
    return &outQueueDetails;
}

void TestCaseItem::setRequest(QString req)
{
    request = req;
}

QString TestCaseItem::getRequest()
{
    return request;
}

void TestCaseItem::setResponse(QString res)
{
    response = res;
}

QString TestCaseItem::getResponse()
{
    return response;
}

void TestCaseItem::toXml(QXmlStreamWriter * stream)
{
	stream->writeStartElement("TestCase");
	stream->writeAttribute("name",getItemName());
	stream->writeStartElement("InQueueDetails");
	this->inQueueDetails.toXml(stream);
	stream->writeEndElement();
	stream->writeStartElement("OutQueueDetails");
	this->outQueueDetails.toXml(stream);
	stream->writeEndElement();
    stream->writeTextElement("RequestMessageIdSetType", QString("%1").arg(getReqMsgIdSetType()) );
    stream->writeTextElement("RequestCorrelationIdSetType", QString("%1").arg(getReqCorrelIdSetType()));
    
    if(getReqMsgIdSetType() == MessageIdSetMethod::Manually)
        stream->writeTextElement("UserMessageId", getUserMsgId());
    else
        stream->writeTextElement("UserMessageId", QString());

    if(getReqCorrelIdSetType() == MessageIdSetMethod::Manually)
        stream->writeTextElement("UserCorrelationId", getUserCorrelId());
    else
        stream->writeTextElement("UserCorrelationId", QString());

    stream->writeTextElement("ResponseSelectionMethod", QString("%1").arg(getResponseSelectionMethod()));
    stream->writeTextElement("ResponseTimeout", QString("%1").arg(getResponseTimeout()));
    stream->writeStartElement("AcceptanceCriteria");
    for(int i = 0; i < acceptanceCriteria.count(); i++)
    {
        stream->writeStartElement("ACItem");
        stream->writeCDATA(acceptanceCriteria.at(i));
        stream->writeEndElement();
    }
    stream->writeEndElement();
	stream->writeStartElement("Request");
	stream->writeCDATA(getRequest());
	stream->writeEndElement();
	stream->writeStartElement("Response");
	stream->writeCDATA(getResponse());
	stream->writeEndElement();
	stream->writeEndElement();
}

void TestCaseItem::fromXml(QDomNode xml)
{
	//testcase name is already handled in constructor
	inQueueDetails.fromXml(xml.namedItem("InQueueDetails").namedItem("QueueDetails"));
	outQueueDetails.fromXml(xml.namedItem("OutQueueDetails").namedItem("QueueDetails"));
    setReqMsgIdSetType(xml.firstChildElement("RequestMessageIdSetType").text().toInt());
    setReqCorrelIdSetType(xml.firstChildElement("RequestCorrelationIdSetType").text().toInt());
    setUserMsgId(xml.firstChildElement("UserMessageId").text());
    setUserCorrelId(xml.firstChildElement("UserCorrelationId").text());
    setResponseSelectionMethod(xml.firstChildElement("ResponseSelectionMethod").text().toInt());
    setResponseTimeout(xml.firstChildElement("ResponseTimeout").text().toLong());

    QDomNode acItems = xml.namedItem("AcceptanceCriteria");
    QDomNodeList childs = acItems.childNodes();
    for(int i = 0; i < childs.count(); i++)
    {
        addAcceptanceCriteria(childs.at(i).toElement().text());
    }

	setRequest(xml.firstChildElement("Request").text());
	setResponse(xml.firstChildElement("Response").text());
}

void TestCaseItem::setReqMsgIdSetType(int type)
{
    reqMsgIdSetType = type;
}

int TestCaseItem::getReqMsgIdSetType()
{
    return reqMsgIdSetType;
}

void TestCaseItem::setReqCorrelIdSetType(int type)
{
    reqCorrelIdSetType = type;
}

int TestCaseItem::getReqCorrelIdSetType()
{
    return reqCorrelIdSetType;
}

void TestCaseItem::setUserMsgId(QString id)
{
    userMsgId = id;
}

QString TestCaseItem::getUserMsgId()
{
    return userMsgId;
}

void TestCaseItem::setUserCorrelId(QString corid)
{
    userCorrelId = corid;
}

QString TestCaseItem::getUserCorrelId()
{
    return userCorrelId;
}

void TestCaseItem::setResponseSelectionMethod(int method)
{
    responseSelectionMethod = method;
}

int TestCaseItem::getResponseSelectionMethod()
{
    return responseSelectionMethod;
}

void TestCaseItem::setResponseTimeout(long t_out)
{
    responseTimeout = t_out;
}

long TestCaseItem::getResponseTimeout()
{
    return responseTimeout;
}

void TestCaseItem::setRealRequestMsgId(ImqBinary id)
{    
    realRequestMsgId = QString(QByteArray((const char *)id.dataPointer(), id.dataLength()));
}

QString TestCaseItem::getRealRequestMsgId()
{
    return realRequestMsgId;
}

void TestCaseItem::setRealRequestCorrelId(ImqBinary id)
{
    realRequestCorrelId = QString(QByteArray((const char *)id.dataPointer(), id.dataLength()));
}

QString TestCaseItem::getRealRequestCorrelId()
{
    return realRequestCorrelId;
}

void TestCaseItem::setRealResponseMsgId(ImqBinary id)
{
    realResponseMsgId = QString(QByteArray((const char *)id.dataPointer(), id.dataLength()));
}

QString TestCaseItem::getRealResponseMsgId()
{
    return realResponseMsgId;
}

void TestCaseItem::setRealResponseCorrelId(ImqBinary id)
{
    realResponseCorrelId = QString(QByteArray((const char *)id.dataPointer(), id.dataLength()));
}

QString TestCaseItem::getRealResponseCorrelId()
{
    return realResponseCorrelId;
}

bool TestCaseItem::validate()
{
    bool res = AcceptanceCriteria::validate(getResponse());
    if(res)
        status = TestCaseStatus::Passed;
    else
        status = TestCaseStatus::Failed;

    return res;
}

void TestCaseItem::setStatus(int s)
{
    status = s;
}

int TestCaseItem::getStatus()
{
    return status;
}

unsigned long TestCaseItem::count = 0;