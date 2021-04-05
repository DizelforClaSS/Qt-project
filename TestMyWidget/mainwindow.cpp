#include "mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    memory->readRegistry();
        for(int i=0; i<memory->getAmountofCommands();i++){
            addBox(memory->getCommands()[i]);
        }
    connect(ui->lineEdit, SIGNAL(textChanged(QString)),this, SLOT(changeCommandSet()));
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
    for(int i=0;i<memory->getAmountofCommands();i++){
        if(boxes.value(i)->title().contains(ui->lineEdit->text())){
            boxes.value(i)->show();
        }else{
            boxes.value(i)->hide();
        }

    }
}
