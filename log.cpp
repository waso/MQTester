#include "log.h"

Log::Log(QTextEdit * logWindow, QObject *parent) : QObject(parent), logwindow(logWindow)
{

}

Log::Log() : QObject(0), logwindow(0)
{

}

Log::~Log()
{

}

void Log::append(QString msg)
{
	_log.append(msg);

	appendToWindow(msg);
}

void Log::appendln(QString msg)
{
	_log.append(msg);
	_log.append("\n");

	appendToWindow(msg + "\n");
}

QString Log::value()
{
	return _log;
}

void Log::appendToWindow(QString msg)
{
	if(logwindow)
		emit logwindow->insertPlainText(msg);
}