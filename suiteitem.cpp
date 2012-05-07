#include "suiteitem.h"

SuiteItem::SuiteItem(const QList<QVariant> &data, TreeItem *parent) : TreeItem(data,parent)
{
    id = (++SuiteItem::count);
    type = ItemType::Suite;
}

void SuiteItem::toXml(QXmlStreamWriter * stream)
{
	stream->writeStartElement("Suite");
	stream->writeAttribute("name",getItemName());
	for(int i = 0; i < childCount(); i++)
	{
		TestCaseItem * child = static_cast<TestCaseItem *>( this->child(i) );
		child->toXml(stream);
	}
	stream->writeEndElement();
}

void SuiteItem::fromXml(QDomNode xml)
{
}

unsigned long SuiteItem::count = 0;
