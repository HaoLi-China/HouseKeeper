/********************************************************************************
** Form generated from reading UI file 'deleteuser.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSER_H
#define UI_DELETEUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteUser
{
public:
    QFrame *DelTopframe;
    QLabel *DelToplabel;
    QFrame *DelMainframe;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QPushButton *commitButton;
    QLabel *UserIdlabel;
    QComboBox *userComboBox;
    QLabel *infoLabel;
    QWidget *widget_2;

    void setupUi(QWidget *DeleteUser)
    {
        if (DeleteUser->objectName().isEmpty())
            DeleteUser->setObjectName(QString::fromUtf8("DeleteUser"));
        DeleteUser->resize(550, 350);
        DeleteUser->setAutoFillBackground(true);
        DelTopframe = new QFrame(DeleteUser);
        DelTopframe->setObjectName(QString::fromUtf8("DelTopframe"));
        DelTopframe->setGeometry(QRect(10, 10, 530, 30));
        DelTopframe->setFrameShape(QFrame::StyledPanel);
        DelTopframe->setFrameShadow(QFrame::Raised);
        DelToplabel = new QLabel(DelTopframe);
        DelToplabel->setObjectName(QString::fromUtf8("DelToplabel"));
        DelToplabel->setGeometry(QRect(10, 0, 221, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        DelToplabel->setFont(font);
        DelToplabel->setMouseTracking(false);
        DelToplabel->setAcceptDrops(false);
        DelMainframe = new QFrame(DeleteUser);
        DelMainframe->setObjectName(QString::fromUtf8("DelMainframe"));
        DelMainframe->setGeometry(QRect(10, 50, 530, 290));
        DelMainframe->setFrameShape(QFrame::StyledPanel);
        DelMainframe->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(DelMainframe);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 572, 291));
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

        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(250, 100));
        commitButton = new QPushButton(widget);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));
        commitButton->setGeometry(QRect(80, 70, 98, 27));
        UserIdlabel = new QLabel(widget);
        UserIdlabel->setObjectName(QString::fromUtf8("UserIdlabel"));
        UserIdlabel->setGeometry(QRect(20, 6, 50, 17));
        userComboBox = new QComboBox(widget);
        userComboBox->setObjectName(QString::fromUtf8("userComboBox"));
        userComboBox->setGeometry(QRect(64, 0, 161, 30));
        infoLabel = new QLabel(widget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(10, 40, 231, 17));

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        widget_2 = new QWidget(gridLayoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout->addWidget(widget_2, 0, 2, 1, 1);


        retranslateUi(DeleteUser);

        QMetaObject::connectSlotsByName(DeleteUser);
    } // setupUi

    void retranslateUi(QWidget *DeleteUser)
    {
        DeleteUser->setWindowTitle(QApplication::translate("DeleteUser", "DeleteUser", 0, QApplication::UnicodeUTF8));
        DelToplabel->setText(QApplication::translate("DeleteUser", "Delete User ", 0, QApplication::UnicodeUTF8));
        commitButton->setText(QApplication::translate("DeleteUser", "Commit", 0, QApplication::UnicodeUTF8));
        UserIdlabel->setText(QApplication::translate("DeleteUser", "\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteUser: public Ui_DeleteUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSER_H
