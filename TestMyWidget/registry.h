#ifndef REGISTRY_H
#define REGISTRY_H

#include <QString>
#include <QStringList>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QList>
#include <groupboxcommand.h>
#include <QObject>
class Registry : public QObject
{
    Q_OBJECT

private:
        QString filename;
        QList<QStringList> commands;// one command={"name","mini-description","fulldescription"}
        int countCommand=0;
        QSqlDatabase dbase=QSqlDatabase::addDatabase("QSQLITE");

private slots:
        void updateCommand(GroupboxCommand*);
public:
    Registry(QString filename);
    bool readRegistry();
    bool writeRegistry();
    QList<QStringList> getCommands();
    int getAmountofCommands();
    ~Registry();

};

#endif // REGISTRY_H
