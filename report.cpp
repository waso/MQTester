#include "report.h"

Report::Report(QObject *parent) : QObject(parent)
{

}

Report::~Report()
{

}

QString Report::generateReportContent(TreeModel * model)
{
    QString header = "<html><head><style type=\"text/css\">  TABLE.MYTABLE  {     font-family:arial;     font-size:10pt;     width:500px;     border-style:double;     border-color:black;     border-width:1px;  }  TH.MYTABLE  {     font-size:10pt;     background-color:#FFFFFF;     color:black;     border-width:1px;  }  TR.MYTABLE  {  }  TD.MYTABLE  {     font-size:10pt;     background-color:#FFFFFF;     color:black;     border-style:solid;     border-width:1px;     text-align:center;  }  TD.MYTABLEGREEN  {     font-size:10pt;     background-color:#00EB4E;     color:black;     border-style:solid;     border-width:1px;     text-align:center;  }  TD.MYTABLERED  {     font-size:10pt;     background-color:#FF0033;     color:black;     border-style:solid;     border-width:1px;     text-align:center;  }</style></head><body><center> <TABLE border=\"0\"><tr><td><TABLE CLASS=\"MYTABLE\">    <THEAD>      <TR CLASS=\"MYTABLE\">        <TH CLASS=\"MYTABLE\">Project name</TH>        <TH CLASS=\"MYTABLE\">Suite name</TH>        <TH CLASS=\"MYTABLE\">Test Case name</TH>        <TH CLASS=\"MYTABLE\">Status</TH>      </TR>    </THEAD>    <TBODY>";
    QString table_footer = "</TBODY></TABLE>";
    QString footer = "</center></body>";
    QString td_start = "<TD CLASS=\"MYTABLE\">";
    QString td_start_green = "<TD CLASS=\"MYTABLEGREEN\">";
    QString td_start_red   = "<TD CLASS=\"MYTABLERED\">";
    QString td_end = "</TD>";
    QString tr_start = "<TR CLASS=\"MYTABLE\">";
    QString tr_end = "</TR>";
    QString src;
    int total_pass = 0;
    int total_fail = 0;
    int total_norun = 0;
    ProjectItem * proj;
    SuiteItem * suite;
    TestCaseItem * test;

    src += header;
    for(int i = 0; i < model->rowCount(); i++)
	{
		QModelIndex child = model->index(i,0);
		proj = static_cast<ProjectItem *>(child.internalPointer());
        for(int j = 0; j < proj->childCount(); j++)
        {
            suite = static_cast<SuiteItem *>(proj->child(j));
            for(int k = 0; k < suite->childCount(); k++)
            {
                test = static_cast<TestCaseItem *>(suite->child(k));
                src += tr_start;
                src += td_start + QString("%1").arg(proj->getItemName()) + td_end;
                src += td_start + QString("%1").arg(suite->getItemName()) + td_end;
                src += td_start + QString("%1").arg(test->getItemName()) + td_end;

                if(test->getStatus() == TestCaseStatus::Passed)
                {
                    src += td_start_green + QString("PASS<br>") + td_end;
                    total_pass++;
                }
                else if(test->getStatus() == TestCaseStatus::Failed)
                {
                    src += td_start_red + QString("FAIL<br>") + td_end;
                    total_fail++;
                }
                else
                {
                    src += td_start + QString("No run<br>") + td_end;
                    total_norun++;
                }
                src += tr_end;
            }
        }
	}
    src += table_footer;
    src += "</td></tr><tr><td><br>";
    src += "PASS: " + QString("%1").arg(total_pass) + "<br>FAIL: " + QString("%1").arg(total_fail) + "<br>No run: " + QString("%1").arg(total_norun) + "<br>";
    src += "<br>Report generated on " + QDate::currentDate().toString("d MMMM yyyy") + " at " + QTime::currentTime().toString();
    src += "</td></tr></table>";
    src += footer;

    return src;
}

void Report::exportToPdf(TreeModel * model, QString filename)
{
    QWebView view = QWebView();
    QWebPage page = QWebPage();

    if (filename.isEmpty())
        return;

    view.setHtml(generateReportContent(model));

    if (QFileInfo(filename).suffix().isEmpty())
        filename.append(".pdf");

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filename);
    view.print(&printer);
}