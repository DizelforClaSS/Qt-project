#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    memory->readRegistry();
        for(int i=0; i<memory->getAmountofCommands();i++){
            addBox(memory->getCommands().value(i));
        }
    directory.cd(directory.homePath());
    ui->lineEdit->setText(directory.path()+": ");

    connect(ui->lineEdit, SIGNAL(textChanged(QString)),this, SLOT(changeCommandSet()));
    connect(ui->lineEdit, SIGNAL(returnPressed()),  this, SLOT(handleCommand()));
    connect(ui->lineEdit, SIGNAL(cursorPositionChanged(int,int)), this, SLOT(cursorLimit()));
    connect(&commandExec, SIGNAL(resultReadytoOutput()),this,SLOT(setOutputResult()));
    connect(ui->alphabetFilterButton, SIGNAL(pressed()),this,SLOT(sortCommands()));
    connect(ui->reverseAlphabetFilterButton, SIGNAL(pressed()),this,SLOT(sortCommands()));
    connect(ui->favoriteFilterButton,SIGNAL(toggled(bool)),this,SLOT(sortCommands()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCreate_triggered()
{

    NewCommandWindow win;


    win.setModal(true);
    win.exec();


}

void MainWindow::on_actionOpen_triggered()
{
    HistoryWindow win;
    win.setModal(true);
    win.exec();
}

void MainWindow::on_actionSavedCommand_triggered()
{

}

void MainWindow::addBox(QStringList command){
    GroupboxCommand *box=new GroupboxCommand(this, command);
    box->setShow(true);
    connect(box,SIGNAL(here_changeFavorite(GroupboxCommand*)),memory,SLOT(updateCommand(GroupboxCommand*)));
    boxes.push_back(box);
    ui->verticalLayout->addWidget(box);
}

void MainWindow::changeCommandSet(){

    command=ui->lineEdit->text().simplified();
    QStringList input=command.split(" ");
    QString path=directory.path()+": ";

    if(ui->lineEdit->text().mid(0,path.size()).contains(path)){
        command=input.value(1);
        for(int i=0;i<memory->getAmountofCommands();i++){
                if(boxes.value(i)->title().contains(command) && boxes.value(i)->isShow()){
                    boxes.value(i)->show();
                }else{
                    boxes.value(i)->hide();
                }
           }
    }else{
        command=ui->lineEdit->text().remove(directory.path()+":");
        ui->lineEdit->setText(directory.path()+": "+command);
    }
}

void MainWindow::handleCommand(){

    QStringList input=(ui->lineEdit->text()).simplified().split(" ");
    if(QString::compare("cd",command)==0){
       directory.cd(input.value(2));
    }

    ui->console->append("["+time.currentTime().toString()+"]  "+ui->lineEdit->text());
    history.writeHistory(ui->lineEdit->text());

    commandExec.handleCommand(ui->lineEdit->text());
    ui->lineEdit->clear();
    ui->lineEdit->setText(directory.path()+": ");
}

void MainWindow::cursorLimit(){
    if(ui->lineEdit->cursorPosition()<directory.path().size()+2){
         ui->lineEdit->setCursorPosition(directory.path().size()+2);
    }
}


void MainWindow::setOutputResult(){

    QString result=commandExec.getResult();
    ui->console->append(result);
}

void MainWindow::sortCommands(){
   QObject* button=QObject::sender();
   if(button==ui->alphabetFilterButton){

      ui->alphabetFilterButton->setEnabled(false);
      ui->reverseAlphabetFilterButton->setEnabled(true);
      ui->alphabetFilterButton->setChecked(true);
      ui->reverseAlphabetFilterButton->setChecked(false);

        for(int i=0;i<memory->getAmountofCommands()-1;i++){
                for(int j=0; j<memory->getAmountofCommands()-1-i;j++){
                    if(QString::compare(boxes.value(j)->title(),boxes.value(j+1)->title())>0){
                        boxes.swap(j,j+1);
                    }
                }
        }
   }
   if(button==ui->reverseAlphabetFilterButton){

       ui->reverseAlphabetFilterButton->setEnabled(false);
       ui->alphabetFilterButton->setEnabled(true);
       ui->reverseAlphabetFilterButton->setChecked(true);
       ui->alphabetFilterButton->setChecked(false);

       for(int i=0;i<memory->getAmountofCommands()-1;i++){
               for(int j=0; j<memory->getAmountofCommands()-1-i;j++){
                   if(QString::compare(boxes.value(j)->title(),boxes.value(j+1)->title())<0){
                       boxes.swap(j,j+1);
                   }
               }
       }

   }

//Закрываем действующие боксы и заново их добавляем в виджет
     for(int i=0; i<memory->getAmountofCommands();i++){
         boxes.value(i)->close();
         if(ui->favoriteFilterButton->isChecked()){
             if(boxes.value(i)->isFavorite()){
                ui->verticalLayout->addWidget(boxes.value(i));
                boxes.value(i)->setShow(true);
             }
             else
                 boxes.value(i)->setShow(false);
         }else{
            ui->verticalLayout->addWidget(boxes.value(i));
            boxes.value(i)->setShow(true);
         }

         if(boxes.value(i)->isShow())
             boxes.value(i)->show();

     }

}
