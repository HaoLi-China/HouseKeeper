/********************************************************************************
** Form generated from reading UI file 'locationview.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONVIEW_H
#define UI_LOCATIONVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_LocationView
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QComboBox *comboName;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *timeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *opLatitudeArea;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *opLongitudeArea;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *distanceArea;
    QWebView *mapView;

    void setupUi(QWidget *LocationView)
    {
        if (LocationView->objectName().isEmpty())
            LocationView->setObjectName(QString::fromUtf8("LocationView"));
        LocationView->setEnabled(true);
        LocationView->resize(800, 394);
        LocationView->setAutoFillBackground(true);
        LocationView->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(LocationView);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox = new QComboBox(LocationView);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);

        verticalLayout->addWidget(comboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(LocationView);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(LocationView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(17, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        comboName = new QComboBox(LocationView);
        comboName->setObjectName(QString::fromUtf8("comboName"));

        verticalLayout->addWidget(comboName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(LocationView);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        timeEdit = new QLineEdit(LocationView);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);

        horizontalLayout->addWidget(timeEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(LocationView);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        opLatitudeArea = new QLineEdit(LocationView);
        opLatitudeArea->setObjectName(QString::fromUtf8("opLatitudeArea"));
        opLatitudeArea->setEnabled(false);

        horizontalLayout_4->addWidget(opLatitudeArea);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(LocationView);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        opLongitudeArea = new QLineEdit(LocationView);
        opLongitudeArea->setObjectName(QString::fromUtf8("opLongitudeArea"));
        opLongitudeArea->setEnabled(false);

        horizontalLayout_5->addWidget(opLongitudeArea);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(17, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(LocationView);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        distanceArea = new QLineEdit(LocationView);
        distanceArea->setObjectName(QString::fromUtf8("distanceArea"));
        distanceArea->setEnabled(false);

        horizontalLayout_6->addWidget(distanceArea);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);

        mapView = new QWebView(LocationView);
        mapView->setObjectName(QString::fromUtf8("mapView"));
        mapView->setMinimumSize(QSize(0, 0));
        mapView->setMaximumSize(QSize(550, 480));
        mapView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout_7->addWidget(mapView);


        retranslateUi(LocationView);

        QMetaObject::connectSlotsByName(LocationView);
    } // setupUi

    void retranslateUi(QWidget *LocationView)
    {
        LocationView->setWindowTitle(QApplication::translate("LocationView", "LocationView", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LocationView", "\346\210\221\347\232\204\344\275\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("LocationView", "\347\272\254\345\272\246:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LocationView", "\347\273\217\345\272\246:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LocationView", "\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        timeEdit->setText(QApplication::translate("LocationView", "null", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("LocationView", "\347\272\254\345\272\246:", 0, QApplication::UnicodeUTF8));
        opLatitudeArea->setText(QApplication::translate("LocationView", "null", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LocationView", "\347\273\217\345\272\246:", 0, QApplication::UnicodeUTF8));
        opLongitudeArea->setText(QApplication::translate("LocationView", "null", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LocationView", "\350\267\235\347\246\273:", 0, QApplication::UnicodeUTF8));
        distanceArea->setText(QApplication::translate("LocationView", "null", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LocationView: public Ui_LocationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONVIEW_H
