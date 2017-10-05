/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *Screen;
    QPushButton *Null;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *C;
    QPushButton *Sign;
    QPushButton *Procent;
    QLineEdit *ScreenOP;
    QLineEdit *ScreenPR;
    QPushButton *Eq;
    QPushButton *Delete;
    QPushButton *Sum;
    QPushButton *Minus;
    QPushButton *Stepen;
    QPushButton *Umnoj;
    QPushButton *Delenie;
    QPushButton *Root;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(392, 585);
        MainWindow->setMinimumSize(QSize(392, 585));
        MainWindow->setMaximumSize(QSize(392, 585));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QLatin1String("@\n"
"QPushButton {\n"
"background-color: lightgreen;\n"
"border-style: solid;\n"
"}\n"
"@"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Screen = new QLineEdit(centralWidget);
        Screen->setObjectName(QStringLiteral("Screen"));
        Screen->setGeometry(QRect(20, 100, 351, 51));
        QFont font;
        font.setPointSize(18);
        Screen->setFont(font);
        Screen->setFrame(false);
        Null = new QPushButton(centralWidget);
        Null->setObjectName(QStringLiteral("Null"));
        Null->setGeometry(QRect(20, 450, 141, 71));
        QFont font1;
        font1.setPointSize(16);
        Null->setFont(font1);
        Null->setStyleSheet(QLatin1String("@\n"
"QPushButton {\n"
"background-color: lightgreen;\n"
"border-style: solid;\n"
"}\n"
"@"));
        One = new QPushButton(centralWidget);
        One->setObjectName(QStringLiteral("One"));
        One->setGeometry(QRect(20, 380, 71, 71));
        One->setFont(font1);
        Two = new QPushButton(centralWidget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setGeometry(QRect(90, 380, 71, 71));
        Two->setFont(font1);
        Three = new QPushButton(centralWidget);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setGeometry(QRect(160, 380, 71, 71));
        Three->setFont(font1);
        Four = new QPushButton(centralWidget);
        Four->setObjectName(QStringLiteral("Four"));
        Four->setGeometry(QRect(20, 310, 71, 71));
        Four->setFont(font1);
        Five = new QPushButton(centralWidget);
        Five->setObjectName(QStringLiteral("Five"));
        Five->setGeometry(QRect(90, 310, 71, 71));
        Five->setFont(font1);
        Six = new QPushButton(centralWidget);
        Six->setObjectName(QStringLiteral("Six"));
        Six->setGeometry(QRect(160, 310, 71, 71));
        Six->setFont(font1);
        Seven = new QPushButton(centralWidget);
        Seven->setObjectName(QStringLiteral("Seven"));
        Seven->setGeometry(QRect(20, 240, 71, 71));
        Seven->setFont(font1);
        Eight = new QPushButton(centralWidget);
        Eight->setObjectName(QStringLiteral("Eight"));
        Eight->setGeometry(QRect(90, 240, 71, 71));
        Eight->setFont(font1);
        Nine = new QPushButton(centralWidget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setGeometry(QRect(160, 240, 71, 71));
        Nine->setFont(font1);
        C = new QPushButton(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(20, 170, 141, 71));
        C->setFont(font);
        Sign = new QPushButton(centralWidget);
        Sign->setObjectName(QStringLiteral("Sign"));
        Sign->setGeometry(QRect(230, 450, 71, 71));
        Sign->setFont(font);
        Procent = new QPushButton(centralWidget);
        Procent->setObjectName(QStringLiteral("Procent"));
        Procent->setGeometry(QRect(300, 170, 71, 71));
        Procent->setFont(font);
        ScreenOP = new QLineEdit(centralWidget);
        ScreenOP->setObjectName(QStringLiteral("ScreenOP"));
        ScreenOP->setGeometry(QRect(20, 80, 351, 20));
        QFont font2;
        font2.setPointSize(12);
        ScreenOP->setFont(font2);
        ScreenOP->setFrame(false);
        ScreenPR = new QLineEdit(centralWidget);
        ScreenPR->setObjectName(QStringLiteral("ScreenPR"));
        ScreenPR->setGeometry(QRect(20, 49, 351, 31));
        ScreenPR->setFont(font1);
        ScreenPR->setFrame(false);
        Eq = new QPushButton(centralWidget);
        Eq->setObjectName(QStringLiteral("Eq"));
        Eq->setGeometry(QRect(160, 450, 71, 71));
        Eq->setFont(font1);
        Delete = new QPushButton(centralWidget);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(160, 170, 71, 71));
        Delete->setFont(font1);
        Sum = new QPushButton(centralWidget);
        Sum->setObjectName(QStringLiteral("Sum"));
        Sum->setGeometry(QRect(300, 380, 71, 141));
        QPalette palette;
        Sum->setPalette(palette);
        Sum->setFont(font1);
        Sum->setStyleSheet(QStringLiteral("QPushButton::background-color:rgb(85, 170, 255)"));
        Minus = new QPushButton(centralWidget);
        Minus->setObjectName(QStringLiteral("Minus"));
        Minus->setGeometry(QRect(300, 240, 71, 141));
        Minus->setFont(font1);
        Stepen = new QPushButton(centralWidget);
        Stepen->setObjectName(QStringLiteral("Stepen"));
        Stepen->setGeometry(QRect(230, 310, 71, 71));
        Stepen->setFont(font1);
        Umnoj = new QPushButton(centralWidget);
        Umnoj->setObjectName(QStringLiteral("Umnoj"));
        Umnoj->setGeometry(QRect(230, 380, 71, 71));
        Umnoj->setFont(font1);
        Delenie = new QPushButton(centralWidget);
        Delenie->setObjectName(QStringLiteral("Delenie"));
        Delenie->setGeometry(QRect(230, 240, 71, 71));
        Delenie->setFont(font1);
        Root = new QPushButton(centralWidget);
        Root->setObjectName(QStringLiteral("Root"));
        Root->setGeometry(QRect(230, 170, 71, 71));
        Root->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 392, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CALCULATOR", 0));
        Null->setText(QApplication::translate("MainWindow", "0", 0));
        One->setText(QApplication::translate("MainWindow", "1", 0));
        Two->setText(QApplication::translate("MainWindow", "2", 0));
        Three->setText(QApplication::translate("MainWindow", "3", 0));
        Four->setText(QApplication::translate("MainWindow", "4", 0));
        Five->setText(QApplication::translate("MainWindow", "5", 0));
        Six->setText(QApplication::translate("MainWindow", "6", 0));
        Seven->setText(QApplication::translate("MainWindow", "7", 0));
        Eight->setText(QApplication::translate("MainWindow", "8", 0));
        Nine->setText(QApplication::translate("MainWindow", "9", 0));
        C->setText(QApplication::translate("MainWindow", "C", 0));
        Sign->setText(QApplication::translate("MainWindow", "-/+", 0));
        Procent->setText(QApplication::translate("MainWindow", "%", 0));
        ScreenOP->setText(QString());
        ScreenPR->setText(QString());
        Eq->setText(QApplication::translate("MainWindow", "=", 0));
        Delete->setText(QApplication::translate("MainWindow", "DEL", 0));
        Sum->setText(QApplication::translate("MainWindow", "+", 0));
        Minus->setText(QApplication::translate("MainWindow", "-", 0));
        Stepen->setText(QApplication::translate("MainWindow", "^", 0));
        Umnoj->setText(QApplication::translate("MainWindow", "*", 0));
        Delenie->setText(QApplication::translate("MainWindow", "/", 0));
        Root->setText(QApplication::translate("MainWindow", "\342\210\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
