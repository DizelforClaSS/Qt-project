#include "history.h"

History::History()
{
    file.setFileName("../Resources/history");

}

QByteArray History:: readHistory(){
    file.open(QIODevice::ReadOnly);
    QByteArray readH=file.readAll();
    return readH;
    file.close();
}

void History:: writeHistory(QString command){
    file.open(QIODevice::Append | QIODevice::Text);
    QDateTime* time=new QDateTime();
    file.write(("\n"+time->currentDateTime().toString()+" \n"+command).toUtf8());
    file.close();
}
