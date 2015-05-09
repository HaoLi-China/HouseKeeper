/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created: Mon Jul 15 15:05:05 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QFrame *SetTopframe;
    QLabel *SetToplabel;
    QWidget *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QWidget *widget_2;
    QPushButton *ManagerButton;
    QPushButton *WebUserButton;
    QPushButton *RemoteButton;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(550, 347);
        Setting->setAutoFillBackground(true);
        SetTopframe = new QFrame(Setting);
        SetTopframe->setObjectName(QString::fromUtf8("SetTopframe"));
        SetTopframe->setGeometry(QRect(10, 10, 530, 30));
        SetTopframe->setFrameShape(QFrame::StyledPanel);
        SetTopframe->setFrameShadow(QFrame::Raised);
        SetToplabel = new QLabel(SetTopframe);
        SetToplabel->setObjectName(QString::fromUtf8("SetToplabel"));
        SetToplabel->setGeometry(QRect(10, 0, 161, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        SetToplabel->setFont(font);
        SetToplabel->setMouseTracking(false);
        SetToplabel->setAcceptDrops(false);
        widget = new QWidget(Setting);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 531, 291));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 531, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        widget_3 = new QWidget(gridLayoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        widget_2 = new QWidget(gridLayoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(200, 150));
        ManagerButton = new QPushButton(widget_2);
        ManagerButton->setObjectName(QString::fromUtf8("ManagerButton"));
        ManagerButton->setGeometry(QRect(0, 0, 201, 42));
        ManagerButton->setFlat(true);
        WebUserButton = new QPushButton(widget_2);
        WebUserButton->setObjectName(QString::fromUtf8("WebUserButton"));
        WebUserButton->setGeometry(QRect(0, 50, 201, 42));
        WebUserButton->setFlat(true);
        RemoteButton = new QPushButton(widget_2);
        RemoteButton->setObjectName(QString::fromUtf8("RemoteButton"));
        RemoteButton->setGeometry(QRect(0, 100, 201, 42));
        RemoteButton->setFlat(true);

        gridLayout->addWidget(widget_2, 1, 1, 1, 1);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Setting", 0, QApplication::UnicodeUTF8));
        SetToplabel->setText(QApplication::translate("Setting", "Account Setting", 0, QApplication::UnicodeUTF8));
        ManagerButton->setText(QString());
        WebUserButton->setText(QString());
        RemoteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
