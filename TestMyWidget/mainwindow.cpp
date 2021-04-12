#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qprocess=new QProcess(this);

    memory->readRegistry();
        for(int i=0; i<memory->getAmountofCommands();i++){
            addBox(memory->getCommands().value(i));
        }

    qprocess->setWorkingDirectory(directory.homePath());
    directory.cd(directory.homePath());
    ui->lineEdit->setText(directory.path()+": ");

    connect(ui->lineEdit, SIGNAL(textChanged(QString)),this, SLOT(changeCommandSet()));
    connect(ui->lineEdit, SIGNAL(returnPressed()),  this, SLOT(handleCommand()));
    connect(qprocess, SIGNAL(readyReadStandardOutput()), this, SLOT(outResult()));
    connect(qprocess, SIGNAL(readyReadStandardError()), this, SLOT(outError()));
    connect(ui->lineEdit, SIGNAL(cursorPositionChanged(int,int)), this, SLOT(cursorLimit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCreate_triggered()
{

    newCommandWindow win;


    win.setModal(true);
    win.exec();


}

void MainWindow::on_actionOpen_triggered()
{

    HistoryWindow win;
    win.setModal(true);
    win.exec();
}

void MainWindow::on_actionSavedCommand_triggered()
{
    SavedCommand win;

    win.setModal(true);
    win.exec();
}

void MainWindow::addBox(QStringList command){
    groupboxCommand *box=new groupboxCommand(this, command);
    boxes.push_back(box);
    ui->verticalLayout->addWidget(box);
}

void MainWindow::changeCommandSet(){

    QStringList input=ui->lineEdit->text().split(" ");
    QString path=directory.path()+": ";
    command=ui->lineEdit->text();

    if(ui->lineEdit->text().mid(0,path.size()).contains(path)){
        command=input.value(1);
        for(int i=0;i<memory->getAmountofCommands();i++){
            if(boxes.value(i)->title().contains(command)){
                boxes.value(i)->show();
            }else{
                boxes.value(i)->hide();
            }

        }
    }else{
        command=ui->lineEdit->text().remove(directory.path()+":");
        ui->lineEdit->setText(directory.path()+": "+command);
    }
}

void MainWindow::handleCommand(){
    QStringList input=ui->lineEdit->text().split(" ");

    ui->Console->append("["+time.currentTime().toString()+"]  "+ui->lineEdit->text());
    history.writeHistory(ui->lineEdit->text());
    if(QString::compare("clear",command)==0)
        ui->Console->clear();

    if(QString::compare("cd",command)==0){
       directory.cd(input.value(2));
       qprocess->setWorkingDirectory(directory.path());
    }

    qprocess->start(command);
    ui->lineEdit->clear();
    ui->lineEdit->setText(directory.path()+": ");
    //qDebug()<<qprocess->workingDirectory();
}

void MainWindow::outResult(){

    ui->Console->append(qprocess->readAllStandardOutput());
}

void MainWindow::outError(){

    ui->Console->append(qprocess->readAllStandardError());
}

void MainWindow::cursorLimit(){
    if(ui->lineEdit->cursorPosition()<directory.path().size()+2){
         ui->lineEdit->setCursorPosition(directory.path().size()+2);
    }
}
