#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include "newcommandwindow.h"
#include "historywindow.h"
#include "savedcommand.h"
#include "fulldescriptionwindow.h"
#include <QTextEdit>
#include <QPushButton>
#include <QFormLayout>
#include <QStringList>
#include <QMainWindow>
#include <QGroupBox>
#include <groupboxcommand.h>
#include <registry.h>
#include <QString>
#include <QLineEdit>
#include <QList>
#include <QProcess>
#include <QDebug>
#include <QDir>
#include <QTime>
#include <history.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addBox(QStringList name);
    registry* memory= new registry((QString)"filename");



private slots:
    void on_actionCreate_triggered();
    void on_actionOpen_triggered();
    void on_actionSavedCommand_triggered();
    void changeCommandSet();
    void handleCommand();
    void outResult();
    void cursorLimit();
    void outError();

private:
    Ui::MainWindow *ui;
    QProcess* qprocess;
    QList<QGroupBox*> boxes;
    QDir directory;
    QString command;
    QTime time;
    History history;

};
#endif // MAINWINDOW_H
