#include "registry.h"
#include <QDebug>
#include <QDir>
registry::registry(QString filename)
{
    this->filename=filename;
    dbase.setDatabaseName("../Resources/Commands/DBCommands");
}

bool registry::readRegistry(){
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


bool registry::writeRegistry(QString filename){
    return true;
}

QList<QStringList> registry::getCommands(){
    return commands;
}

int registry::getAmountofCommands(){
        return countCommand;
}

registry::~registry(){

}
