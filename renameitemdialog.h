#ifndef RENAMEITEMDIALOG_H
#define RENAMEITEMDIALOG_H

#include <QDialog>
#include <QString>
#include "ui_renameitemdialog.h"

class RenameItemDialog : public QDialog
{
    Q_OBJECT

public:
    RenameItemDialog(QWidget *parent = 0);
    ~RenameItemDialog();
    QString getUserInput();
    void setUserInput(QString old_name);

public slots:
    void accept();
    void reject();

private:
    Ui::RenameItemDialog ui;
    QString name;
    QPushButton* okButton;
    QPushButton* cancelButton;
};

#endif // RENAMEITEMDIALOG_H
