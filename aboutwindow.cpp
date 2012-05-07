#include "aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) : QDialog(parent)
{
    ui.setupUi(this);
    connect(ui.okButton, SIGNAL(clicked()), this, SLOT(accept()));
}

AboutWindow::~AboutWindow()
{

}

void AboutWindow::accept()
{
    done(1);
}