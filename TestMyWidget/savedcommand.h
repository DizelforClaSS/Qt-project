#ifndef SAVEDCOMMAND_H
#define SAVEDCOMMAND_H

#include <QDialog>

namespace Ui {
class SavedCommand;
}

class SavedCommand : public QDialog
{
    Q_OBJECT

public:
    explicit SavedCommand(QWidget *parent = nullptr);
    ~SavedCommand();

private:
    Ui::SavedCommand *ui;
};

#endif // SAVEDCOMMAND_H
