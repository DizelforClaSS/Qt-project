#include "registry.h"

registry::registry(QString filename)
{
    this->filename=filename;
    readRegistry();
}

bool registry::readRegistry(){
        //Считывание из файла команд
    commands[0]<<"cd"<< "Перейти в указанную директорию Синтаксис: cd  <Директория>"<< "-P - позволяет следовать по символическим ссылкам перед тем, как будут обработаны все переходы <<..>>;\n\
                 -L - переходит по символическим ссылкам только после того, как были обработаны <<..>>;\n\
                 -e - если папку, в которую нужно перейти не удалось найти - выдает ошибку.\n\n\
                       Дальше нужно указать директорию, в которую следует перейти.\
                       Если этого не сделать, а вызвать cd без параметров, то рабочей папкой будет выбран ваш домашний каталог.\
                       А теперь давайте рассмотрим несколько примеров работы с cd linux.";


    commands[1]<<"pwd"<< "выводит путь текущего каталога  "<< "\n\
                 --help\n вывести справку и закончить работу\n\
                 --version\n вывести информацию о версии и закончить работу ";



    commands[2]<<"mkdir"<< "- make directories"<< "DESCRIPTION\n\
                 Create the DIRECTORY(ies), if they do not already exist.\n\
                 \n Mandatory  arguments  to  long  options are mandatory for short options too.\n\
                 -m, --mode=MODE \n\
                        set file mode (as in chmod), not a=rwx - umask\n\
          \n\
                 -p, --parents\n\
                        no error if existing, make parent directories as needed\n\
          \n\
                 -v, --verbose\n\
                        print a message for each created directory\n\
          \n\
                 -Z     set SELinux security context of each created  directory  to  the\n\
                        default type\n\
          \n\
                 --context[=CTX]\n\
                        like  -Z,  or  if CTX is specified then set the SELinux or SMACK\n\
                        security context to CTX\n\
          \n\
                 --help display this help and exit\n\
          \n\
                 --version\n\
                        output version information and exit";

}
bool registry::writeRegistry(QString filename){

}

QStringList* registry::getCommands(){
    return commands;
}