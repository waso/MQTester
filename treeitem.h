#ifndef TREEITEM_H
#define TREEITEM_H

#include <QObject>
#include <QList>
#include <QVariant>
#include "custom_types.h"

class TreeItem : QObject
{
    Q_OBJECT

public:
    TreeItem(const QList<QVariant> &data, TreeItem *parent = 0);
    ~TreeItem();

    void appendChild(TreeItem *child);

    TreeItem *child(int row);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    int row() const;
    TreeItem *parent();
    ItemType::types getType();
    bool removeChild(int pos);
    QString getItemName();
	void setItemName(QString name);

private:
    QList<TreeItem*> childItems;
    QList<QVariant> itemData;
    QString itemName;
    TreeItem *parentItem;

protected:
    ItemType::types type;
};

#endif
