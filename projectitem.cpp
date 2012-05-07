#include "projectitem.h"

ProjectItem::ProjectItem(const QList<QVariant> &data, TreeItem *parent) : TreeItem(data,parent)
{
    id = (++ProjectItem::count);
    type = ItemType::Project;
}

void ProjectItem::toXml(QXmlStreamWriter * stream)
{
	stream->writeStartElement("Project");
	stream->writeAttribute("name",getItemName());
	for(int i = 0; i < childCount(); i++)
	{
		SuiteItem * child = static_cast<SuiteItem *>( this->child(i) );
		child->toXml(stream);
	}
	stream->writeEndElement();
}

void ProjectItem::fromXml(QDomNode xml)
{
}

unsigned long ProjectItem::count = 0;
