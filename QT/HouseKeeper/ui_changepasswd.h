/********************************************************************************
** Form generated from reading UI file 'changepasswd.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWD_H
#define UI_CHANGEPASSWD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswd
{
public:
    QFrame *ChangeTopframe;
    QLabel *ChangePwlabel;
    QFrame *ChangeMainframe;
    QLabel *UserIdlable;
    QLabel *userNamelabel;
    QLabel *OldPwlabel;
    QLabel *NewPwlabel;
    QLabel *Confrimlabel;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QLabel *infoLabel;

    void setupUi(QWidget *ChangePasswd)
    {
        if (ChangePasswd->objectName().isEmpty())
            ChangePasswd->setObjectName(QString::fromUtf8("ChangePasswd"));
        ChangePasswd->resize(550, 350);
        ChangePasswd->setAutoFillBackground(true);
        ChangeTopframe = new QFrame(ChangePasswd);
        ChangeTopframe->setObjectName(QString::fromUtf8("ChangeTopframe"));
        ChangeTopframe->setGeometry(QRect(10, 10, 530, 30));
        ChangeTopframe->setFrameShape(QFrame::StyledPanel);
        ChangeTopframe->setFrameShadow(QFrame::Raised);
        ChangePwlabel = new QLabel(ChangeTopframe);
        ChangePwlabel->setObjectName(QString::fromUtf8("ChangePwlabel"));
        ChangePwlabel->setGeometry(QRect(10, 0, 221, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        ChangePwlabel->setFont(font);
        ChangePwlabel->setMouseTracking(false);
        ChangePwlabel->setAcceptDrops(false);
        ChangeMainframe = new QFrame(ChangePasswd);
        ChangeMainframe->setObjectName(QString::fromUtf8("ChangeMainframe"));
        ChangeMainframe->setGeometry(QRect(10, 50, 530, 290));
        ChangeMainframe->setFrameShape(QFrame::StyledPanel);
        ChangeMainframe->setFrameShadow(QFrame::Raised);
        UserIdlable = new QLabel(ChangeMainframe);
        UserIdlable->setObjectName(QString::fromUtf8("UserIdlable"));
        UserIdlable->setGeometry(QRect(70, 40, 66, 17));
        userNamelabel = new QLabel(ChangeMainframe);
        userNamelabel->setObjectName(QString::fromUtf8("userNamelabel"));
        userNamelabel->setGeometry(QRect(170, 40, 111, 17));
        OldPwlabel = new QLabel(ChangeMainframe);
        OldPwlabel->setObjectName(QString::fromUtf8("OldPwlabel"));
        OldPwlabel->setGeometry(QRect(70, 75, 81, 17));
        NewPwlabel = new QLabel(ChangeMainframe);
        NewPwlabel->setObjectName(QString::fromUtf8("NewPwlabel"));
        NewPwlabel->setGeometry(QRect(70, 115, 81, 17));
        Confrimlabel = new QLabel(ChangeMainframe);
        Confrimlabel->setObjectName(QString::fromUtf8("Confrimlabel"));
        Confrimlabel->setGeometry(QRect(70, 155, 66, 17));
        cancelButton = new QPushButton(ChangeMainframe);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(370, 130, 98, 27));
        saveButton = new QPushButton(ChangeMainframe);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 90, 98, 27));
        infoLabel = new QLabel(ChangeMainframe);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(100, 200, 331, 20));

        retranslateUi(ChangePasswd);

        QMetaObject::connectSlotsByName(ChangePasswd);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswd)
    {
        ChangePasswd->setWindowTitle(QApplication::translate("ChangePasswd", "ChangePasswd", 0, QApplication::UnicodeUTF8));
        ChangePwlabel->setText(QApplication::translate("ChangePasswd", "Change Password", 0, QApplication::UnicodeUTF8));
        UserIdlable->setText(QApplication::translate("ChangePasswd", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        userNamelabel->setText(QApplication::translate("ChangePasswd", "admin", 0, QApplication::UnicodeUTF8));
        OldPwlabel->setText(QApplication::translate("ChangePasswd", "\346\227\247\345\257\206\347\240\201 ", 0, QApplication::UnicodeUTF8));
        NewPwlabel->setText(QApplication::translate("ChangePasswd", "\346\226\260\345\257\206\347\240\201 ", 0, QApplication::UnicodeUTF8));
        Confrimlabel->setText(QApplication::translate("ChangePasswd", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ChangePasswd", "cancel", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("ChangePasswd", "Save", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePasswd: public Ui_ChangePasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWD_H
