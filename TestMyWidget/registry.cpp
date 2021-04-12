#include "registry.h"
#include <QDebug>
#include <QDir>
Registry::Registry(QString filename)
{
    this->filename=filename;
    dbase.setDatabaseName("../Resources/Commands/DBCommands");
}

bool Registry::readRegistry(){
        //Считывание из файла команд


    if(!dbase.open()){
        qDebug()<<"Open db is Error\n";
        return false;
    }else{
        qDebug()<<"DB Succesfull opened";
    }

    QSqlQuery query;
    query.exec("SELECT*FROM Commands");
    while(query.next()){
        QStringList command;
        command<<query.value(0).toString();
        command<<query.value(1).toString();
        command<<query.value(2).toString();
        command<<query.value(3).toString();
        commands.append(command);
        countCommand++;
    }
            dbase.close();
            return true;
}


bool Registry::writeRegistry(){
    return true;
}

QList<QStringList> Registry::getCommands(){
    return commands;
}

int Registry::getAmountofCommands(){
        return countCommand;
}

Registry::~Registry(){

}
