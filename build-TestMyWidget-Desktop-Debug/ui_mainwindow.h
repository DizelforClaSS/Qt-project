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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
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
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *Console;
    QPlainTextEdit *plainTextEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollBar *verticalScrollBar;
    QGroupBox *groupBox;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QTextEdit *textEdit_6;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QTextEdit *textEdit_7;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QTextEdit *textEdit_8;
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
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(1600, 900));
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 828, 544));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 0, 471, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Console = new QTextEdit(verticalLayoutWidget);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setEnabled(false);

        verticalLayout->addWidget(Console);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(plainTextEdit);

        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 371, 551));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(verticalLayoutWidget_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 367, 547));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents_2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(350, -1, 20, 551));
        verticalScrollBar->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 351, 191));
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 0, 31, 21));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(290, 0, 31, 21));
        textEdit_6 = new QTextEdit(groupBox);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(0, 20, 351, 171));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 190, 351, 191));
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(320, 0, 31, 21));
        pushButton_14 = new QPushButton(groupBox_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(290, 0, 31, 21));
        textEdit_7 = new QTextEdit(groupBox_2);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setGeometry(QRect(0, 20, 351, 171));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 380, 351, 191));
        pushButton_15 = new QPushButton(groupBox_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(320, 0, 31, 21));
        pushButton_16 = new QPushButton(groupBox_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(290, 0, 31, 21));
        textEdit_8 = new QTextEdit(groupBox_3);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));
        textEdit_8->setGeometry(QRect(0, 20, 351, 171));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

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
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "?", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "?", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "?", nullptr));
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
