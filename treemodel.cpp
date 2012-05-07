#include <QtGui>
#include "treemodel.h"
#include "projectitem.h"
#include "testcaseitem.h"
#include "suiteitem.h"
#include "custom_types.h"

TreeModel::TreeModel(QObject *parent)
    : QAbstractItemModel(parent)
{
    QList<QVariant> rootData;
    rootData << "Workspace";
    rootItem = new TreeItem(rootData);
}

TreeModel::~TreeModel()
{
    delete rootItem;
}

int TreeModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return static_cast<TreeItem*>(parent.internalPointer())->columnCount();
    else
        return rootItem->columnCount();
}

QVariant TreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole)
        return QVariant();

    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());

    return item->data(index.column());
}

Qt::ItemFlags TreeModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant TreeModel::headerData(int section, Qt::Orientation orientation,
                               int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return rootItem->data(section);

    return QVariant();
}

QModelIndex TreeModel::index(int row, int column, const QModelIndex &parent)
            const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeItem *parentItem;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    TreeItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex TreeModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    TreeItem *childItem = static_cast<TreeItem*>(index.internalPointer());
    TreeItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int TreeModel::rowCount(const QModelIndex &parent) const
{
    TreeItem *parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    return parentItem->childCount();
}

void TreeModel::add(const int newItemType, const QModelIndex &parentIndex)
{
    this->add(TREE_ITEM_INIT_NAME, newItemType, parentIndex);
}


void TreeModel::add(QString initName, const int newItemType, const QModelIndex &parentIndex)
{
    TreeItem *parent;
    QList<QVariant> data;
    data << initName;

    if(!parentIndex.isValid())
    {
        parent = rootItem;
    }
    else
    {
        parent = static_cast<TreeItem*>(parentIndex.internalPointer());
    }

    beginInsertRows(parentIndex, parent->childCount(), parent->childCount());

    if(newItemType == ItemType::Project)
    {
        parent->appendChild(new ProjectItem(data,parent));
    }
    else if(newItemType == ItemType::TestCase)
    {
        parent->appendChild(new TestCaseItem(data,parent));
    }
    else if(newItemType == ItemType::Suite)
    {
        parent->appendChild(new SuiteItem(data,parent));
    }
    else
    {
        parent->appendChild(new TreeItem(data,parent));
    }

    endInsertRows();

	return;
}

bool TreeModel::removeRow(const QModelIndex &itemToDelete)
{
	if(!itemToDelete.isValid()) 
		return false;

    TreeItem *treeItem = static_cast<TreeItem *>(itemToDelete.internalPointer());
    TreeItem *parentItem = treeItem->parent();
	QModelIndex parIndex = createIndex(parentItem->row(),0, parentItem);

    beginRemoveRows(parIndex, treeItem->row(), treeItem->row());
	
    parentItem->removeChild(treeItem->row());
    endRemoveRows();

    return true;
}
