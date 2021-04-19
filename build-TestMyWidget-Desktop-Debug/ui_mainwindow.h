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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QPushButton *favoriteFilterButton;
    QPushButton *alphabetFilterButton;
    QPushButton *reverseAlphabetFilterButton;
    QTextEdit *console;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QMenu *menuHistory;
    QMenu *menuHelp;
    QMenu *menuNew_Command;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(874, 610);
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
        favoriteFilterButton = new QPushButton(centralwidget);
        favoriteFilterButton->setObjectName(QString::fromUtf8("favoriteFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Resources/Icons/heart.png"), QSize(), QIcon::Normal, QIcon::Off);
        favoriteFilterButton->setIcon(icon);
        favoriteFilterButton->setIconSize(QSize(25, 25));
        favoriteFilterButton->setCheckable(true);
        favoriteFilterButton->setAutoDefault(false);
        favoriteFilterButton->setFlat(false);

        gridLayout->addWidget(favoriteFilterButton, 0, 0, 1, 1);

        alphabetFilterButton = new QPushButton(centralwidget);
        alphabetFilterButton->setObjectName(QString::fromUtf8("alphabetFilterButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Resources/Icons/A-ZIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        alphabetFilterButton->setIcon(icon1);
        alphabetFilterButton->setIconSize(QSize(25, 25));
        alphabetFilterButton->setCheckable(true);
        alphabetFilterButton->setChecked(false);

        gridLayout->addWidget(alphabetFilterButton, 0, 1, 1, 1);

        reverseAlphabetFilterButton = new QPushButton(centralwidget);
        reverseAlphabetFilterButton->setObjectName(QString::fromUtf8("reverseAlphabetFilterButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Resources/Icons/Z-AIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        reverseAlphabetFilterButton->setIcon(icon2);
        reverseAlphabetFilterButton->setIconSize(QSize(25, 25));
        reverseAlphabetFilterButton->setCheckable(true);

        gridLayout->addWidget(reverseAlphabetFilterButton, 0, 2, 1, 1);

        console = new QTextEdit(centralwidget);
        console->setObjectName(QString::fromUtf8("console"));
        console->setEnabled(true);
        console->setMinimumSize(QSize(550, 0));
        console->setReadOnly(true);

        gridLayout->addWidget(console, 0, 3, 2, 2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(300, 0));
        scrollArea->setMaximumSize(QSize(500, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 478));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 30));
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 2, 3, 1, 1);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        gridLayout->addWidget(clearButton, 2, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 874, 22));
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

        menubar->addAction(menuHistory->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuNew_Command->menuAction());
        menuHistory->addAction(actionOpen);
        menuNew_Command->addAction(actionCreate);

        retranslateUi(MainWindow);

        favoriteFilterButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GNU Widget", nullptr));
        actionCreate->setText(QApplication::translate("MainWindow", "Create...", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        actionSavedCommand->setText(QApplication::translate("MainWindow", "Open...", nullptr));
        favoriteFilterButton->setText(QString());
        alphabetFilterButton->setText(QString());
        reverseAlphabetFilterButton->setText(QString());
        clearButton->setText(QApplication::translate("MainWindow", "clear", nullptr));
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
