/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *heightLabel;
    QLabel *weightLabel;
    QLabel *ageLabel;
    QLabel *genderLabel;
    QLineEdit *heightInput;
    QLineEdit *weightInput;
    QLineEdit *ageInput;
    QComboBox *genderComboBox;
    QPushButton *calculateButton;
    QPushButton *saveButton;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(190, 100, 81, 41));
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(190, 140, 81, 41));
        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setGeometry(QRect(170, 180, 101, 41));
        genderLabel = new QLabel(centralwidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setGeometry(QRect(210, 230, 81, 31));
        heightInput = new QLineEdit(centralwidget);
        heightInput->setObjectName("heightInput");
        heightInput->setGeometry(QRect(270, 110, 113, 28));
        weightInput = new QLineEdit(centralwidget);
        weightInput->setObjectName("weightInput");
        weightInput->setGeometry(QRect(270, 150, 113, 28));
        ageInput = new QLineEdit(centralwidget);
        ageInput->setObjectName("ageInput");
        ageInput->setGeometry(QRect(270, 190, 113, 28));
        genderComboBox = new QComboBox(centralwidget);
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setGeometry(QRect(270, 230, 111, 28));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(300, 310, 161, 31));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(600, 390, 131, 51));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(470, 210, 131, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        heightLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202 (\321\201\320\274):", nullptr));
        weightLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201 (\320\272\320\263):", nullptr));
        ageLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202 (\320\273\320\265\321\202):", nullptr));
        genderLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273:", nullptr));
        genderComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\234\321\203\320\266\321\207\320\270\320\275\320\260", nullptr));
        genderComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\226\320\265\320\275\321\211\320\270\320\275\320\260", nullptr));

        calculateButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\276\321\202\321\207\321\221\321\202", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
