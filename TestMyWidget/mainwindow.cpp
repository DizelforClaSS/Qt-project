#include "mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(editingFinished()),this, SLOT(changeCommandSet()));
    memory->readRegistry();
        for(int i=0; i<memory->getAmountofCommands();i++){
            addBox(memory->getCommands()[i]);
        }

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
    boxes[memory->getAmountofCommands()-1]=box;
    ui->verticalLayout->addWidget(box);
}

void MainWindow::changeCommandSet(){
    for(int i=0;i<memory->getAmountofCommands();i++){
        if(boxes[i]->title().compare(ui->lineEdit->text())){
            boxes[i]->show();
        }else{
            boxes[i]->hide();
        }
    }
}
