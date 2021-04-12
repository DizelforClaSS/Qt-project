#include "fulldescriptionwindow.h"
#include "ui_fulldescriptionwindow.h"

FullDescriptionWindow::FullDescriptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullDescriptionWindow)
{
    ui->setupUi(this);


}

FullDescriptionWindow::~FullDescriptionWindow()
{
    delete ui;
}

void FullDescriptionWindow::setDatas(QStringList command){
    ui->Description->setText(command[2]);
    ui->nameCommand->setText(command[0]);
}
