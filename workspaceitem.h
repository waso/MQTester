#ifndef WORKSPACEITEM_H
#define WORKSPACEITEM_H

#include "baseitem.h"
#include "itemtype.h"

class WorkspaceItem : public BaseItem
{
    Q_OBJECT
private:
    int id;

public:
    explicit WorkspaceItem(QObject *parent = 0);
    QString getItemName();
    int getItemType();

    static unsigned long count;
signals:

public slots:

};

#endif // WORKSPACEITEM_H
