#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

    for(int i=0; registry.getCommands()->size();i++){
        addBox(registry.getCommands()[i]);
    }

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
    boxes[box->countCommand-1]=box;
//    layout->addWidget(plusb);
//    layout->addWidget(descb);
//    layout->addWidget(text);

    ui->verticalLayout->addWidget(box);
}

