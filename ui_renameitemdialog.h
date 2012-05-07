/********************************************************************************
** Form generated from reading UI file 'renameitemdialog.ui'
**
** Created: Fri 25. Mar 14:16:02 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEITEMDIALOG_H
#define UI_RENAMEITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenameItemDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *newName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameItemDialog)
    {
        if (RenameItemDialog->objectName().isEmpty())
            RenameItemDialog->setObjectName(QString::fromUtf8("RenameItemDialog"));
        RenameItemDialog->resize(447, 73);
        verticalLayout_2 = new QVBoxLayout(RenameItemDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RenameItemDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        newName = new QLineEdit(RenameItemDialog);
        newName->setObjectName(QString::fromUtf8("newName"));

        horizontalLayout->addWidget(newName);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RenameItemDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RenameItemDialog);

        QMetaObject::connectSlotsByName(RenameItemDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameItemDialog)
    {
        RenameItemDialog->setWindowTitle(QApplication::translate("RenameItemDialog", "RenameItemDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenameItemDialog", "New name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenameItemDialog: public Ui_RenameItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEITEMDIALOG_H
