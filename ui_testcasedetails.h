/********************************************************************************
** Form generated from reading UI file 'testcasedetails.ui'
**
** Created: Sat 21. Aug 16:31:34 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCASEDETAILS_H
#define UI_TESTCASEDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestCaseDetails
{
public:
    QLabel *label;

    void setupUi(QWidget *TestCaseDetails)
    {
        if (TestCaseDetails->objectName().isEmpty())
            TestCaseDetails->setObjectName(QString::fromUtf8("TestCaseDetails"));
        TestCaseDetails->resize(614, 445);
        label = new QLabel(TestCaseDetails);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 171, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(TestCaseDetails);

        QMetaObject::connectSlotsByName(TestCaseDetails);
    } // setupUi

    void retranslateUi(QWidget *TestCaseDetails)
    {
        TestCaseDetails->setWindowTitle(QApplication::translate("TestCaseDetails", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TestCaseDetails", "Test Case Details", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestCaseDetails: public Ui_TestCaseDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCASEDETAILS_H
