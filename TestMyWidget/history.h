#ifndef HISTORY_H
#define HISTORY_H

#include <QByteArray>
#include <QFile>
#include <QIODevice>
#include <QDateTime>
class History
{
public:
    History();
    void writeHistory(QString command);
    QByteArray readHistory();

private:
    QFile file;
};

#endif // HISTORY_H
