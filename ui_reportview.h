/********************************************************************************
** Form generated from reading UI file 'reportview.ui'
**
** Created: Fri 25. Mar 14:16:03 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTVIEW_H
#define UI_REPORTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_ReportView
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWebView *webView;

    void setupUi(QDialog *ReportView)
    {
        if (ReportView->objectName().isEmpty())
            ReportView->setObjectName(QString::fromUtf8("ReportView"));
        ReportView->resize(622, 451);
        verticalLayout_2 = new QVBoxLayout(ReportView);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        webView = new QWebView(ReportView);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("about:blank"));

        verticalLayout->addWidget(webView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ReportView);

        QMetaObject::connectSlotsByName(ReportView);
    } // setupUi

    void retranslateUi(QDialog *ReportView)
    {
        ReportView->setWindowTitle(QApplication::translate("ReportView", "ReportView", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReportView: public Ui_ReportView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTVIEW_H
