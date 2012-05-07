#include "datastorage.h"

DataStorage::DataStorage(QObject *parent) : QObject(parent)
{

}

DataStorage::~DataStorage()
{

}

QString DataStorage::lastStoredXmlModel = QString("");

QString DataStorage::getXmlFromModel(TreeModel * model)
{
	QString xml;
	QXmlStreamWriter * stream = new QXmlStreamWriter(&xml);
	ProjectItem * proj;

    stream->setAutoFormatting(true);
    stream->writeDefaultNamespace(QString("http://testsautomation.com/XML/namespace"));
    stream->writeStartDocument();
	stream->writeStartElement("MQTester");
	for(int i = 0; i < model->rowCount(); i++)
	{
		QModelIndex child = model->index(i,0);
		proj = static_cast<ProjectItem *>(child.internalPointer());
		proj->toXml(stream);
	}
	stream->writeEndElement();
	stream->writeEndDocument();
	return xml;
}

bool DataStorage::save(TreeModel * model, QString filename)
{
	QString xml = getXmlFromModel(model);
	QFile file(filename);
	if(!file.open(QFile::WriteOnly | QFile::Text)) 
	{
        return false;
	}
	QTextStream out(&file);
	out << xml;
	file.close();
	lastStoredXmlModel = xml;
	return true;
}

int DataStorage::compare(TreeModel * model)
{
	QString xml = getXmlFromModel(model);
	return DataStorage::lastStoredXmlModel.compare(xml);
}

bool DataStorage::load(TreeModel * model, QString filename)
{
	QString xml;
	QDomDocument xmlDom;
	QDomNode root;
	QDomNode node;

	//delete whole tree
	int childCount = model->rowCount();
	for(int i = 0; i < childCount; i++)
	{
		QModelIndex child = model->index(0,0);
		model->removeRow(child);
	}

	//read XML from file
	QFile file(filename);
	if(!file.open(QFile::ReadOnly | QFile::Text))
		return false;
	QTextStream in(&file);
	xml = in.readAll();
	file.close();

	xmlDom = QDomDocument();
	xmlDom.setContent(xml.toAscii());
	root = xmlDom.documentElement();
	node = root.firstChild();

	QDomNodeList childs;
	while(!node.isNull()) 
	{
		if(node.isElement()) 
		{
			handleDomNode(node, model, QPersistentModelIndex(QModelIndex()));
		}
		node = node.nextSibling();
	}

	return true;
}

void DataStorage::handleDomNode(QDomNode node, TreeModel * model, QPersistentModelIndex parent)
{
	int item_type = -1;

	if(!node.isElement())
		return;

	QDomElement elem = node.toElement();
	QString tagname = elem.tagName();

	if(elem.tagName() == "Project")
		item_type = ItemType::Project;
	else if(elem.tagName() == "Suite")
		item_type = ItemType::Suite;
	else if(elem.tagName() == "TestCase")
		item_type = ItemType::TestCase;
	else
		return;

	model->add(elem.attribute("name"), item_type, parent);
	QPersistentModelIndex cur_item = QPersistentModelIndex(model->index(model->rowCount(parent)-1,0,parent));

	if(item_type == ItemType::TestCase)
	{
		TestCaseItem * tc = static_cast<TestCaseItem *>(cur_item.internalPointer());
		tc->fromXml(node);
		return;
	}

	QDomNodeList childNodes = node.childNodes();
	for(int i = 0; i < childNodes.count(); i++)
	{
		handleDomNode(childNodes.at(i), model, cur_item);
	}
}

