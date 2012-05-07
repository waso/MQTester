#ifndef SUITEITEM_H
#define SUITEITEM_H

#include <QDomNode>
#include "treeitem.h"
#include "custom_types.h"
#include "testcaseitem.h"
#include "xmldao.h"

class SuiteItem : public TreeItem, public XmlDao
{
private:
    int id;

public:
    SuiteItem(const QList<QVariant> &data, TreeItem *parent = 0);
	void toXml(QXmlStreamWriter * stream);
	void fromXml(QDomNode xml);

    static unsigned long count;

signals:

public slots:

};

#endif // SUITEITEM_H
