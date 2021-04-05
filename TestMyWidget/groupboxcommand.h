#ifndef GROUPBOXCOMMAND_H
#define GROUPBOXCOMMAND_H
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QStringList>
#include <QGroupBox>
#include "fulldescriptionwindow.h"
#include <QGridLayout>
namespace Ui {
class groupboxCommand;
}


class groupboxCommand : public QGroupBox
{
    Q_OBJECT

public:
    explicit groupboxCommand(QWidget* parent=0, QStringList name_command={"","",""});
    ~groupboxCommand();
    groupboxCommand();
    int getNumCommand();
    QStringList command;
    QString getName();

public slots:
    void on_actionOpenFullDescription();

private:
    Ui::groupboxCommand *ui;
    int number=0;

};

#endif // GROUPBOXCOMMAND_Hs
