#include "groupboxcommand.h"


groupboxCommand::groupboxCommand(QWidget* parent, QStringList command):QGroupBox(parent)
{
    countCommand++; //Увеличиваем счетчик
    number=countCommand; //Присваеваем номер боксу

    QVBoxLayout* vbox=new QVBoxLayout();
    QHBoxLayout* hbox=new QHBoxLayout(this);


    QPushButton* plusb=new QPushButton();//Кнопка добавления в избарнное
    QPushButton* descb=new QPushButton();//Кнопка вызова окна полного описания

    this->setTitle(command[1]);
    this->setMaximumHeight(151);
    this->setMinimumHeight(151);
    this->setMaximumWidth(231);
    this->setMinimumWidth(231);
    plusb->setMaximumSize(31,31);
    descb->setMaximumSize(31,31);
    plusb->setText("+");
    descb->setText("?");
    QTextEdit* text=new QTextEdit();
    text->setDisabled(true);
    text->setMinimumSize(150,100);
    text->setGeometry(0,20,231,121);

    vbox->stretch(3);
    hbox->setSpacing(15);
    vbox->addWidget(plusb);
    vbox->addWidget(descb);
    hbox->addWidget(text);
    hbox->addLayout(vbox);
    setLayout(hbox);
}

groupboxCommand::~groupboxCommand(){

}

int groupboxCommand::getNumCommand(){

    return number;
}

int groupboxCommand::countCommand=0;
