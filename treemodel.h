#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include "treeitem.h"

#define TREE_ITEM_INIT_NAME "init name"

class TreeModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    TreeModel(QObject *parent = 0);
    ~TreeModel();

    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const;
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;    
    void add(const int newItemType, const QModelIndex &parentIndex = QModelIndex());
    void add(const QString initname, const int newItemType, const QModelIndex &parentIndex = QModelIndex());
    bool removeRow(const QModelIndex &itemToDelete);

private:
    void setupModelData(const QStringList &lines, TreeItem *parent);

    TreeItem *rootItem;
    TreeItem *workspace;
};

#endif
