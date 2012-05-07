#ifndef XMLDAO_H
#define XMLDAO_H

#include <QObject>
#include <QXmlStreamWriter>
#include <QDomNode>

class XmlDao : public QObject
{
	Q_OBJECT

public:
	XmlDao(QObject *parent = 0);
	~XmlDao();
	virtual void toXml(QXmlStreamWriter * stream) = 0;
	virtual void fromXml(QDomNode xml) = 0;

private:
	
};

#endif // XMLDAO_H
