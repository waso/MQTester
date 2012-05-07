#include "renameitemdialog.h"

RenameItemDialog::RenameItemDialog(QWidget *parent) : QDialog(parent)
{
    ui.setupUi(this);
    okButton = ui.buttonBox->button(QDialogButtonBox::Ok);
    cancelButton = ui.buttonBox->button(QDialogButtonBox::Cancel);
    connect((const QObject *)okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect((const QObject *)cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

RenameItemDialog::~RenameItemDialog()
{

}

void RenameItemDialog::accept()
{
    name = ui.newName->text().trimmed();
    done(1);
}

void RenameItemDialog::reject()
{
    name = QString("");
    done(-1);
}

QString RenameItemDialog::getUserInput()
{
    return name;
}

void RenameItemDialog::setUserInput(QString old_name)
{
    ui.newName->setText(old_name);
}
