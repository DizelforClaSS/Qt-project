#include "newcommandwindow.h"
#include "ui_newcommandwindow.h"

NewCommandWindow::NewCommandWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewCommandWindow)
{
    ui->setupUi(this);
}

NewCommandWindow::~NewCommandWindow()
{
    delete ui;
}


void NewCommandWindow::on_Ok_button_clicked()
{
    this->close();
}

void NewCommandWindow::on_Cancel_Button_clicked()
{
    this->close();
}
