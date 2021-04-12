#include "groupboxcommand.h"
#include "ui_groupboxcommand.h"


groupboxCommand::groupboxCommand(QWidget* parent, QStringList command):
    QGroupBox(parent)
   // ui(new Ui::groupboxCommand)
{
  //  ui->setupUi(this);
    this->command=command;
    QVBoxLayout* vbox=new QVBoxLayout(this);
    QHBoxLayout* hbox=new QHBoxLayout();

    plusb=new QPushButton();//Кнопка добавления в избарнное
    descb=new QPushButton();//Кнопка вызова окна полного описания
    this->setTitle(command[1]);
    this->setGeometry(0,0,238,186);
    this->setMaximumHeight(200);
    this->setMinimumHeight(200);
    plusb->setGeometry(12,32,104,25);
    descb->setGeometry(122,32,104,25);

    if(command[3].contains("TRUE")){
        favorite=true;
    }else
        favorite=false;

    if(!favorite)
        plusb->setText("+");
    else
        plusb->setText("-");

    descb->setText("?");

    connect(descb, SIGNAL(clicked()),this,SLOT(on_actionOpenFullDescription()));
    connect(plusb,SIGNAL(clicked()), this, SLOT(changeFavorite()));
    QTextEdit* text=new QTextEdit();
    text->setReadOnly(true);
    text->setGeometry(12,63,214,111);

    this->setTitle(command[0]);
    text->setText(command[1]);

    vbox->stretch(0);
    vbox->setSpacing(0);
    hbox->addWidget(plusb);
    hbox->addWidget(descb);
    vbox->addLayout(hbox);
    vbox->addWidget(text);
    setLayout(vbox);

}

groupboxCommand::~groupboxCommand(){

}

int groupboxCommand::getNumCommand(){

    return number;
}

void groupboxCommand::on_actionOpenFullDescription(){
    fullDescriptionWindow win;
    win.setModal(true);
    win.setWindowTitle(this->title());
    win.setDatas(command);
    win.exec();
}

QString groupboxCommand::getName(){
    return this->title();

}

void groupboxCommand::changeFavorite(){
    favorite=!favorite;
    if(!favorite)
        plusb->setText("+");
    else
        plusb->setText("-");
}
