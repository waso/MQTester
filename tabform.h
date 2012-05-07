#ifndef TABFORM_H
#define TABFORM_H

#include <QWidget>
#include <QModelIndex>

class TabForm : public QWidget
{
	Q_OBJECT

public:
	TabForm(QWidget *parent);
	~TabForm();
	QPersistentModelIndex getIndex(void);

protected:
	QPersistentModelIndex * tcIndex;
};

#endif // TABFORM_H
