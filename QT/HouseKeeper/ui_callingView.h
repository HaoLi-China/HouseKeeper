/********************************************************************************
** Form generated from reading UI file 'callingView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLINGVIEW_H
#define UI_CALLINGVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CallingView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *picLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *numLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *timeLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *hUButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CallingView)
    {
        if (CallingView->objectName().isEmpty())
            CallingView->setObjectName(QString::fromUtf8("CallingView"));
        CallingView->resize(300, 253);
        CallingView->setAutoFillBackground(true);
        CallingView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(CallingView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        picLabel = new QLabel(CallingView);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setMinimumSize(QSize(100, 100));
        picLabel->setMaximumSize(QSize(100, 100));

        horizontalLayout_4->addWidget(picLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        numLabel = new QLabel(CallingView);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));

        horizontalLayout->addWidget(numLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        timeLabel = new QLabel(CallingView);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        horizontalLayout_3->addWidget(timeLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        hUButton = new QPushButton(CallingView);
        hUButton->setObjectName(QString::fromUtf8("hUButton"));

        horizontalLayout_2->addWidget(hUButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CallingView);

        QMetaObject::connectSlotsByName(CallingView);
    } // setupUi

    void retranslateUi(QWidget *CallingView)
    {
        CallingView->setWindowTitle(QApplication::translate("CallingView", "CallingView", 0, QApplication::UnicodeUTF8));
        picLabel->setText(QApplication::translate("CallingView", "pic", 0, QApplication::UnicodeUTF8));
        numLabel->setText(QApplication::translate("CallingView", "18769789212", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("CallingView", "00:00:00", 0, QApplication::UnicodeUTF8));
        hUButton->setText(QApplication::translate("CallingView", "HangUp", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CallingView: public Ui_CallingView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLINGVIEW_H
