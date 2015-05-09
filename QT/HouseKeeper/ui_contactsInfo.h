/********************************************************************************
** Form generated from reading UI file 'contactsInfo.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSINFO_H
#define UI_CONTACTSINFO_H

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

class Ui_ContactsInfo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *numLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *callButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ContactsInfo)
    {
        if (ContactsInfo->objectName().isEmpty())
            ContactsInfo->setObjectName(QString::fromUtf8("ContactsInfo"));
        ContactsInfo->resize(300, 150);
        ContactsInfo->setAutoFillBackground(true);
        ContactsInfo->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ContactsInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ContactsInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(111, 0));
        label_2->setMaximumSize(QSize(111, 16777215));

        horizontalLayout->addWidget(label_2);

        nameLabel = new QLabel(ContactsInfo);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(140, 0));
        nameLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(nameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ContactsInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(111, 0));
        label->setMaximumSize(QSize(111, 16777215));

        horizontalLayout_2->addWidget(label);

        numLabel = new QLabel(ContactsInfo);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));
        numLabel->setMinimumSize(QSize(140, 0));
        numLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_2->addWidget(numLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        callButton = new QPushButton(ContactsInfo);
        callButton->setObjectName(QString::fromUtf8("callButton"));

        horizontalLayout_3->addWidget(callButton);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendButton = new QPushButton(ContactsInfo);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        horizontalLayout_3->addWidget(sendButton);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ContactsInfo);

        QMetaObject::connectSlotsByName(ContactsInfo);
    } // setupUi

    void retranslateUi(QWidget *ContactsInfo)
    {
        ContactsInfo->setWindowTitle(QApplication::translate("ContactsInfo", "ContactsInfo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ContactsInfo", "name:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("ContactsInfo", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ContactsInfo", "Phone Number:", 0, QApplication::UnicodeUTF8));
        numLabel->setText(QApplication::translate("ContactsInfo", "TextLabel", 0, QApplication::UnicodeUTF8));
        callButton->setText(QApplication::translate("ContactsInfo", "Call", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("ContactsInfo", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ContactsInfo: public Ui_ContactsInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSINFO_H
