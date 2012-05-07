#ifndef TESTCASEFORM_H
#define TESTCASEFORM_H

#include <QWidget>
#include <QModelIndex>
#include <QTime>
#include "testcaseitem.h"
#include "tabform.h"
#include "aceditor.h"

namespace Ui {
    class TestCaseForm;
}

class TestCaseForm : public TabForm
{
    Q_OBJECT

public:
    explicit TestCaseForm(QPersistentModelIndex *tci, QWidget *parent = 0);
    ~TestCaseForm();
    void loadData(void);
    void saveData(void);
    void updateResponseMessage();
    bool isChanged();
    void setTestStatus(bool status);
    void updateRunHour();

public slots:
	void changePage(int index);
    void messageIdSetTypeChanged(int index);
    void correlationIdSetTypeChanged(int index);
    void addAcItem();
    void removeAcItem();

private:
    Ui::TestCaseForm *ui;
    TestCaseItem *tc;
    bool changed;
};

#endif // TESTCASEFORM_H
