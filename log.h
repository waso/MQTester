#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QString>
#include <QTextEdit>

class Log : public QObject
{
	Q_OBJECT

public:
	Log(QTextEdit * logWindow, QObject *parent = 0);
	Log();
	~Log();
	void append(QString msg);
	void appendln(QString msg);
	QString value();

private:
	QString _log;
	QTextEdit * logwindow;

	void appendToWindow(QString msg);
	
};

#endif // LOG_H
