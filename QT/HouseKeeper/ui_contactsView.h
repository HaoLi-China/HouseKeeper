/********************************************************************************
** Form generated from reading UI file 'contactsView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSVIEW_H
#define UI_CONTACTSVIEW_H

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

class Ui_ContactsView
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *contactsList;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteButton;

    void setupUi(QWidget *ContactsView)
    {
        if (ContactsView->objectName().isEmpty())
            ContactsView->setObjectName(QString::fromUtf8("ContactsView"));
        ContactsView->resize(350, 300);
        ContactsView->setAutoFillBackground(true);
        ContactsView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ContactsView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        contactsList = new QListWidget(ContactsView);
        contactsList->setObjectName(QString::fromUtf8("contactsList"));
        contactsList->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(contactsList);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(ContactsView);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(100, 40));
        addButton->setProperty("sizeHint", QVariant(QSize(85, 27)));
        addButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteButton = new QPushButton(ContactsView);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));
        deleteButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ContactsView);

        QMetaObject::connectSlotsByName(ContactsView);
    } // setupUi

    void retranslateUi(QWidget *ContactsView)
    {
        ContactsView->setWindowTitle(QApplication::translate("ContactsView", "ContactsView", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("ContactsView", "Add", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("ContactsView", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ContactsView: public Ui_ContactsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSVIEW_H
