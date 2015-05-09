/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Mon Jul 15 15:38:16 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

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

class Ui_About
{
public:
    QFrame *AboutUsframe;
    QLabel *AboutUslabel;
    QWidget *widget;
    QWidget *teamwidget;
    QWidget *funcwidget;
    QWidget *infowidget;
    QPushButton *nextPageButton;
    QPushButton *lastPageButton;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(550, 350);
        About->setAutoFillBackground(true);
        AboutUsframe = new QFrame(About);
        AboutUsframe->setObjectName(QString::fromUtf8("AboutUsframe"));
        AboutUsframe->setGeometry(QRect(10, 10, 530, 30));
        AboutUsframe->setFrameShape(QFrame::StyledPanel);
        AboutUsframe->setFrameShadow(QFrame::Raised);
        AboutUslabel = new QLabel(AboutUsframe);
        AboutUslabel->setObjectName(QString::fromUtf8("AboutUslabel"));
        AboutUslabel->setGeometry(QRect(10, 0, 161, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        AboutUslabel->setFont(font);
        AboutUslabel->setMouseTracking(false);
        AboutUslabel->setAcceptDrops(false);
        widget = new QWidget(About);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 60, 531, 271));
        teamwidget = new QWidget(widget);
        teamwidget->setObjectName(QString::fromUtf8("teamwidget"));
        teamwidget->setGeometry(QRect(10, 130, 511, 91));
        teamwidget->setAutoFillBackground(true);
        teamwidget->setStyleSheet(QString::fromUtf8(""));
        funcwidget = new QWidget(widget);
        funcwidget->setObjectName(QString::fromUtf8("funcwidget"));
        funcwidget->setGeometry(QRect(10, 20, 511, 91));
        funcwidget->setAutoFillBackground(true);
        funcwidget->setStyleSheet(QString::fromUtf8(""));
        infowidget = new QWidget(widget);
        infowidget->setObjectName(QString::fromUtf8("infowidget"));
        infowidget->setGeometry(QRect(10, 20, 511, 91));
        infowidget->setAutoFillBackground(true);
        infowidget->setStyleSheet(QString::fromUtf8(""));
        nextPageButton = new QPushButton(widget);
        nextPageButton->setObjectName(QString::fromUtf8("nextPageButton"));
        nextPageButton->setGeometry(QRect(490, 230, 30, 30));
        lastPageButton = new QPushButton(widget);
        lastPageButton->setObjectName(QString::fromUtf8("lastPageButton"));
        lastPageButton->setGeometry(QRect(450, 230, 30, 30));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", 0, QApplication::UnicodeUTF8));
        AboutUslabel->setText(QApplication::translate("About", "About Us", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        teamwidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        teamwidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        teamwidget->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        funcwidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        funcwidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        funcwidget->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        nextPageButton->setText(QString());
        lastPageButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
