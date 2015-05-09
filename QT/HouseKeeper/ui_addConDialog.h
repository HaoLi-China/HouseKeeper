/********************************************************************************
** Form generated from reading UI file 'addConDialog.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONDIALOG_H
#define UI_ADDCONDIALOG_H

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

class Ui_AddContacts
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *numberEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *nameEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddContacts)
    {
        if (AddContacts->objectName().isEmpty())
            AddContacts->setObjectName(QString::fromUtf8("AddContacts"));
        AddContacts->resize(287, 317);
        AddContacts->setMaximumSize(QSize(924, 16777215));
        AddContacts->setAutoFillBackground(true);
        AddContacts->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AddContacts);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(AddContacts);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        numberEdit = new QLineEdit(AddContacts);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));

        horizontalLayout_2->addWidget(numberEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(AddContacts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(label);

        nameEdit = new QLineEdit(AddContacts);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 0));

        horizontalLayout_7->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalSpacer_3 = new QSpacerItem(266, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(AddContacts);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(okButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddContacts);

        QMetaObject::connectSlotsByName(AddContacts);
    } // setupUi

    void retranslateUi(QWidget *AddContacts)
    {
        AddContacts->setWindowTitle(QApplication::translate("AddContacts", "AddContacts", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddContacts", "Phone number:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddContacts", "Name:                 ", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AddContacts", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddContacts: public Ui_AddContacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONDIALOG_H
