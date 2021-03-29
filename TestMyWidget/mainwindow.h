#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGroupBox>
#include <groupboxcommand.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addBox();




private slots:
    void on_actionCreate_triggered();

    void on_actionOpen_triggered();

    void on_actionSavedCommand_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
