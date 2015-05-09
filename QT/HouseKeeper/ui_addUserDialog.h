/********************************************************************************
** Form generated from reading UI file 'addUserDialog.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERDIALOG_H
#define UI_ADDUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *numberEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QWidget *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QString::fromUtf8("AddUserDialog"));
        AddUserDialog->resize(208, 333);
        AddUserDialog->setMaximumSize(QSize(924, 16777215));
        AddUserDialog->setAutoFillBackground(true);
        AddUserDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AddUserDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(AddUserDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        numberEdit = new QLineEdit(AddUserDialog);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMinimumSize(QSize(190, 0));
        numberEdit->setMaximumSize(QSize(190, 16777215));

        verticalLayout->addWidget(numberEdit);

        verticalSpacer = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalSpacer_3 = new QSpacerItem(266, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        okButton = new QPushButton(AddUserDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(190, 0));
        okButton->setMaximumSize(QSize(190, 16777215));
        okButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(okButton);


        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QWidget *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "AddUserDialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddUserDialog", "Phone number:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AddUserDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDIALOG_H
