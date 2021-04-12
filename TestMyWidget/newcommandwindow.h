#ifndef NEWCOMMANDWINDOW_H
#define NEWCOMMANDWINDOW_H

#include <QDialog>

namespace Ui {
class NewCommandWindow;
}

class NewCommandWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewCommandWindow(QWidget *parent = nullptr);
    ~NewCommandWindow();

private slots:
    void on_Ok_button_clicked();

    void on_Cancel_Button_clicked();

private:
    Ui::NewCommandWindow *ui;
};

#endif // NEWCOMMANDWINDOW_H
