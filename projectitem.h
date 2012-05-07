#ifndef PROJECTITEM_H
#define PROJECTITEM_H

#include <QDomNode>
#include "treeitem.h"
#include "custom_types.h"
#include "xmldao.h"
#include "suiteitem.h"

class ProjectItem : public TreeItem, public XmlDao
{
private:
    int id;

public:
    ProjectItem(const QList<QVariant> &data, TreeItem *parent = 0);
	void toXml(QXmlStreamWriter * stream);
	void fromXml(QDomNode xml);
    static unsigned long count;
signals:

public slots:

};

#endif // PROJECTITEM_H
