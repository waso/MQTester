#include "acceptancecriteria.h"

AcceptanceCriteria::AcceptanceCriteria(QObject *parent)
    : QObject(parent)
{

}

AcceptanceCriteria::~AcceptanceCriteria()
{

}

void AcceptanceCriteria::addAcceptanceCriteria(QString str)
{
    //Adding new Acc Cri only if exactly the same is not already on the list 
    if(acceptanceCriteria.indexOf(str) < 0)
    {
        acceptanceCriteria << str;
    }    
}

void AcceptanceCriteria::removeAcceptanceCriteria(QString str)
{
    int index = acceptanceCriteria.indexOf(str);
    if(index > -1)
        acceptanceCriteria.removeAt(index);
}

bool AcceptanceCriteria::validate(QString msg)
{
    for(int i = 0; i < acceptanceCriteria.count(); i++)
    {
        if( ! msg.contains(acceptanceCriteria.at(i), Qt::CaseSensitive))
            return false;
    }
    return true;
}

QStringList AcceptanceCriteria::getACList()
{
    return acceptanceCriteria;
}