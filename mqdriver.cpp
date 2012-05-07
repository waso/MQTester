#include "mqdriver.h"

MqDriver::MqDriver(QTextEdit * logWidget, QObject *parent) : QObject(parent)
{
	log = new Log(logWidget);
}

MqDriver::MqDriver(QObject *parent) : QObject(parent)
{
	log = new Log();
}

MqDriver::~MqDriver()
{
}

void MqDriver::setMessageFormat(ImqMessage * msg, QString format)
{
    if(format == "MQFMT_STRING")
        msg->setFormat(MQFMT_STRING);
    else if(format == "MQFMT_RF_HEADER")
        msg->setFormat(MQFMT_RF_HEADER);
    else if(format == "MQFMT_RF_HEADER_2")
        msg->setFormat(MQFMT_RF_HEADER_2);
    else if(format == "MQFMT_ADMIN")
        msg->setFormat(MQFMT_ADMIN);
    else if(format == "MQFMT_CICS")
        msg->setFormat(MQFMT_CICS);
    else if(format == "MQFMT_COMMAND_1")
        msg->setFormat(MQFMT_COMMAND_1);
    else if(format == "MQFMT_COMMAND_2")
        msg->setFormat(MQFMT_COMMAND_2);
    else if(format == "MQFMT_DEAD_LETTER_HEADER")
        msg->setFormat(MQFMT_DEAD_LETTER_HEADER);
    else if(format == "MQFMT_DIST_HEADER")
        msg->setFormat(MQFMT_DIST_HEADER);
    else if(format == "MQFMT_EVENT")
        msg->setFormat(MQFMT_EVENT);
    else if(format == "MQFMT_IMS")
        msg->setFormat(MQFMT_IMS);
    else if(format == "MQFMT_IMS_VAR_STRING")
        msg->setFormat(MQFMT_IMS_VAR_STRING);
    else if(format == "MQFMT_MD_EXTENSION")
        msg->setFormat(MQFMT_MD_EXTENSION);
    else if(format == "MQFMT_PCF")
        msg->setFormat(MQFMT_PCF);
    else if(format == "MQFMT_REF_MSG_HEADER")
        msg->setFormat(MQFMT_REF_MSG_HEADER);
    else if(format == "MQFMT_TRIGGER")
        msg->setFormat(MQFMT_TRIGGER);
    else if(format == "MQFMT_WORK_INFO_HEADER")
        msg->setFormat(MQFMT_WORK_INFO_HEADER);
    else if(format == "MQFMT_XMIT_Q_HEADER")
        msg->setFormat(MQFMT_XMIT_Q_HEADER);
    else 
        msg->setFormat(MQFMT_STRING);
}

void MqDriver::setPutMessageOptions(ImqMessage * msg, ImqPutMessageOptions * pmo, TestCaseItem * _tc)
{
    if(_tc->getReqMsgIdSetType() == MessageIdSetMethod::Automatically && _tc->getReqCorrelIdSetType() == MessageIdSetMethod::Automatically)
    {
        pmo->setOptions(MQPMO_NEW_MSG_ID + MQPMO_NEW_CORREL_ID);
    }
    else if(_tc->getReqMsgIdSetType() == MessageIdSetMethod::Automatically && _tc->getReqCorrelIdSetType() == MessageIdSetMethod::Manually)
    {
        pmo->setOptions(MQPMO_NEW_MSG_ID);
        msg->setCorrelationId( ImqBinary((const void *)_tc->getUserCorrelId().toAscii().data(),24) );
    }
    else if(_tc->getReqMsgIdSetType() == MessageIdSetMethod::Manually && _tc->getReqCorrelIdSetType() == MessageIdSetMethod::Automatically)
    {
        pmo->setOptions(MQPMO_NEW_CORREL_ID);
        msg->setMessageId( ImqBinary((const void *)_tc->getUserMsgId().toAscii().data(),24) );
    }
    else
    {
        msg->setMessageId( ImqBinary((const void *)_tc->getUserMsgId().toAscii().data(),24) );
        msg->setCorrelationId( ImqBinary((const void *)_tc->getUserCorrelId().toAscii().data(),24) );
    }
}

ImqBoolean MqDriver::setTransportType(ImqChannel * channel, QString transportType)
{
    if(transportType == "MQXPT_LU62")
        return channel->setTransportType(MQXPT_LU62);
    else if(transportType == "MQXPT_TCP")
        return channel->setTransportType(MQXPT_TCP);
    else if(transportType == "MQXPT_NETBIOS")
        return channel->setTransportType(MQXPT_NETBIOS);
    else if(transportType == "MQXPT_SPX")
        return channel->setTransportType(MQXPT_SPX);
    else 
        return channel->setTransportType(MQXPT_TCP);
}

void MqDriver::setGetMessageOptions(ImqMessage * msg, ImqGetMessageOptions * gmo, TestCaseItem * _tc, ImqMessage * inmsg)
{
    if(_tc->getResponseSelectionMethod() == ResponseSelectionMethod::Request_Id_Equal_Response_Id)
    {
        gmo->setMatchOptions(MQMO_MATCH_MSG_ID);
        msg->setMessageId(inmsg->messageId());
        msg->setCorrelationId();
    }
    else if(_tc->getResponseSelectionMethod() == ResponseSelectionMethod::Request_Correl_Id_Equal_Response_Correl_Id)
    {
        gmo->setMatchOptions(MQMO_MATCH_CORREL_ID);
        msg->setMessageId();
        msg->setCorrelationId(inmsg->correlationId());
    }
    else if(_tc->getResponseSelectionMethod() == ResponseSelectionMethod::Request_Id_Equal_Response_Correl_Id)
    {
        gmo->setMatchOptions(MQMO_MATCH_CORREL_ID);
        msg->setMessageId();
        msg->setCorrelationId(inmsg->messageId());
    }
    else
    {
        gmo->setMatchOptions(MQMO_NONE);
        msg->setMessageId();
        msg->setCorrelationId();
    }
}

bool MqDriver::runTestCase(TestCaseItem *tc)
{
	log->appendln("===== Starting test \"" + tc->getItemName() + "\" ===== ");
	QByteArray byteArray = tc->getRequest().toAscii();

	ImqMessage inmsg;
    ImqChannel inchannel;
    ImqQueueManager inmanager;
    ImqQueue inqueue;
    ImqPutMessageOptions pmo;

    setMessageFormat(&inmsg, tc->getInQueueDetails()->getMessageFormat());
    setPutMessageOptions(&inmsg, &pmo, tc);
	inmsg.useFullBuffer(byteArray.data(), byteArray.length());
	inchannel.setChannelName(tc->getInQueueDetails()->getChannelName().toAscii().data());	
    if(! tc->getInQueueDetails()->getUserId().isEmpty())
    {
        inchannel.setUserId(tc->getInQueueDetails()->getUserId().toAscii().data());
        inchannel.setPassword(tc->getInQueueDetails()->getPassword().toAscii().data());
    }
    setTransportType(&inchannel, tc->getInQueueDetails()->getTransportType());
	QString inConnName = tc->getInQueueDetails()->getHostName() + "(" + tc->getInQueueDetails()->getPortNumber() + ")";
	inchannel.setConnectionName(inConnName.toAscii().data());

    if(tc->getInQueueDetails()->getUserId().length() > 0 && tc->getInQueueDetails()->getPassword().length() > 0)
    {
        inchannel.setUserId(tc->getInQueueDetails()->getUserId().toAscii().data());
        inchannel.setPassword(tc->getInQueueDetails()->getPassword().toAscii().data());
    }
	inmanager.setChannelReference(inchannel);
	inmanager.setName(tc->getInQueueDetails()->getQueueManagerName().toAscii().data());

	log->append("Connecting to Queue Manager...");
    if( ! inmanager.connect())
    {
        log->appendln(QString("Queue Manager connect failed with error code %1").arg((int)inmanager.reasonCode()));
        return false;
    }
	log->appendln(" Successful");
	
	inqueue.setConnectionReference(inmanager);
	inqueue.setName(tc->getInQueueDetails()->getQueueName().toAscii().data());
	inqueue.setOpenOptions(MQOO_OUTPUT + MQOO_FAIL_IF_QUIESCING);
	
	log->append("Sending message on queue...");

	if(!inqueue.put(inmsg, pmo))
	{
		log->appendln(" Error");
		return false;
	}
    else
        log->appendln(" Successful");

    log->append("Closing the Queue...");

	if( ! inqueue.close())
    {
        log->appendln(QString("Queue close failed with error code %1").arg((int)inqueue.reasonCode()));
        return false;
    }
    else
        log->appendln(" Successful");


	log->append("Disconnecting from Queue Manager...");

	if( ! inmanager.disconnect())
    {
        log->appendln(QString("Queue Manager disconnect failed with error code %1").arg((int)inmanager.reasonCode()));
        return false;
    }
    else
        log->appendln(" Successful");

    inmanager.setChannelReference();

    tc->setRealRequestMsgId(inmsg.messageId());
    tc->setRealRequestCorrelId(inmsg.correlationId());
    ImqBinary msgId = inmsg.messageId();
    ImqBinary corId = inmsg.correlationId();

	ImqMessage outmsg;
    ImqGetMessageOptions gmo;
    ImqChannel outchannel;
    ImqQueueManager outmanager;
    ImqQueue outqueue;

    setMessageFormat(&outmsg,tc->getOutQueueDetails()->getMessageFormat());
    setGetMessageOptions(&outmsg, &gmo, tc, &inmsg);
    gmo.setWaitInterval((MQLONG)(tc->getResponseTimeout() * 1000));
    gmo.setOptions(MQGMO_WAIT | MQGMO_FAIL_IF_QUIESCING);
	
	outchannel.setChannelName(tc->getOutQueueDetails()->getChannelName().toAscii().data());
    if(! tc->getOutQueueDetails()->getUserId().isEmpty())
    {
        outchannel.setUserId(tc->getOutQueueDetails()->getUserId().toAscii().data());
        outchannel.setPassword(tc->getOutQueueDetails()->getPassword().toAscii().data());
    }
    setTransportType(&outchannel, tc->getOutQueueDetails()->getTransportType());
	QString outConnName = tc->getOutQueueDetails()->getHostName() + "(" + tc->getOutQueueDetails()->getPortNumber() + ")";
	outchannel.setConnectionName(outConnName.toAscii().data());
	if(tc->getOutQueueDetails()->getUserId().length() > 0 && tc->getOutQueueDetails()->getPassword().length() > 0)
    {
        outchannel.setUserId(tc->getOutQueueDetails()->getUserId().toAscii().data());
        outchannel.setPassword(tc->getOutQueueDetails()->getPassword().toAscii().data());
    }
	outmanager.setChannelReference(outchannel);
	outmanager.setName(tc->getOutQueueDetails()->getQueueManagerName().toAscii().data());

	log->append("Connecting to queue...");

	if( ! outmanager.connect())
    {
        log->appendln(QString("Queue Manager connect failed with error code %1").arg((int)outmanager.reasonCode()));
        return false;
    }
	log->appendln(" Successful");

	outqueue.setConnectionReference(inmanager);
	outqueue.setName(tc->getOutQueueDetails()->getQueueName().toAscii().data());
	outqueue.setOpenOptions(MQOO_INPUT_AS_Q_DEF + MQOO_FAIL_IF_QUIESCING);
    outqueue.open();

    if(outqueue.reasonCode()) 
    {
        log->appendln(QString("Queue open failed with error code %1").arg((long)outqueue.reasonCode()));
        return false;
    }
	log->append("Receiving message from queue...");

	if(!outqueue.get(outmsg, gmo))
	{
        log->appendln(QString("Error. Msg get failed with error code %1").arg((long)outqueue.reasonCode()));
		return false;
	}

	log->appendln(" Successful");
	log->append("Closing the Queue...");

	if( ! outqueue.close())
    {
        log->appendln(QString("Queue close failed with error code %1").arg((int)outqueue.reasonCode()));
        return false;
    }
    else
        log->appendln(" Successful");


	log->append("Disconnecting from Queue Manager...");

	if( ! outmanager.disconnect())
    {
        log->appendln(QString("Queue Manager disconnect failed with error code %1").arg((int)outmanager.reasonCode()));
        return false;
    }
    else
        log->appendln(" Successful");

	QString res = QString("");
	res.append(inmsg.bufferPointer());
	tc->setResponse(res);

    tc->setRealResponseMsgId(outmsg.messageId());
    tc->setRealResponseCorrelId(outmsg.correlationId());

    return tc->validate();
}
