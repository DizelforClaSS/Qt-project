#include "commandexecuter.h"

CommandExecuter::CommandExecuter()
{
    qprocess=new QProcess();
    qprocess->setWorkingDirectory(directory.homePath());
    directory.cd(directory.homePath());
    connect(qprocess, SIGNAL(readyReadStandardOutput()), this,SLOT(outResult()));
    connect(qprocess, SIGNAL(readyReadStandardError()), this, SLOT(outError()));
}


void CommandExecuter::handleCommand(QString command){
    QStringList input=command.split(" ");
//     qDebug()<<command;
//     qDebug()<<qprocess->workingDirectory();
//     qDebug()<<directory.path();

     if(QString::compare("cd",input.value(1))==0 &&input.size()==3){
       qDebug()<<"  ";
       directory.cd(input.value(2));
       qprocess->setWorkingDirectory(directory.path());
       qprocess->start(command);

    }
    else
    {
        QString command1=command.remove(directory.path()+": ");
        qprocess->start(command1);
    }
}

QString CommandExecuter::getResult()
{
    return output;
}

CommandExecuter::~CommandExecuter(){

}

void CommandExecuter::outResult(){
    // qDebug()<<"res";
    output=qprocess->readAllStandardOutput();
    emit(resultReadytoOutput());
}

void CommandExecuter::outError(){
    // qDebug()<<"err";
    output=qprocess->readAllStandardError();
    emit(resultReadytoOutput());
}

