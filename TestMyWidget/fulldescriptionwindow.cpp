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
