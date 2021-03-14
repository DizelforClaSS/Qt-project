#ifndef FULLDESCRIPTIONWINDOW_H
#define FULLDESCRIPTIONWINDOW_H

#include <QDialog>

namespace Ui {
class fullDescriptionWindow;
}

class fullDescriptionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit fullDescriptionWindow(QWidget *parent = nullptr);
    ~fullDescriptionWindow();

private:
    Ui::fullDescriptionWindow *ui;
};

#endif // FULLDESCRIPTIONWINDOW_H
