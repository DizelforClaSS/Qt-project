#ifndef REGISTRY_H
#define REGISTRY_H

#include <QString>
#include <QStringList>
class registry
{

private:
        QString filename;
        QStringList* commands=new QStringList[20];// one command={"name","mini-description","fulldescription"}
        int countCommand;

public:
    registry(QString filename);
    bool readRegistry();
    bool writeRegistry(QString filename);
    QStringList* getCommands();
    int getAmountofCommands();

};

#endif // REGISTRY_H
