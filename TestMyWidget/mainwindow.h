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
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QList<QGroupBox*> boxes;

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
