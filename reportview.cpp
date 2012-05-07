#include "reportview.h"

ReportView::ReportView(QWidget *parent) : QDialog(parent)
{
    ui.setupUi(this);
}

ReportView::~ReportView()
{

}

void ReportView::setContent(QString src)
{
    content = src;
    ui.webView->setHtml(content);
}