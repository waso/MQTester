#ifndef REPORT_H
#define REPORT_H

#include <QObject>
#include <QList>
#include <QWebView>
#include <QPrinter>
#include <QFileInfo>
#include <QModelIndex>
#include <QTime>
#include <QDate>
#include "treemodel.h"
#include "projectitem.h"
#include "suiteitem.h"
#include "testcaseitem.h"

class Report : public QObject
{
    Q_OBJECT

public:
    Report(QObject *parent = 0);
    ~Report();
    void exportToPdf(TreeModel * model, QString filename);
    QString generateReportContent(TreeModel * model);
};

#endif // REPORT_H
