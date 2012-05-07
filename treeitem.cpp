#include <QStringList>
#include "treeitem.h"

TreeItem::TreeItem(const QList<QVariant> &data, TreeItem *parent)
{
    parentItem = parent;
    itemData << data;
    itemName = data.first().toString();
}

TreeItem::~TreeItem()
{
    qDeleteAll(childItems);
}

void TreeItem::appendChild(TreeItem *item)
{
    childItems.append(item);
}

TreeItem *TreeItem::child(int row)
{
    return childItems.value(row);
}

int TreeItem::childCount() const
{
    return childItems.count();
}

int TreeItem::columnCount() const
{
    return itemData.count();
}

QVariant TreeItem::data(int column) const
{
    return itemData.value(column);
}


TreeItem *TreeItem::parent()
{
    return parentItem;
}


int TreeItem::row() const
{
    if (parentItem)
        return parentItem->childItems.indexOf(const_cast<TreeItem*>(this));

    return 0;
}

bool TreeItem::removeChild(int pos)
{
    childItems.removeAt(pos);
    return true;
}

QString TreeItem::getItemName()
{
    return itemName;
}

void TreeItem::setItemName(QString name)
{
	itemName = name;
    itemData.clear();
    itemData << itemName;
}

ItemType::types TreeItem::getType()
{
    return type;
}
