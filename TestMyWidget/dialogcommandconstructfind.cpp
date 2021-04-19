#include "dialogcommandconstructfind.h"
#include "ui_dialogcommandconstructfind.h"
#include <QDebug>
DialogCommandConstructFind::DialogCommandConstructFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCommandConstructFind)
{
    ui->setupUi(this);
    connect(ui->constructButton, SIGNAL(clicked()),this,SLOT(constructCommand()));
}

DialogCommandConstructFind::~DialogCommandConstructFind()
{
    delete ui;
}

void DialogCommandConstructFind::constructCommand(){
    command="find ";

    if(ui->nonSymbolic->checkState()==Qt::Checked){
        command+=" -P ";
    }

    if(ui->fullNames->checkState()==Qt::Checked){
        command+=" -print ";
    }

    if(ui->onlyFiles->checkState()==Qt::Checked){
        command+=" -type f ";
    }

    if(!ui->nameInput->text().isEmpty()){
        if(ui->register_2->checkState()==Qt::Checked)
            command+="-name \""+ui->nameInput->text()+"\" ";
        else
            command+="-iname \""+ui->nameInput->text()+"\" ";
    }

    if(!ui->sizeInput->text().isEmpty()){
        command+=" -size "+ui->sizeInput->text()+" ";
    }

    if(!ui->timeInput->text().isEmpty()){
        command=" -mtime "+ui->timeInput->text()+" ";
    }

    if(!ui->permInput->text().isEmpty()){
        command=" -perm "+ui->permInput->text()+" ";
    }
    emit(readyCommand(command));
    this->close();
}
