#ifndef COMMANDEXECUTER_H
#define COMMANDEXECUTER_H
#include <QProcess>
#include <QDir>
class CommandExecuter
{
public:
    CommandExecuter();
public slots:
    QString handleCommand(QString command);
    void outResult();
    void outError();

private:
        QProcess* qprocess;
        QDir directory;
};

#endif // COMMANDEXECUTER_H
