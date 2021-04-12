#ifndef FULLDESCRIPTIONWINDOW_H
#define FULLDESCRIPTIONWINDOW_H

#include <QDialog>

namespace Ui {
class FullDescriptionWindow;
}

class FullDescriptionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FullDescriptionWindow(QWidget *parent = nullptr);
    ~FullDescriptionWindow();
    void setDatas(QStringList command);

private:
    Ui::FullDescriptionWindow *ui;
};

#endif // FULLDESCRIPTIONWINDOW_H
