#ifndef REGISTRY_H
#define REGISTRY_H

#include <QString>
#include <QStringList>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QList>

class Registry
{

private:
        QString filename;
        QList<QStringList> commands;// one command={"name","mini-description","fulldescription"}
        int countCommand=0;
        QSqlDatabase dbase=QSqlDatabase::addDatabase("QSQLITE");
public:
    Registry(QString filename);
    bool readRegistry();
    bool writeRegistry();
    QList<QStringList> getCommands();
    int getAmountofCommands();
    ~Registry();

};

#endif // REGISTRY_H
