#ifndef REGISTRY_H
#define REGISTRY_H

#include <QString>
#include <QStringList>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

class registry
{

private:
        QString filename;
        QStringList* commands=new QStringList[20];// one command={"name","mini-description","fulldescription"}
        int countCommand=0;
        QSqlDatabase dbase=QSqlDatabase::addDatabase("QSQLITE");
public:
    registry(QString filename);
    bool readRegistry();
    bool writeRegistry(QString filename);
    QStringList* getCommands();
    int getAmountofCommands();
    ~registry();

};

#endif // REGISTRY_H
