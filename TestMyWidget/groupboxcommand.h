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
#include "dialogcommandconstructfind.h"

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
signals:
   void here_changeFavorite(GroupboxCommand*);
   void readyCommand(QString);

public slots:
    void on_actionOpenFullDescription();
    void changeFavorite();
    void createConstructtor();
    void transferCommand(QString command);

private:
    Ui::GroupboxCommand *ui;
    int number=0;
    bool favorite;
    bool is_show;
    QPushButton* plusb;//Кнопка добавления в избарнное
    QPushButton* descb;
    QPushButton* constructb;//кнопка конструктора


};

#endif // GROUPBOXCOMMAND_Hs
