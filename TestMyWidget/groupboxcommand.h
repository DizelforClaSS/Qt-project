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
class GroupboxCommand;
}


class GroupboxCommand : public QGroupBox
{
    Q_OBJECT

public:
    explicit GroupboxCommand(QWidget* parent=0, QStringList name_command={"","","",""});
    ~GroupboxCommand();
    GroupboxCommand();
    int getNumCommand();
    QStringList command;
    QString getName();
    bool isFavorite();
    bool isShow();
    void setShow(bool flag);

public slots:
    void on_actionOpenFullDescription();
    void changeFavorite();

private:
    Ui::GroupboxCommand *ui;
    int number=0;
    bool favorite;
    bool is_show;
    QPushButton* plusb;//Кнопка добавления в избарнное
    QPushButton* descb;


};

#endif // GROUPBOXCOMMAND_Hs
