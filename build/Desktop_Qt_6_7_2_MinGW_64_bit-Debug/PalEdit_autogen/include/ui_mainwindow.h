/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *applyButton;
    QPlainTextEdit *ReplaceR;
    QPlainTextEdit *ReplaceG;
    QPlainTextEdit *ReplaceB;
    QPlainTextEdit *NewR;
    QPlainTextEdit *NewB;
    QPlainTextEdit *NewG;
    QLabel *label_3;
    QLabel *label_image;
    QMenuBar *menubar;
    QMenu *menuOpen_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(493, 269);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 10, 211, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 60, 211, 16));
        applyButton = new QPushButton(centralwidget);
        applyButton->setObjectName("applyButton");
        applyButton->setGeometry(QRect(290, 120, 111, 41));
        ReplaceR = new QPlainTextEdit(centralwidget);
        ReplaceR->setObjectName("ReplaceR");
        ReplaceR->setGeometry(QRect(290, 30, 31, 21));
        ReplaceR->setAcceptDrops(true);
        ReplaceR->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ReplaceR->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ReplaceG = new QPlainTextEdit(centralwidget);
        ReplaceG->setObjectName("ReplaceG");
        ReplaceG->setGeometry(QRect(330, 30, 31, 21));
        ReplaceG->setAcceptDrops(true);
        ReplaceG->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ReplaceG->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ReplaceB = new QPlainTextEdit(centralwidget);
        ReplaceB->setObjectName("ReplaceB");
        ReplaceB->setGeometry(QRect(370, 30, 31, 21));
        ReplaceB->setAcceptDrops(true);
        ReplaceB->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ReplaceB->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewR = new QPlainTextEdit(centralwidget);
        NewR->setObjectName("NewR");
        NewR->setGeometry(QRect(290, 80, 31, 21));
        NewR->setAcceptDrops(true);
        NewR->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewR->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewB = new QPlainTextEdit(centralwidget);
        NewB->setObjectName("NewB");
        NewB->setGeometry(QRect(370, 80, 31, 21));
        NewB->setAcceptDrops(true);
        NewB->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewB->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewG = new QPlainTextEdit(centralwidget);
        NewG->setObjectName("NewG");
        NewG->setGeometry(QRect(330, 80, 31, 21));
        NewG->setAcceptDrops(true);
        NewG->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        NewG->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 10, 211, 16));
        label_image = new QLabel(centralwidget);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(30, 30, 221, 181));
        label_image->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 493, 22));
        menuOpen_File = new QMenu(menubar);
        menuOpen_File->setObjectName("menuOpen_File");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpen_File->menuAction());
        menuOpen_File->addAction(actionOpen_File);
        menuOpen_File->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RGB Palette Swapper", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter the color you want to replace:  ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter the new color:", nullptr));
        applyButton->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        ReplaceR->setPlainText(QString());
        ReplaceR->setPlaceholderText(QCoreApplication::translate("MainWindow", "R", nullptr));
        ReplaceG->setPlainText(QString());
        ReplaceG->setPlaceholderText(QCoreApplication::translate("MainWindow", "G", nullptr));
        ReplaceB->setPlainText(QString());
        ReplaceB->setPlaceholderText(QCoreApplication::translate("MainWindow", "B", nullptr));
        NewR->setPlainText(QString());
        NewR->setPlaceholderText(QCoreApplication::translate("MainWindow", "R", nullptr));
        NewB->setPlainText(QString());
        NewB->setPlaceholderText(QCoreApplication::translate("MainWindow", "B", nullptr));
        NewG->setPlainText(QString());
        NewG->setPlaceholderText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        label_image->setText(QString());
        menuOpen_File->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
