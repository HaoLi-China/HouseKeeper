/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_AddUser
{
public:
    QFrame *AddMainframe;
    QLabel *UserIdlable;
    QLabel *UserPwlable;
    QLabel *Confrimlable;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QLabel *infoLabel;
    QFrame *AddUserframe;
    QLabel *AddUserlabel;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QString::fromUtf8("AddUser"));
        AddUser->resize(550, 350);
        AddUser->setAutoFillBackground(true);
        AddMainframe = new QFrame(AddUser);
        AddMainframe->setObjectName(QString::fromUtf8("AddMainframe"));
        AddMainframe->setGeometry(QRect(10, 50, 530, 290));
        AddMainframe->setFrameShape(QFrame::StyledPanel);
        AddMainframe->setFrameShadow(QFrame::Raised);
        UserIdlable = new QLabel(AddMainframe);
        UserIdlable->setObjectName(QString::fromUtf8("UserIdlable"));
        UserIdlable->setGeometry(QRect(70, 75, 66, 17));
        UserPwlable = new QLabel(AddMainframe);
        UserPwlable->setObjectName(QString::fromUtf8("UserPwlable"));
        UserPwlable->setGeometry(QRect(70, 115, 81, 17));
        Confrimlable = new QLabel(AddMainframe);
        Confrimlable->setObjectName(QString::fromUtf8("Confrimlable"));
        Confrimlable->setGeometry(QRect(70, 155, 66, 17));
        cancelButton = new QPushButton(AddMainframe);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(370, 130, 98, 27));
        saveButton = new QPushButton(AddMainframe);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 90, 98, 27));
        infoLabel = new QLabel(AddMainframe);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(90, 210, 361, 17));
        AddUserframe = new QFrame(AddUser);
        AddUserframe->setObjectName(QString::fromUtf8("AddUserframe"));
        AddUserframe->setGeometry(QRect(10, 10, 530, 30));
        AddUserframe->setFrameShape(QFrame::StyledPanel);
        AddUserframe->setFrameShadow(QFrame::Raised);
        AddUserlabel = new QLabel(AddUserframe);
        AddUserlabel->setObjectName(QString::fromUtf8("AddUserlabel"));
        AddUserlabel->setGeometry(QRect(10, 0, 221, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        AddUserlabel->setFont(font);
        AddUserlabel->setMouseTracking(false);
        AddUserlabel->setAcceptDrops(false);

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "AddUser", 0, QApplication::UnicodeUTF8));
        UserIdlable->setText(QApplication::translate("AddUser", "\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        UserPwlable->setText(QApplication::translate("AddUser", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        Confrimlable->setText(QApplication::translate("AddUser", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddUser", "cancel", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("AddUser", "Save", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QString());
        AddUserlabel->setText(QApplication::translate("AddUser", "Add User ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
