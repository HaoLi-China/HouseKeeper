/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created: Mon Jul 15 14:36:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QFrame *frame_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *timeLcd;
    QSpacerItem *horizontalSpacer;
    QPushButton *servicesButton;
    QPushButton *settingButton;
    QPushButton *monitorButton;
    QPushButton *otherButton;
    QFrame *frame;
    QPushButton *envButton;
    QFrame *frame_3;
    QPushButton *phoneButton;
    QPushButton *entButton;
    QPushButton *locationButton;
    QFrame *frame_4;
    QPushButton *safeButton;
    QPushButton *accountButton;
    QFrame *frame_5;
    QPushButton *aboutButton;
    QPushButton *helpButton;

    void setupUi(QWidget *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(800, 480);
        MainView->setAutoFillBackground(true);
        frame_2 = new QFrame(MainView);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(9, 10, 781, 30));
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 781, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        timeLcd = new QLCDNumber(layoutWidget);
        timeLcd->setObjectName(QString::fromUtf8("timeLcd"));
        timeLcd->setMinimumSize(QSize(300, 0));
        timeLcd->setNumDigits(20);

        horizontalLayout->addWidget(timeLcd);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        servicesButton = new QPushButton(MainView);
        servicesButton->setObjectName(QString::fromUtf8("servicesButton"));
        servicesButton->setGeometry(QRect(250, 70, 100, 80));
        settingButton = new QPushButton(MainView);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setGeometry(QRect(450, 70, 100, 80));
        monitorButton = new QPushButton(MainView);
        monitorButton->setObjectName(QString::fromUtf8("monitorButton"));
        monitorButton->setGeometry(QRect(50, 70, 100, 80));
        otherButton = new QPushButton(MainView);
        otherButton->setObjectName(QString::fromUtf8("otherButton"));
        otherButton->setGeometry(QRect(650, 70, 100, 80));
        frame = new QFrame(MainView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 150, 400, 280));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        envButton = new QPushButton(frame);
        envButton->setObjectName(QString::fromUtf8("envButton"));
        envButton->setGeometry(QRect(20, 40, 90, 70));
        frame_3 = new QFrame(MainView);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(250, 150, 400, 280));
        frame_3->setAutoFillBackground(true);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        phoneButton = new QPushButton(frame_3);
        phoneButton->setObjectName(QString::fromUtf8("phoneButton"));
        phoneButton->setGeometry(QRect(20, 40, 90, 70));
        entButton = new QPushButton(frame_3);
        entButton->setObjectName(QString::fromUtf8("entButton"));
        entButton->setGeometry(QRect(120, 40, 90, 70));
        locationButton = new QPushButton(frame_3);
        locationButton->setObjectName(QString::fromUtf8("locationButton"));
        locationButton->setGeometry(QRect(20, 130, 90, 70));
        frame_4 = new QFrame(MainView);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(150, 150, 400, 280));
        frame_4->setAutoFillBackground(true);
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(1);
        safeButton = new QPushButton(frame_4);
        safeButton->setObjectName(QString::fromUtf8("safeButton"));
        safeButton->setGeometry(QRect(290, 40, 90, 70));
        accountButton = new QPushButton(frame_4);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));
        accountButton->setGeometry(QRect(190, 40, 90, 70));
        frame_5 = new QFrame(MainView);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(350, 150, 400, 280));
        frame_5->setAutoFillBackground(true);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        aboutButton = new QPushButton(frame_5);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setGeometry(QRect(290, 40, 90, 70));
        helpButton = new QPushButton(frame_5);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(190, 40, 90, 70));

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QWidget *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", 0, QApplication::UnicodeUTF8));
        servicesButton->setText(QString());
        settingButton->setText(QString());
        monitorButton->setText(QString());
        otherButton->setText(QString());
        envButton->setText(QString());
        phoneButton->setText(QString());
        entButton->setText(QString());
        locationButton->setText(QString());
        safeButton->setText(QString());
        accountButton->setText(QString());
        aboutButton->setText(QString());
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
