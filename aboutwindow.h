#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QDialog>
#include "ui_aboutwindow.h"

class AboutWindow : public QDialog
{
    Q_OBJECT

public:
    AboutWindow(QWidget *parent = 0);
    ~AboutWindow();

public slots:
    void accept();

private:
    Ui::AboutWindow ui;
};

#endif // ABOUTWINDOW_H
