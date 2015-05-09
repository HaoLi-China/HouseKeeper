/********************************************************************************
** Form generated from reading UI file 'phoneView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEVIEW_H
#define UI_PHONEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QPushButton *callButton;
    QPushButton *userSetButton;
    QPushButton *contactsButton;
    QPushButton *messageButton;
    QPushButton *msgBookButton;

    void setupUi(QWidget *PhoneView)
    {
        if (PhoneView->objectName().isEmpty())
            PhoneView->setObjectName(QString::fromUtf8("PhoneView"));
        PhoneView->resize(350, 350);
        PhoneView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PhoneView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(PhoneView);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        callButton = new QPushButton(widget);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setGeometry(QRect(120, 40, 80, 80));
        callButton->setMinimumSize(QSize(80, 80));
        callButton->setMaximumSize(QSize(80, 80));
        callButton->setFocusPolicy(Qt::NoFocus);
        userSetButton = new QPushButton(widget);
        userSetButton->setObjectName(QString::fromUtf8("userSetButton"));
        userSetButton->setGeometry(QRect(40, 120, 80, 80));
        userSetButton->setMinimumSize(QSize(80, 80));
        userSetButton->setMaximumSize(QSize(80, 80));
        userSetButton->setFocusPolicy(Qt::NoFocus);
        contactsButton = new QPushButton(widget);
        contactsButton->setObjectName(QString::fromUtf8("contactsButton"));
        contactsButton->setGeometry(QRect(120, 200, 80, 80));
        contactsButton->setMinimumSize(QSize(80, 80));
        contactsButton->setMaximumSize(QSize(80, 80));
        contactsButton->setFocusPolicy(Qt::NoFocus);
        messageButton = new QPushButton(widget);
        messageButton->setObjectName(QString::fromUtf8("messageButton"));
        messageButton->setGeometry(QRect(200, 120, 80, 80));
        messageButton->setMinimumSize(QSize(80, 80));
        messageButton->setMaximumSize(QSize(80, 80));
        messageButton->setFocusPolicy(Qt::NoFocus);
        msgBookButton = new QPushButton(widget);
        msgBookButton->setObjectName(QString::fromUtf8("msgBookButton"));
        msgBookButton->setGeometry(QRect(120, 120, 80, 80));
        msgBookButton->setMinimumSize(QSize(80, 80));
        msgBookButton->setMaximumSize(QSize(80, 80));
        msgBookButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(widget);


        retranslateUi(PhoneView);

        QMetaObject::connectSlotsByName(PhoneView);
    } // setupUi

    void retranslateUi(QWidget *PhoneView)
    {
        PhoneView->setWindowTitle(QApplication::translate("PhoneView", "PhoneView", 0, QApplication::UnicodeUTF8));
        callButton->setText(QString());
        userSetButton->setText(QString());
        contactsButton->setText(QString());
        messageButton->setText(QString());
        msgBookButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PhoneView: public Ui_PhoneView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEVIEW_H
