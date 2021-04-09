/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionOpen;
    QAction *actionSavedCommand;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *Console;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *menuGNUWidget;
    QMenu *menuHistory;
    QMenu *menuHelp;
    QMenu *menuNew_Command;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(850, 610);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName(QString::fromUtf8("actionCreate"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSavedCommand = new QAction(MainWindow);
        actionSavedCommand->setObjectName(QString::fromUtf8("actionSavedCommand"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Console = new QTextEdit(centralwidget);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setEnabled(true);
        Console->setReadOnly(true);

        gridLayout->addWidget(Console, 0, 1, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(265, 0));
        scrollArea->setMaximumSize(QSize(300, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 546));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 2, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 22));
        menuGNUWidget = new QMenu(menubar);
        menuGNUWidget->setObjectName(QString::fromUtf8("menuGNUWidget"));
        menuHistory = new QMenu(menubar);
        menuHistory->setObjectName(QString::fromUtf8("menuHistory"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuNew_Command = new QMenu(menubar);
        menuNew_Command->setObjectName(QString::fromUtf8("menuNew_Command"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGNUWidget->menuAction());
        menubar->addAction(menuHistory->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuNew_Command->menuAction());
        menuGNUWidget->addAction(actionSavedCommand);
        menuHistory->addAction(actionOpen);
        menuNew_Command->addAction(actionCreate);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GNU Widget", nullptr));
        actionCreate->setText(QApplication::translate("MainWindow", "Create...", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        actionSavedCommand->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        menuGNUWidget->setTitle(QApplication::translate("MainWindow", "Saved Comand", nullptr));
        menuHistory->setTitle(QApplication::translate("MainWindow", "History", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuNew_Command->setTitle(QApplication::translate("MainWindow", "New Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
