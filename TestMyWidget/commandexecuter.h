#ifndef COMMANDEXECUTER_H
#define COMMANDEXECUTER_H
#include <QProcess>
#include <QDir>
#include <QStringList>
#include <QDebug>
#include <QObject>
class CommandExecuter : public QObject
{
    Q_OBJECT

public:
    CommandExecuter();

public slots:
    void outResult();
    void outError();


signals:
    void resultReadytoOutput();

private:
        QProcess* qprocess;
        QDir directory;
        QString output;
public:
        void handleCommand(QString command);
        QString getResult();
        ~CommandExecuter();
};

#endif // COMMANDEXECUTER_H
