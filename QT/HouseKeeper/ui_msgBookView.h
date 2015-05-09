/********************************************************************************
** Form generated from reading UI file 'msgBookView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGBOOKVIEW_H
#define UI_MSGBOOKVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MsgBookView
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *messageList;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteButton;

    void setupUi(QWidget *MsgBookView)
    {
        if (MsgBookView->objectName().isEmpty())
            MsgBookView->setObjectName(QString::fromUtf8("MsgBookView"));
        MsgBookView->resize(350, 300);
        MsgBookView->setAutoFillBackground(true);
        MsgBookView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MsgBookView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        messageList = new QListWidget(MsgBookView);
        messageList->setObjectName(QString::fromUtf8("messageList"));
        messageList->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(messageList);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openButton = new QPushButton(MsgBookView);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setMinimumSize(QSize(100, 40));
        openButton->setFocusPolicy(Qt::NoFocus);
        openButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(openButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteButton = new QPushButton(MsgBookView);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));
        deleteButton->setFocusPolicy(Qt::NoFocus);
        deleteButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MsgBookView);

        QMetaObject::connectSlotsByName(MsgBookView);
    } // setupUi

    void retranslateUi(QWidget *MsgBookView)
    {
        MsgBookView->setWindowTitle(QApplication::translate("MsgBookView", "MsgBookView", 0, QApplication::UnicodeUTF8));
        openButton->setText(QApplication::translate("MsgBookView", "Open", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("MsgBookView", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MsgBookView: public Ui_MsgBookView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGBOOKVIEW_H
