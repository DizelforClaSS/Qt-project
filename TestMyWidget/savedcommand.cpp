#include "savedcommand.h"
#include "ui_savedcommand.h"

SavedCommand::SavedCommand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SavedCommand)
{
    ui->setupUi(this);
}

SavedCommand::~SavedCommand()
{
    delete ui;
}
