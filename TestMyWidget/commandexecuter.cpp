#include "commandexecuter.h"
#include <QProcess>
#include <QStringList>
#include <QDebug>
CommandExecuter::CommandExecuter()
{
    qprocess=new QProcess();
    qprocess->setWorkingDirectory(directory.homePath());
    directory.cd(directory.homePath());
}

QString CommandExecuter::handleCommand(QString command){
    qDebug()<<command;

    QStringList input=command.split(" ");
    if(QString::compare("cd",command)==0){
       directory.cd(input.value(2));
       qprocess->setWorkingDirectory(directory.path());
    }
    command=command.remove(directory.path()+":");
    qprocess->start(command);

   return qprocess->readAll();

}
