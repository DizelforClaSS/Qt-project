#include "fulldescriptionwindow.h"
#include "ui_fulldescriptionwindow.h"

fullDescriptionWindow::fullDescriptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fullDescriptionWindow)
{
    ui->setupUi(this);


}

fullDescriptionWindow::~fullDescriptionWindow()
{
    delete ui;
}

void fullDescriptionWindow::setDatas(QStringList command){
    ui->Description->setText(command[2]);
    ui->nameCommand->setText(command[0]);
}
