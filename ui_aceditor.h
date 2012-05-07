/********************************************************************************
** Form generated from reading UI file 'aceditor.ui'
**
** Created: Fri 25. Mar 14:16:03 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACEDITOR_H
#define UI_ACEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ACEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *textToFind;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ACEditor)
    {
        if (ACEditor->objectName().isEmpty())
            ACEditor->setObjectName(QString::fromUtf8("ACEditor"));
        ACEditor->resize(514, 177);
        verticalLayout_2 = new QVBoxLayout(ACEditor);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ACEditor);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textToFind = new QLineEdit(ACEditor);
        textToFind->setObjectName(QString::fromUtf8("textToFind"));

        verticalLayout->addWidget(textToFind);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ACEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ACEditor);

        QMetaObject::connectSlotsByName(ACEditor);
    } // setupUi

    void retranslateUi(QDialog *ACEditor)
    {
        ACEditor->setWindowTitle(QApplication::translate("ACEditor", "ACEditor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ACEditor", "Text to find in response message (case sensitive):", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ACEditor: public Ui_ACEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACEDITOR_H
