/********************************************************************************
** Form generated from reading UI file 'testsrunnerdialog.ui'
**
** Created: Fri 25. Mar 14:16:03 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSRUNNERDIALOG_H
#define UI_TESTSRUNNERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestsRunnerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *runButton;
    QPushButton *stopButton;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QTextEdit *logWindow;

    void setupUi(QDialog *TestsRunnerDialog)
    {
        if (TestsRunnerDialog->objectName().isEmpty())
            TestsRunnerDialog->setObjectName(QString::fromUtf8("TestsRunnerDialog"));
        TestsRunnerDialog->resize(638, 396);
        verticalLayout_2 = new QVBoxLayout(TestsRunnerDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        runButton = new QPushButton(TestsRunnerDialog);
        runButton->setObjectName(QString::fromUtf8("runButton"));

        horizontalLayout->addWidget(runButton);

        stopButton = new QPushButton(TestsRunnerDialog);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout->addWidget(stopButton);

        closeButton = new QPushButton(TestsRunnerDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(TestsRunnerDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border: 1px solid black;\n"
"text-align: top;\n"
"padding: 1px;\n"
"border-radius: 3px;\n"
"background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
"stop: 0 #E6E9EB,\n"
"stop: 1 #E6E9EB );\n"
"width: 15px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,\n"
"stop: 0 #04BD26,\n"
"stop: 1 #04BD26 );\n"
"border-radius: 3px;\n"
"border: 1px solid black;\n"
"}\n"
""));
        progressBar->setMaximum(100000);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        logWindow = new QTextEdit(TestsRunnerDialog);
        logWindow->setObjectName(QString::fromUtf8("logWindow"));

        verticalLayout->addWidget(logWindow);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TestsRunnerDialog);

        QMetaObject::connectSlotsByName(TestsRunnerDialog);
    } // setupUi

    void retranslateUi(QDialog *TestsRunnerDialog)
    {
        TestsRunnerDialog->setWindowTitle(QApplication::translate("TestsRunnerDialog", "TestsRunnerDialog", 0, QApplication::UnicodeUTF8));
        runButton->setText(QApplication::translate("TestsRunnerDialog", "Run", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("TestsRunnerDialog", "Stop", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("TestsRunnerDialog", "Close", 0, QApplication::UnicodeUTF8));
        progressBar->setFormat(QApplication::translate("TestsRunnerDialog", "%p%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestsRunnerDialog: public Ui_TestsRunnerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSRUNNERDIALOG_H
