#ifndef ACEDITOR_H
#define ACEDITOR_H

#include <QDialog>
#include <QString>
#include "ui_aceditor.h"

class ACEditor : public QDialog
{
    Q_OBJECT

public:
    ACEditor(QWidget *parent = 0);
    ~ACEditor();
    QString getUserInput();

public slots:
    void accept();
    void reject();

private:
    Ui::ACEditor ui;
    QString text;
    QPushButton* okButton;
    QPushButton* cancelButton;
};

#endif // ACEDITOR_H
