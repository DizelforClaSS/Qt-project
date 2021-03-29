#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newcommandwindow.h"
#include "historywindow.h"
#include "savedcommand.h"
#include "fulldescriptionwindow.h"
#include <QTextEdit>
#include <QPushButton>
#include <QFormLayout>
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

}

void MainWindow::on_actionOpen_triggered()
{
    addBox();
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

void MainWindow::addBox(){
    groupboxCommand *box=new groupboxCommand(this);


//    layout->addWidget(plusb);
//    layout->addWidget(descb);
//    layout->addWidget(text);

    ui->verticalLayout->addWidget(box);
}

