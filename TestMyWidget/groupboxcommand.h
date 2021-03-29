#ifndef GROUPBOXCOMMAND_H
#define GROUPBOXCOMMAND_H

#include <QGroupBox>

class groupboxCommand : public QGroupBox
{
    Q_OBJECT

public:
    explicit groupboxCommand(QWidget* parent = 0);
    ~groupboxCommand();
    groupboxCommand();
    static int countCommand;
    int getNumCommand();

public slots:

private:
    int number=0;
};

#endif // GROUPBOXCOMMAND_Hs
