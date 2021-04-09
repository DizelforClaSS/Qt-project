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
        commands[countCommand]<<query.value(0).toString();
        commands[countCommand]<<query.value(1).toString();
        commands[countCommand]<<query.value(2).toString();
        countCommand++;
    }
            dbase.close();
            return true;
}


bool registry::writeRegistry(QString filename){
    return true;
}

QStringList* registry::getCommands(){
    return commands;
}

int registry::getAmountofCommands(){
        return countCommand;
}

registry::~registry(){

}
