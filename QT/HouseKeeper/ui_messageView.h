/********************************************************************************
** Form generated from reading UI file 'messageView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEVIEW_H
#define UI_MESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *numberEdit;
    QLabel *label;
    QTextEdit *msgEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *contactsButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *send;

    void setupUi(QWidget *MessageView)
    {
        if (MessageView->objectName().isEmpty())
            MessageView->setObjectName(QString::fromUtf8("MessageView"));
        MessageView->resize(280, 395);
        MessageView->setMaximumSize(QSize(924, 16777215));
        MessageView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MessageView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(MessageView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        numberEdit = new QLineEdit(MessageView);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));

        horizontalLayout_2->addWidget(numberEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(MessageView);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        msgEdit = new QTextEdit(MessageView);
        msgEdit->setObjectName(QString::fromUtf8("msgEdit"));
        msgEdit->setMinimumSize(QSize(262, 100));
        msgEdit->setMaximumSize(QSize(262, 100));

        verticalLayout->addWidget(msgEdit);

        verticalSpacer = new QSpacerItem(13, 196, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalSpacer_3 = new QSpacerItem(284, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        contactsButton = new QPushButton(MessageView);
        contactsButton->setObjectName(QString::fromUtf8("contactsButton"));
        contactsButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(contactsButton);

        horizontalSpacer_2 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        send = new QPushButton(MessageView);
        send->setObjectName(QString::fromUtf8("send"));
        send->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(send);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessageView);

        QMetaObject::connectSlotsByName(MessageView);
    } // setupUi

    void retranslateUi(QWidget *MessageView)
    {
        MessageView->setWindowTitle(QApplication::translate("MessageView", "MessageView", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MessageView", "Contacts:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MessageView", "Message:", 0, QApplication::UnicodeUTF8));
        contactsButton->setText(QApplication::translate("MessageView", "contacts", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("MessageView", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageView: public Ui_MessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEVIEW_H
