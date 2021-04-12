#ifndef HISTORYWINDOW_H
#define HISTORYWINDOW_H

#include <QDialog>
#include <QByteArray>
#include <QFile>
#include <history.h>
namespace Ui {
class HistoryWindow;
}

class HistoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryWindow(QWidget *parent = nullptr);
    ~HistoryWindow();

private:
    Ui::HistoryWindow *ui;
    History history;

};

#endif // HISTORYWINDOW_H
