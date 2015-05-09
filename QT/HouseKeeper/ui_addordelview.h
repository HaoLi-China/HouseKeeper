/********************************************************************************
** Form generated from reading UI file 'addordelview.ui'
**
** Created: Mon Jul 15 15:05:05 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDELVIEW_H
#define UI_ADDORDELVIEW_H

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

class Ui_AddOrDelView
{
public:
    QWidget *RemoteMainwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QPushButton *addUserButton;
    QPushButton *delUserButton;
    QWidget *widget_3;
    QFrame *RemoteTopframe;
    QLabel *headLabel;

    void setupUi(QWidget *AddOrDelView)
    {
        if (AddOrDelView->objectName().isEmpty())
            AddOrDelView->setObjectName(QString::fromUtf8("AddOrDelView"));
        AddOrDelView->resize(550, 350);
        AddOrDelView->setAutoFillBackground(true);
        RemoteMainwidget = new QWidget(AddOrDelView);
        RemoteMainwidget->setObjectName(QString::fromUtf8("RemoteMainwidget"));
        RemoteMainwidget->setGeometry(QRect(10, 50, 531, 291));
        gridLayoutWidget = new QWidget(RemoteMainwidget);
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

        widget_2 = new QWidget(gridLayoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(200, 150));
        addUserButton = new QPushButton(widget_2);
        addUserButton->setObjectName(QString::fromUtf8("addUserButton"));
        addUserButton->setGeometry(QRect(0, 10, 201, 42));
        addUserButton->setFlat(true);
        delUserButton = new QPushButton(widget_2);
        delUserButton->setObjectName(QString::fromUtf8("delUserButton"));
        delUserButton->setGeometry(QRect(0, 100, 201, 42));
        delUserButton->setFlat(true);

        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        widget_3 = new QWidget(gridLayoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        RemoteTopframe = new QFrame(AddOrDelView);
        RemoteTopframe->setObjectName(QString::fromUtf8("RemoteTopframe"));
        RemoteTopframe->setGeometry(QRect(10, 10, 530, 30));
        RemoteTopframe->setFrameShape(QFrame::StyledPanel);
        RemoteTopframe->setFrameShadow(QFrame::Raised);
        headLabel = new QLabel(RemoteTopframe);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setGeometry(QRect(10, 0, 181, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        headLabel->setFont(font);
        headLabel->setMouseTracking(false);
        headLabel->setAcceptDrops(false);

        retranslateUi(AddOrDelView);

        QMetaObject::connectSlotsByName(AddOrDelView);
    } // setupUi

    void retranslateUi(QWidget *AddOrDelView)
    {
        AddOrDelView->setWindowTitle(QApplication::translate("AddOrDelView", "AddOrDelView", 0, QApplication::UnicodeUTF8));
        addUserButton->setText(QString());
        delUserButton->setText(QString());
        headLabel->setText(QApplication::translate("AddOrDelView", "AddOrDelView", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddOrDelView: public Ui_AddOrDelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDELVIEW_H
