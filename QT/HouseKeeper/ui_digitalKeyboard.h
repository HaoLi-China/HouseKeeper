/********************************************************************************
** Form generated from reading UI file 'digitalKeyboard.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALKEYBOARD_H
#define UI_DIGITALKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalKeyboard
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *left;
    QPushButton *zero;
    QPushButton *right;
    QPushButton *back;
    QPushButton *space;
    QPushButton *clear;

    void setupUi(QWidget *DigitalKeyboard)
    {
        if (DigitalKeyboard->objectName().isEmpty())
            DigitalKeyboard->setObjectName(QString::fromUtf8("DigitalKeyboard"));
        DigitalKeyboard->resize(195, 229);
        DigitalKeyboard->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(DigitalKeyboard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 2, 194, 226));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        one = new QPushButton(layoutWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setMinimumSize(QSize(60, 40));
        one->setMaximumSize(QSize(60, 40));
        one->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(one, 0, 0, 1, 2);

        two = new QPushButton(layoutWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setMinimumSize(QSize(60, 40));
        two->setMaximumSize(QSize(60, 40));
        two->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(two, 0, 2, 1, 1);

        three = new QPushButton(layoutWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setMinimumSize(QSize(60, 40));
        three->setMaximumSize(QSize(60, 40));
        three->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(three, 0, 3, 1, 2);

        four = new QPushButton(layoutWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setMinimumSize(QSize(60, 40));
        four->setMaximumSize(QSize(60, 40));
        four->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(four, 1, 0, 1, 2);

        five = new QPushButton(layoutWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setMinimumSize(QSize(60, 40));
        five->setMaximumSize(QSize(60, 40));
        five->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(five, 1, 2, 1, 1);

        six = new QPushButton(layoutWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setMinimumSize(QSize(60, 40));
        six->setMaximumSize(QSize(60, 40));
        six->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(six, 1, 3, 1, 2);

        seven = new QPushButton(layoutWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setMinimumSize(QSize(60, 40));
        seven->setMaximumSize(QSize(60, 40));
        seven->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(seven, 2, 0, 1, 2);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setMinimumSize(QSize(60, 40));
        eight->setMaximumSize(QSize(60, 40));
        eight->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(eight, 2, 2, 1, 1);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setMinimumSize(QSize(60, 40));
        nine->setMaximumSize(QSize(60, 40));
        nine->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(nine, 2, 3, 1, 2);

        left = new QPushButton(layoutWidget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setMinimumSize(QSize(60, 40));
        left->setMaximumSize(QSize(60, 40));
        left->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(left, 3, 0, 1, 2);

        zero = new QPushButton(layoutWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setMinimumSize(QSize(60, 40));
        zero->setMaximumSize(QSize(60, 40));
        zero->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(zero, 3, 2, 1, 1);

        right = new QPushButton(layoutWidget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setMinimumSize(QSize(60, 40));
        right->setMaximumSize(QSize(60, 40));
        right->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(right, 3, 3, 1, 2);

        back = new QPushButton(layoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(40, 40));
        back->setMaximumSize(QSize(40, 40));
        back->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(back, 4, 0, 1, 1);

        space = new QPushButton(layoutWidget);
        space->setObjectName(QString::fromUtf8("space"));
        space->setMinimumSize(QSize(100, 40));
        space->setMaximumSize(QSize(100, 40));
        space->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(space, 4, 1, 1, 3);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setMinimumSize(QSize(40, 40));
        clear->setMaximumSize(QSize(40, 40));
        clear->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(clear, 4, 4, 1, 1);


        retranslateUi(DigitalKeyboard);

        QMetaObject::connectSlotsByName(DigitalKeyboard);
    } // setupUi

    void retranslateUi(QWidget *DigitalKeyboard)
    {
        DigitalKeyboard->setWindowTitle(QApplication::translate("DigitalKeyboard", "DigitalKeyboard", 0, QApplication::UnicodeUTF8));
        one->setText(QApplication::translate("DigitalKeyboard", "1", 0, QApplication::UnicodeUTF8));
        two->setText(QApplication::translate("DigitalKeyboard", "2", 0, QApplication::UnicodeUTF8));
        three->setText(QApplication::translate("DigitalKeyboard", "3", 0, QApplication::UnicodeUTF8));
        four->setText(QApplication::translate("DigitalKeyboard", "4", 0, QApplication::UnicodeUTF8));
        five->setText(QApplication::translate("DigitalKeyboard", "5", 0, QApplication::UnicodeUTF8));
        six->setText(QApplication::translate("DigitalKeyboard", "6", 0, QApplication::UnicodeUTF8));
        seven->setText(QApplication::translate("DigitalKeyboard", "7", 0, QApplication::UnicodeUTF8));
        eight->setText(QApplication::translate("DigitalKeyboard", "8", 0, QApplication::UnicodeUTF8));
        nine->setText(QApplication::translate("DigitalKeyboard", "9", 0, QApplication::UnicodeUTF8));
        left->setText(QApplication::translate("DigitalKeyboard", "*", 0, QApplication::UnicodeUTF8));
        zero->setText(QApplication::translate("DigitalKeyboard", "0", 0, QApplication::UnicodeUTF8));
        right->setText(QApplication::translate("DigitalKeyboard", "#", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("DigitalKeyboard", "<-", 0, QApplication::UnicodeUTF8));
        space->setText(QApplication::translate("DigitalKeyboard", "space", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("DigitalKeyboard", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigitalKeyboard: public Ui_DigitalKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALKEYBOARD_H
