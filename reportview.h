#ifndef REPORTVIEW_H
#define REPORTVIEW_H

#include <QDialog>
#include "ui_reportview.h"

class ReportView : public QDialog
{
    Q_OBJECT

public:
    ReportView(QWidget *parent = 0);
    ~ReportView();
    void setContent(QString src);

private:
    Ui::ReportView ui;
    QString content;
};

#endif // REPORTVIEW_H
