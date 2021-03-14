#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newcommandwindow.h"
#include "historywindow.h"
#include "savedcommand.h"
#include "fulldescriptionwindow.h"
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


