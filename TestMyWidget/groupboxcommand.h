#ifndef GROUPBOXCOMMAND_H
#define GROUPBOXCOMMAND_H
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QStringList>
#include <QGroupBox>

class groupboxCommand : public QGroupBox
{
    Q_OBJECT

public:
    explicit groupboxCommand(QWidget* parent=0, QStringList name_command={"","",""});
    ~groupboxCommand();
    groupboxCommand();
    static int countCommand;
    int getNumCommand();

public slots:

private:
    int number=0;
};

#endif // GROUPBOXCOMMAND_Hs
