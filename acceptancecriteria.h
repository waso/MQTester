#ifndef ACCEPTANCECRITERIA_H
#define ACCEPTANCECRITERIA_H

#include <QObject>
#include <QStringList>
#include <QString>

class AcceptanceCriteria : public QObject
{
    Q_OBJECT

public:
    AcceptanceCriteria(QObject *parent = 0);
    ~AcceptanceCriteria();
    void addAcceptanceCriteria(QString str);
    void removeAcceptanceCriteria(QString str);    
    QStringList getACList();

protected:
    bool validate(QString msg);
    QStringList acceptanceCriteria;
};

#endif // ACCEPTANCECRITERIA_H
