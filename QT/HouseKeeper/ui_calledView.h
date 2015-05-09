/********************************************************************************
** Form generated from reading UI file 'calledView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLEDVIEW_H
#define UI_CALLEDVIEW_H

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

class Ui_CalledView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *picLabel;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *numLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *timeLabel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *atButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *rtButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *CalledView)
    {
        if (CalledView->objectName().isEmpty())
            CalledView->setObjectName(QString::fromUtf8("CalledView"));
        CalledView->resize(300, 263);
        CalledView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(CalledView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        picLabel = new QLabel(CalledView);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setMinimumSize(QSize(100, 100));
        picLabel->setMaximumSize(QSize(100, 100));
        picLabel->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(picLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        numLabel = new QLabel(CalledView);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));

        horizontalLayout->addWidget(numLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        timeLabel = new QLabel(CalledView);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        horizontalLayout_3->addWidget(timeLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        atButton = new QPushButton(CalledView);
        atButton->setObjectName(QString::fromUtf8("atButton"));

        horizontalLayout_2->addWidget(atButton);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        rtButton = new QPushButton(CalledView);
        rtButton->setObjectName(QString::fromUtf8("rtButton"));

        horizontalLayout_2->addWidget(rtButton);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CalledView);

        QMetaObject::connectSlotsByName(CalledView);
    } // setupUi

    void retranslateUi(QWidget *CalledView)
    {
        CalledView->setWindowTitle(QApplication::translate("CalledView", "CalledView", 0, QApplication::UnicodeUTF8));
        picLabel->setText(QApplication::translate("CalledView", "pic", 0, QApplication::UnicodeUTF8));
        numLabel->setText(QApplication::translate("CalledView", "11111111111", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("CalledView", " 00:00:00", 0, QApplication::UnicodeUTF8));
        atButton->setText(QApplication::translate("CalledView", "Accept", 0, QApplication::UnicodeUTF8));
        rtButton->setText(QApplication::translate("CalledView", "Reject", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalledView: public Ui_CalledView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLEDVIEW_H
