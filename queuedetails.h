#ifndef QUEUEDETAILS_H
#define QUEUEDETAILS_H

#include <QString>
#include "xmldao.h"

class QueueDetails : public XmlDao
{
private:
    QString hostName;
    QString portNumber;
    QString channelName;
    QString queueName;
    QString queueManagerName;
    QString ipVersion;
    QString transaportType;
    QString userId;
    QString password;
    QString messageFormat;

public:
    QueueDetails();

    void setHostName(QString newVal);
    QString getHostName();

    void setPortNumber(QString newVal);
    QString getPortNumber();

    void setChannelName(QString newVal);
    QString getChannelName();

    void setQueueName(QString newVal);
    QString getQueueName();

    void setQueueManagerName(QString newVal);
    QString getQueueManagerName();

	void toXml(QXmlStreamWriter * stream);
	void fromXml(QDomNode xml);

    void setIpVersion(QString ipver);
    QString getIpVersion();

    void setTransportType(QString transport);
    QString getTransportType();

    void setUserId(QString user);
    QString getUserId();

    void setPassword(QString pass);
    QString getPassword();

    void setMessageFormat(QString format);
    QString getMessageFormat();
};

#endif // QUEUEDETAILS_H
