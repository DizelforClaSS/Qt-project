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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QPlainTextEdit *plainTextEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *testBox;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTextEdit *Console;
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
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(plainTextEdit, 1, 1, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(265, 0));
        scrollArea->setMaximumSize(QSize(265, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 263, 546));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        testBox = new QGroupBox(scrollAreaWidgetContents);
        testBox->setObjectName(QString::fromUtf8("testBox"));
        testBox->setMinimumSize(QSize(231, 141));
        testBox->setMaximumSize(QSize(231, 141));
        gridLayout_2 = new QGridLayout(testBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_3 = new QTextEdit(testBox);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setMinimumSize(QSize(0, 100));

        gridLayout_2->addWidget(textEdit_3, 0, 0, 2, 1);

        pushButton_5 = new QPushButton(testBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(testBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(pushButton_6, 1, 1, 1, 1);


        verticalLayout->addWidget(testBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 2, 1);

        Console = new QTextEdit(centralwidget);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setEnabled(false);

        gridLayout->addWidget(Console, 0, 1, 1, 1);

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
        testBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "?", nullptr));
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
