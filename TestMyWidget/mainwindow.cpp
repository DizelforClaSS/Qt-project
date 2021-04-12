#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    memory->readRegistry();
        for(int i=0; i<memory->getAmountofCommands();i++){
            addBox(memory->getCommands().value(i));
        }
    directory.cd(directory.homePath());
    ui->lineEdit->setText(directory.path()+": ");

    connect(ui->lineEdit, SIGNAL(textChanged(QString)),this, SLOT(changeCommandSet()));
    connect(ui->lineEdit, SIGNAL(returnPressed()),  this, SLOT(handleCommand()));
//    connect(qprocess, SIGNAL(readyReadStandardOutput()), this, SLOT(outResult()));
//    connect(qprocess, SIGNAL(readyReadStandardError()), this, SLOT(outError()));
    connect(ui->lineEdit, SIGNAL(cursorPositionChanged(int,int)), this, SLOT(cursorLimit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCreate_triggered()
{

    NewCommandWindow win;


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

}

void MainWindow::addBox(QStringList command){
    GroupboxCommand *box=new GroupboxCommand(this, command);
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
    if(QString::compare("clear",command)==0)
        ui->Console->clear();

    if(QString::compare("cd",command)==0){
       directory.cd(input.value(2));
    }
    ui->Console->append("["+time.currentTime().toString()+"]  "+ui->lineEdit->text());
    history.writeHistory(ui->lineEdit->text());

    commandExec.handleCommand(ui->lineEdit->text());
    ui->lineEdit->clear();
    ui->lineEdit->setText(directory.path()+": ");
}

//void MainWindow::outResult(){

//    ui->Console->append(qprocess->readAllStandardOutput());
//}

//void MainWindow::outError(){

//    ui->Console->append(qprocess->readAllStandardError());
//}

void MainWindow::cursorLimit(){
    if(ui->lineEdit->cursorPosition()<directory.path().size()+2){
         ui->lineEdit->setCursorPosition(directory.path().size()+2);
    }
}

//void MainWindow::closeEvent(QCloseEvent *event){
//    event->ignore();
//    memory->writeRegistry();
//    event->accept();
//}
