#include "historywindow.h"
#include "ui_historywindow.h"

HistoryWindow::HistoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryWindow)
{
    ui->setupUi(this);
}

HistoryWindow::~HistoryWindow()
{
    delete ui;
}
