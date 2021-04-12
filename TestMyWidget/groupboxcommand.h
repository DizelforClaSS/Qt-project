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
    void changeFavorite();

private:
    Ui::groupboxCommand *ui;
    int number=0;
    bool favorite;
    bool isFavorite();
    QPushButton* plusb;//Кнопка добавления в избарнное
    QPushButton* descb;

};

#endif // GROUPBOXCOMMAND_Hs
