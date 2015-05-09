/********************************************************************************
** Form generated from reading UI file 'callView.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLVIEW_H
#define UI_CALLVIEW_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CallView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *numArea;
    QPushButton *contactsButton;
    QLabel *info;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *call;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CallView)
    {
        if (CallView->objectName().isEmpty())
            CallView->setObjectName(QString::fromUtf8("CallView"));
        CallView->resize(224, 338);
        CallView->setMinimumSize(QSize(120, 0));
        CallView->setMaximumSize(QSize(253, 16777215));
        CallView->setAutoFillBackground(true);
        CallView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(CallView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        numArea = new QLineEdit(CallView);
        numArea->setObjectName(QString::fromUtf8("numArea"));
        numArea->setMinimumSize(QSize(120, 30));
        numArea->setMaximumSize(QSize(16777213, 16777215));

        horizontalLayout_2->addWidget(numArea);

        contactsButton = new QPushButton(CallView);
        contactsButton->setObjectName(QString::fromUtf8("contactsButton"));
        contactsButton->setMaximumSize(QSize(70, 16777215));
        contactsButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(contactsButton);


        verticalLayout->addLayout(horizontalLayout_2);

        info = new QLabel(CallView);
        info->setObjectName(QString::fromUtf8("info"));

        verticalLayout->addWidget(info);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        call = new QPushButton(CallView);
        call->setObjectName(QString::fromUtf8("call"));
        call->setMinimumSize(QSize(190, 0));
        call->setMaximumSize(QSize(180, 16777215));
        call->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(call);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        info->raise();

        retranslateUi(CallView);

        QMetaObject::connectSlotsByName(CallView);
    } // setupUi

    void retranslateUi(QWidget *CallView)
    {
        CallView->setWindowTitle(QApplication::translate("CallView", "CallView", 0, QApplication::UnicodeUTF8));
        numArea->setText(QString());
        contactsButton->setText(QApplication::translate("CallView", "Contacts", 0, QApplication::UnicodeUTF8));
        info->setText(QApplication::translate("CallView", "Input number, then click  \"Call\". ", 0, QApplication::UnicodeUTF8));
        call->setText(QApplication::translate("CallView", "Call", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CallView: public Ui_CallView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLVIEW_H
