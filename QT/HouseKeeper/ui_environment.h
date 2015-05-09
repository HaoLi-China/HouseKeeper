/********************************************************************************
** Form generated from reading UI file 'environment.ui'
**
** Created: Mon Jul 15 23:49:06 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENT_H
#define UI_ENVIRONMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>
#include "qwt_analog_clock.h"
#include "qwt_dial.h"
#include "qwt_thermo.h"

QT_BEGIN_NAMESPACE

class Ui_Environment
{
public:
    QTabWidget *tabWidget;
    QWidget *tal;
    QPushButton *valueButton;
    QPushButton *curveButton;
    QPushButton *tableButton;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label;
    QwtThermo *humid;
    QwtThermo *thermo;
    QTableWidget *temAHumTable;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget_3;
    QwtAnalogClock *clock1;
    QPushButton *exitButton1;
    QWidget *tal1;
    QPushButton *exitButton2;
    QWidget *widget_2;
    QwtAnalogClock *clock2;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QTableWidget *smokeTable;
    QLabel *label_8;
    QLabel *smoLabel;
    QWidget *tal2;
    QPushButton *exitButton3;
    QWidget *widget;
    QwtAnalogClock *clock3;
    QGroupBox *groupBox_3;
    QLabel *label_4;
    QTableWidget *peopleTable;
    QLabel *label_7;
    QLabel *peoLabel;

    void setupUi(QWidget *Environment)
    {
        if (Environment->objectName().isEmpty())
            Environment->setObjectName(QString::fromUtf8("Environment"));
        Environment->resize(550, 350);
        Environment->setAutoFillBackground(true);
        tabWidget = new QTabWidget(Environment);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 551, 351));
        tabWidget->setMinimumSize(QSize(551, 351));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tal = new QWidget();
        tal->setObjectName(QString::fromUtf8("tal"));
        tal->setAutoFillBackground(true);
        valueButton = new QPushButton(tal);
        valueButton->setObjectName(QString::fromUtf8("valueButton"));
        valueButton->setGeometry(QRect(430, 150, 98, 27));
        curveButton = new QPushButton(tal);
        curveButton->setObjectName(QString::fromUtf8("curveButton"));
        curveButton->setGeometry(QRect(430, 190, 98, 27));
        tableButton = new QPushButton(tal);
        tableButton->setObjectName(QString::fromUtf8("tableButton"));
        tableButton->setGeometry(QRect(430, 230, 98, 27));
        groupBox = new QGroupBox(tal);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 381, 281));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 250, 71, 17));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 250, 66, 17));
        humid = new QwtThermo(groupBox);
        humid->setObjectName(QString::fromUtf8("humid"));
        humid->setGeometry(QRect(230, 30, 81, 201));
        humid->setMaxValue(100);
        thermo = new QwtThermo(groupBox);
        thermo->setObjectName(QString::fromUtf8("thermo"));
        thermo->setGeometry(QRect(50, 30, 81, 201));
        thermo->setMaxValue(100);
        temAHumTable = new QTableWidget(groupBox);
        temAHumTable->setObjectName(QString::fromUtf8("temAHumTable"));
        temAHumTable->setGeometry(QRect(0, 30, 381, 211));
        temAHumTable->setRowCount(0);
        temAHumTable->setColumnCount(0);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 250, 81, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 250, 91, 17));
        widget_3 = new QWidget(tal);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(420, 20, 120, 121));
        clock1 = new QwtAnalogClock(widget_3);
        clock1->setObjectName(QString::fromUtf8("clock1"));
        clock1->setGeometry(QRect(0, 0, 121, 111));
        clock1->setLineWidth(4);
        exitButton1 = new QPushButton(tal);
        exitButton1->setObjectName(QString::fromUtf8("exitButton1"));
        exitButton1->setGeometry(QRect(430, 274, 98, 27));
        tabWidget->addTab(tal, QString());
        tal1 = new QWidget();
        tal1->setObjectName(QString::fromUtf8("tal1"));
        tal1->setAutoFillBackground(true);
        exitButton2 = new QPushButton(tal1);
        exitButton2->setObjectName(QString::fromUtf8("exitButton2"));
        exitButton2->setGeometry(QRect(430, 270, 98, 27));
        widget_2 = new QWidget(tal1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(420, 20, 120, 121));
        clock2 = new QwtAnalogClock(widget_2);
        clock2->setObjectName(QString::fromUtf8("clock2"));
        clock2->setGeometry(QRect(0, 0, 121, 111));
        clock2->setLineWidth(4);
        groupBox_2 = new QGroupBox(tal1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 401, 301));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 270, 121, 17));
        smokeTable = new QTableWidget(groupBox_2);
        smokeTable->setObjectName(QString::fromUtf8("smokeTable"));
        smokeTable->setGeometry(QRect(0, 30, 381, 231));
        smokeTable->setRowCount(0);
        smokeTable->setColumnCount(0);
        label_8 = new QLabel(tal1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(445, 180, 71, 20));
        smoLabel = new QLabel(tal1);
        smoLabel->setObjectName(QString::fromUtf8("smoLabel"));
        smoLabel->setGeometry(QRect(450, 210, 66, 17));
        tabWidget->addTab(tal1, QString());
        tal2 = new QWidget();
        tal2->setObjectName(QString::fromUtf8("tal2"));
        tal2->setAutoFillBackground(true);
        exitButton3 = new QPushButton(tal2);
        exitButton3->setObjectName(QString::fromUtf8("exitButton3"));
        exitButton3->setGeometry(QRect(430, 270, 98, 27));
        widget = new QWidget(tal2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 20, 120, 121));
        clock3 = new QwtAnalogClock(widget);
        clock3->setObjectName(QString::fromUtf8("clock3"));
        clock3->setGeometry(QRect(0, 0, 121, 111));
        clock3->setLineWidth(4);
        groupBox_3 = new QGroupBox(tal2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 401, 301));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 270, 121, 17));
        peopleTable = new QTableWidget(groupBox_3);
        peopleTable->setObjectName(QString::fromUtf8("peopleTable"));
        peopleTable->setGeometry(QRect(0, 30, 381, 231));
        peopleTable->setRowCount(0);
        peopleTable->setColumnCount(0);
        label_7 = new QLabel(tal2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(440, 170, 81, 17));
        peoLabel = new QLabel(tal2);
        peoLabel->setObjectName(QString::fromUtf8("peoLabel"));
        peoLabel->setGeometry(QRect(425, 200, 111, 20));
        tabWidget->addTab(tal2, QString());

        retranslateUi(Environment);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Environment);
    } // setupUi

    void retranslateUi(QWidget *Environment)
    {
        Environment->setWindowTitle(QApplication::translate("Environment", "Environment", 0, QApplication::UnicodeUTF8));
        valueButton->setText(QApplication::translate("Environment", "\345\256\236\346\227\266\345\233\276", 0, QApplication::UnicodeUTF8));
        curveButton->setText(QApplication::translate("Environment", "\345\256\236\346\227\266\346\233\262\347\272\277\345\233\276", 0, QApplication::UnicodeUTF8));
        tableButton->setText(QApplication::translate("Environment", "\350\241\250\346\240\274", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Environment", "\346\270\251\346\271\277\345\272\246\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Environment", "\346\271\277\345\272\246\350\256\241(%)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Environment", "\346\270\251\345\272\246\350\256\241", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Environment", "\345\256\236\346\227\266\346\233\262\347\272\277\345\233\276", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Environment", "\346\270\251\346\271\277\345\272\246\346\225\260\346\215\256\350\241\250", 0, QApplication::UnicodeUTF8));
        exitButton1->setText(QApplication::translate("Environment", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tal), QApplication::translate("Environment", "\346\270\251\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        exitButton2->setText(QApplication::translate("Environment", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Environment", "\347\203\237\351\233\276\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Environment", "\347\203\237\351\233\276\346\225\260\346\215\256\350\241\250", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Environment", "\347\203\237\351\233\276\346\243\200\346\265\213\357\274\232", 0, QApplication::UnicodeUTF8));
        smoLabel->setText(QApplication::translate("Environment", "null", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tal1), QApplication::translate("Environment", "\347\203\237\351\233\276\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        exitButton3->setText(QApplication::translate("Environment", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Environment", "\344\272\272\344\275\223\346\243\200\346\265\213\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Environment", "\344\272\272\344\275\223\346\243\200\346\265\213\346\225\260\346\215\256\350\241\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Environment", "\344\272\272\344\275\223\346\243\200\346\265\213\357\274\232", 0, QApplication::UnicodeUTF8));
        peoLabel->setText(QApplication::translate("Environment", "null", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tal2), QApplication::translate("Environment", "\344\272\272\344\275\223\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Environment: public Ui_Environment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENT_H
