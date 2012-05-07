#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <stdio.h>
#include <iostream>
#include <QObject>
#include <QString>
#include <QXmlStreamWriter>
#include <QModelIndex>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <qDebug>
#include <QTextStream>
#include "treemodel.h"
#include "projectitem.h"

class DataStorage : public QObject
{
	Q_OBJECT

public:
	DataStorage(QObject *parent);
	bool save(TreeModel * model, QString filename);
	bool load(TreeModel * model, QString filename);
	~DataStorage();
	int compare(TreeModel * model);

private:
	QString getXmlFromModel(TreeModel * model);
	static QString lastStoredXmlModel;
	void handleDomNode(QDomNode node, TreeModel * model, QPersistentModelIndex parent);
};

#endif // DATASTORAGE_H
