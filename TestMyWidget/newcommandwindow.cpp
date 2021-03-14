#include "newcommandwindow.h"
#include "ui_newcommandwindow.h"

newCommandWindow::newCommandWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newCommandWindow)
{
    ui->setupUi(this);
}

newCommandWindow::~newCommandWindow()
{
    delete ui;
}


void newCommandWindow::on_Ok_button_clicked()
{
    this->close();
}

void newCommandWindow::on_Cancel_Button_clicked()
{
    this->close();
}
