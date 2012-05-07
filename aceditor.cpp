#include "aceditor.h"

ACEditor::ACEditor(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    okButton = ui.buttonBox->button(QDialogButtonBox::Ok);
    cancelButton = ui.buttonBox->button(QDialogButtonBox::Cancel);
    connect((const QObject *)okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect((const QObject *)cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

ACEditor::~ACEditor()
{

}

void ACEditor::accept()
{
    text = ui.textToFind->text();
    done(1);
}

void ACEditor::reject()
{
    text = QString("");
    done(-1);
}

QString ACEditor::getUserInput()
{
    return text;
}
