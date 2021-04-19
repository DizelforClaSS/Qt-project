#ifndef DIALOGCOMMANDCONSTRUCTFIND_H
#define DIALOGCOMMANDCONSTRUCTFIND_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogCommandConstructFind;
}

class DialogCommandConstructFind : public QDialog
{
    Q_OBJECT

signals:
    void readyCommand(QString);

public slots:
    void constructCommand();

public:
    explicit DialogCommandConstructFind(QWidget *parent = nullptr);
    ~DialogCommandConstructFind();

private:
    Ui::DialogCommandConstructFind *ui;
    QString command;
};

#endif // DIALOGCOMMANDCONSTRUCTFIND_H
