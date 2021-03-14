#ifndef NEWCOMMANDWINDOW_H
#define NEWCOMMANDWINDOW_H

#include <QDialog>

namespace Ui {
class newCommandWindow;
}

class newCommandWindow : public QDialog
{
    Q_OBJECT

public:
    explicit newCommandWindow(QWidget *parent = nullptr);
    ~newCommandWindow();

private slots:
    void on_Ok_button_clicked();

    void on_Cancel_Button_clicked();

private:
    Ui::newCommandWindow *ui;
};

#endif // NEWCOMMANDWINDOW_H
