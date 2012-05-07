#include "queuedetails.h"

QueueDetails::QueueDetails() : hostName(QString("")), portNumber(""), channelName(""), queueName(""), queueManagerName(""), ipVersion("MQIPADDR_IPV4"), transaportType("MQXPT_TCP"), messageFormat("MQFMT_STRING")
{
}

void QueueDetails::setHostName(QString newVal)
{
	hostName = newVal;
}

QString QueueDetails::getHostName()
{
    return hostName;
}

void QueueDetails::setPortNumber(QString newVal)
{
    portNumber = newVal;
}

QString QueueDetails::getPortNumber()
{
    return portNumber;
}

void QueueDetails::setChannelName(QString newVal)
{
    channelName = newVal;
}

QString QueueDetails::getChannelName()
{
    return channelName;
}

void QueueDetails::setQueueName(QString newVal)
{
    queueName = newVal;
}

QString QueueDetails::getQueueName()
{
    return queueName;
}

void QueueDetails::setQueueManagerName(QString newVal)
{
    queueManagerName = newVal;
}

QString QueueDetails::getQueueManagerName()
{
    return queueManagerName;
}

void QueueDetails::toXml(QXmlStreamWriter * stream)
{
	stream->writeStartElement("QueueDetails");
	stream->writeTextElement("HostName", getHostName());
	stream->writeTextElement("PortNumber", getPortNumber());
	stream->writeTextElement("Channel", getChannelName());
	stream->writeTextElement("Queue", getQueueName());
	stream->writeTextElement("QueueManager", getQueueManagerName());
    stream->writeTextElement("IpVersion", getIpVersion());
    stream->writeTextElement("TransportType", getTransportType());
    stream->writeTextElement("UserId", getUserId());
    stream->writeTextElement("Password", getPassword());
    stream->writeTextElement("MessageFormat", getMessageFormat());
	stream->writeEndElement();
}

void QueueDetails::fromXml(QDomNode xml)
{
	setHostName(xml.firstChildElement("HostName").text());
	setPortNumber(xml.firstChildElement("PortNumber").text());
	setChannelName(xml.firstChildElement("Channel").text());
	setQueueName(xml.firstChildElement("Queue").text());
	setQueueManagerName(xml.firstChildElement("QueueManager").text());
    setIpVersion(xml.firstChildElement("IpVersion").text());
    setTransportType(xml.firstChildElement("TransportType").text());
    setUserId(xml.firstChildElement("UserId").text());
    setPassword(xml.firstChildElement("Password").text());
    setMessageFormat(xml.firstChildElement("MessageFormat").text());
}

void QueueDetails::setIpVersion(QString ipver)
{
    ipVersion = ipver;
}

QString QueueDetails::getIpVersion()
{
    return ipVersion;
}

void QueueDetails::setTransportType(QString transport)
{
    transaportType = transport;
}

QString QueueDetails::getTransportType()
{
    return transaportType;
}

void QueueDetails::setUserId(QString user)
{
    userId = user;
}

QString QueueDetails::getUserId()
{
    return userId;
}

void QueueDetails::setPassword(QString pass)
{
    password = pass;
}

QString QueueDetails::getPassword()
{
    return password;
}

void QueueDetails::setMessageFormat(QString format)
{
    messageFormat = format;
}

QString QueueDetails::getMessageFormat()
{
    return messageFormat;
}