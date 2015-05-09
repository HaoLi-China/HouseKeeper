/********************************************************************************
** Form generated from reading UI file 'usersetview.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSETVIEW_H
#define UI_USERSETVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserSetView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *userList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *UserSetView)
    {
        if (UserSetView->objectName().isEmpty())
            UserSetView->setObjectName(QString::fromUtf8("UserSetView"));
        UserSetView->resize(350, 300);
        UserSetView->setAutoFillBackground(true);
        UserSetView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(UserSetView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(UserSetView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        userList = new QListWidget(UserSetView);
        userList->setObjectName(QString::fromUtf8("userList"));

        verticalLayout->addWidget(userList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(UserSetView);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(100, 40));

        horizontalLayout->addWidget(addButton);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        deleteButton = new QPushButton(UserSetView);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserSetView);

        QMetaObject::connectSlotsByName(UserSetView);
    } // setupUi

    void retranslateUi(QWidget *UserSetView)
    {
        UserSetView->setWindowTitle(QApplication::translate("UserSetView", "UserSetView", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserSetView", "UsersList:", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("UserSetView", "Add", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("UserSetView", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserSetView: public Ui_UserSetView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSETVIEW_H
