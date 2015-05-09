/********************************************************************************
** Form generated from reading UI file 'safesetting.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFESETTING_H
#define UI_SAFESETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SafeSetting
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *safeCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SafeSetting)
    {
        if (SafeSetting->objectName().isEmpty())
            SafeSetting->setObjectName(QString::fromUtf8("SafeSetting"));
        SafeSetting->resize(196, 77);
        SafeSetting->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(SafeSetting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        safeCheckBox = new QCheckBox(SafeSetting);
        safeCheckBox->setObjectName(QString::fromUtf8("safeCheckBox"));

        verticalLayout->addWidget(safeCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(SafeSetting);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SafeSetting);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SafeSetting);
        QObject::connect(cancelButton, SIGNAL(clicked()), SafeSetting, SLOT(close()));

        QMetaObject::connectSlotsByName(SafeSetting);
    } // setupUi

    void retranslateUi(QDialog *SafeSetting)
    {
        SafeSetting->setWindowTitle(QApplication::translate("SafeSetting", "SafeSetting", 0, QApplication::UnicodeUTF8));
        safeCheckBox->setText(QApplication::translate("SafeSetting", "\351\230\262\347\233\227\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("SafeSetting", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("SafeSetting", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SafeSetting: public Ui_SafeSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFESETTING_H
