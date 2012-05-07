#include "tabform.h"

TabForm::TabForm(QWidget *parent)
	: QWidget(parent)
{

}

TabForm::~TabForm()
{

}

QPersistentModelIndex TabForm::getIndex(void)
{
	return (*tcIndex);
}
