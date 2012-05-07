#include "workspaceitem.h"

WorkspaceItem::WorkspaceItem(QObject *parent) :
    BaseItem(parent)
{
    id = (++WorkspaceItem::count);
    itemType = ItemType::Workspace;
}

QString WorkspaceItem::getItemName()
{
    return QString("workspace ").append(QString::number(id));
}

int WorkspaceItem::getItemType()
{
    return itemType;
}

unsigned long WorkspaceItem::count = 0;

