/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Mon Jul 15 17:07:22 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QFrame *Manualframe;
    QLabel *Manuallabel;
    QWidget *ManualroupBox;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(550, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Help->sizePolicy().hasHeightForWidth());
        Help->setSizePolicy(sizePolicy);
        Help->setMinimumSize(QSize(0, 0));
        Help->setAutoFillBackground(true);
        Manualframe = new QFrame(Help);
        Manualframe->setObjectName(QString::fromUtf8("Manualframe"));
        Manualframe->setGeometry(QRect(10, 10, 530, 30));
        Manualframe->setFrameShape(QFrame::StyledPanel);
        Manualframe->setFrameShadow(QFrame::Raised);
        Manuallabel = new QLabel(Manualframe);
        Manuallabel->setObjectName(QString::fromUtf8("Manuallabel"));
        Manuallabel->setGeometry(QRect(10, 0, 161, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        Manuallabel->setFont(font);
        Manuallabel->setMouseTracking(false);
        Manuallabel->setAcceptDrops(false);
        ManualroupBox = new QWidget(Help);
        ManualroupBox->setObjectName(QString::fromUtf8("ManualroupBox"));
        ManualroupBox->setGeometry(QRect(10, 60, 531, 271));
        QFont font1;
        font1.setPointSize(10);
        ManualroupBox->setFont(font1);
        ManualroupBox->setAutoFillBackground(true);
        ManualroupBox->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Help", 0, QApplication::UnicodeUTF8));
        Manuallabel->setText(QApplication::translate("Help", "User Manual", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
