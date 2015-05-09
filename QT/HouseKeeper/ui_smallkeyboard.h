/********************************************************************************
** Form generated from reading UI file 'smallkeyboard.ui'
**
** Created: Mon Jul 15 11:41:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLKEYBOARD_H
#define UI_SMALLKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmallKeyboard
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputEdit;
    QPushButton *okButton;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *two;
    QPushButton *three;
    QPushButton *one;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *five;
    QPushButton *six;
    QPushButton *eight;
    QPushButton *four;
    QPushButton *zero;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *q;
    QPushButton *w;
    QPushButton *e;
    QPushButton *r;
    QPushButton *t;
    QPushButton *yB;
    QPushButton *u;
    QPushButton *i;
    QPushButton *o;
    QPushButton *p;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *a;
    QPushButton *s;
    QPushButton *d;
    QPushButton *f;
    QPushButton *g;
    QPushButton *h;
    QPushButton *j;
    QPushButton *k;
    QPushButton *l;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *minusButtton;
    QPushButton *z;
    QPushButton *xB;
    QPushButton *c;
    QPushButton *v;
    QPushButton *b;
    QPushButton *n;
    QPushButton *m;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *clearButton;
    QPushButton *periodButton;
    QPushButton *spaceButton;
    QPushButton *commaButton;
    QPushButton *nextLineButton;
    QSpacerItem *horizontalSpacer_20;

    void setupUi(QDialog *SmallKeyboard)
    {
        if (SmallKeyboard->objectName().isEmpty())
            SmallKeyboard->setObjectName(QString::fromUtf8("SmallKeyboard"));
        SmallKeyboard->resize(340, 240);
        SmallKeyboard->setMinimumSize(QSize(340, 240));
        SmallKeyboard->setMaximumSize(QSize(340, 240));
        widget = new QWidget(SmallKeyboard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 340, 240));
        widget->setMinimumSize(QSize(340, 240));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        inputEdit = new QLineEdit(widget);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));

        horizontalLayout->addWidget(inputEdit);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        two = new QPushButton(widget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setMinimumSize(QSize(25, 25));
        two->setMaximumSize(QSize(20, 20));
        two->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(two);

        three = new QPushButton(widget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setMinimumSize(QSize(25, 25));
        three->setMaximumSize(QSize(20, 20));
        three->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(three);

        one = new QPushButton(widget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setMinimumSize(QSize(25, 25));
        one->setMaximumSize(QSize(20, 20));
        one->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(one);

        seven = new QPushButton(widget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setMinimumSize(QSize(25, 25));
        seven->setMaximumSize(QSize(20, 20));
        seven->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(seven);

        nine = new QPushButton(widget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setMinimumSize(QSize(25, 25));
        nine->setMaximumSize(QSize(20, 20));
        nine->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(nine);

        five = new QPushButton(widget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setMinimumSize(QSize(25, 25));
        five->setMaximumSize(QSize(20, 20));
        five->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(five);

        six = new QPushButton(widget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setMinimumSize(QSize(25, 25));
        six->setMaximumSize(QSize(20, 20));
        six->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(six);

        eight = new QPushButton(widget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setMinimumSize(QSize(25, 25));
        eight->setMaximumSize(QSize(20, 20));
        eight->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(eight);

        four = new QPushButton(widget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setMinimumSize(QSize(25, 25));
        four->setMaximumSize(QSize(20, 20));
        four->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(four);

        zero = new QPushButton(widget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setMinimumSize(QSize(25, 25));
        zero->setMaximumSize(QSize(20, 20));
        zero->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_11->addWidget(zero);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        q = new QPushButton(widget);
        q->setObjectName(QString::fromUtf8("q"));
        q->setMinimumSize(QSize(25, 25));
        q->setMaximumSize(QSize(20, 20));
        q->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(q);

        w = new QPushButton(widget);
        w->setObjectName(QString::fromUtf8("w"));
        w->setMinimumSize(QSize(25, 25));
        w->setMaximumSize(QSize(20, 20));
        w->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(w);

        e = new QPushButton(widget);
        e->setObjectName(QString::fromUtf8("e"));
        e->setMinimumSize(QSize(25, 25));
        e->setMaximumSize(QSize(20, 20));
        e->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(e);

        r = new QPushButton(widget);
        r->setObjectName(QString::fromUtf8("r"));
        r->setMinimumSize(QSize(25, 25));
        r->setMaximumSize(QSize(20, 20));
        r->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(r);

        t = new QPushButton(widget);
        t->setObjectName(QString::fromUtf8("t"));
        t->setMinimumSize(QSize(25, 25));
        t->setMaximumSize(QSize(20, 20));
        t->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(t);

        yB = new QPushButton(widget);
        yB->setObjectName(QString::fromUtf8("yB"));
        yB->setMinimumSize(QSize(25, 25));
        yB->setMaximumSize(QSize(20, 20));
        yB->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(yB);

        u = new QPushButton(widget);
        u->setObjectName(QString::fromUtf8("u"));
        u->setMinimumSize(QSize(25, 25));
        u->setMaximumSize(QSize(20, 20));
        u->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(u);

        i = new QPushButton(widget);
        i->setObjectName(QString::fromUtf8("i"));
        i->setMinimumSize(QSize(25, 25));
        i->setMaximumSize(QSize(20, 20));
        i->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(i);

        o = new QPushButton(widget);
        o->setObjectName(QString::fromUtf8("o"));
        o->setMinimumSize(QSize(25, 25));
        o->setMaximumSize(QSize(20, 20));
        o->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(o);

        p = new QPushButton(widget);
        p->setObjectName(QString::fromUtf8("p"));
        p->setMinimumSize(QSize(25, 25));
        p->setMaximumSize(QSize(20, 20));
        p->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(p);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_15 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        a = new QPushButton(widget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setMinimumSize(QSize(25, 25));
        a->setMaximumSize(QSize(23, 20));
        a->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(a);

        s = new QPushButton(widget);
        s->setObjectName(QString::fromUtf8("s"));
        s->setMinimumSize(QSize(25, 25));
        s->setMaximumSize(QSize(23, 20));
        s->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(s);

        d = new QPushButton(widget);
        d->setObjectName(QString::fromUtf8("d"));
        d->setMinimumSize(QSize(25, 25));
        d->setMaximumSize(QSize(23, 20));
        d->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(d);

        f = new QPushButton(widget);
        f->setObjectName(QString::fromUtf8("f"));
        f->setMinimumSize(QSize(25, 25));
        f->setMaximumSize(QSize(23, 20));
        f->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(f);

        g = new QPushButton(widget);
        g->setObjectName(QString::fromUtf8("g"));
        g->setMinimumSize(QSize(25, 25));
        g->setMaximumSize(QSize(23, 20));
        g->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(g);

        h = new QPushButton(widget);
        h->setObjectName(QString::fromUtf8("h"));
        h->setMinimumSize(QSize(25, 25));
        h->setMaximumSize(QSize(23, 20));
        h->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(h);

        j = new QPushButton(widget);
        j->setObjectName(QString::fromUtf8("j"));
        j->setMinimumSize(QSize(25, 25));
        j->setMaximumSize(QSize(23, 20));
        j->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(j);

        k = new QPushButton(widget);
        k->setObjectName(QString::fromUtf8("k"));
        k->setMinimumSize(QSize(25, 25));
        k->setMaximumSize(QSize(23, 20));
        k->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(k);

        l = new QPushButton(widget);
        l->setObjectName(QString::fromUtf8("l"));
        l->setMinimumSize(QSize(25, 25));
        l->setMaximumSize(QSize(23, 20));
        l->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(l);

        horizontalSpacer_16 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_17 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_17);

        minusButtton = new QPushButton(widget);
        minusButtton->setObjectName(QString::fromUtf8("minusButtton"));
        minusButtton->setMinimumSize(QSize(23, 25));
        minusButtton->setMaximumSize(QSize(23, 20));
        minusButtton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(minusButtton);

        z = new QPushButton(widget);
        z->setObjectName(QString::fromUtf8("z"));
        z->setMinimumSize(QSize(23, 25));
        z->setMaximumSize(QSize(23, 20));
        z->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(z);

        xB = new QPushButton(widget);
        xB->setObjectName(QString::fromUtf8("xB"));
        xB->setMinimumSize(QSize(23, 25));
        xB->setMaximumSize(QSize(23, 20));
        xB->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(xB);

        c = new QPushButton(widget);
        c->setObjectName(QString::fromUtf8("c"));
        c->setMinimumSize(QSize(23, 25));
        c->setMaximumSize(QSize(23, 20));
        c->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(c);

        v = new QPushButton(widget);
        v->setObjectName(QString::fromUtf8("v"));
        v->setMinimumSize(QSize(23, 25));
        v->setMaximumSize(QSize(23, 20));
        v->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(v);

        b = new QPushButton(widget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setMinimumSize(QSize(23, 25));
        b->setMaximumSize(QSize(23, 20));
        b->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(b);

        n = new QPushButton(widget);
        n->setObjectName(QString::fromUtf8("n"));
        n->setMinimumSize(QSize(23, 25));
        n->setMaximumSize(QSize(23, 20));
        n->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(n);

        m = new QPushButton(widget);
        m->setObjectName(QString::fromUtf8("m"));
        m->setMinimumSize(QSize(23, 25));
        m->setMaximumSize(QSize(23, 20));
        m->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(m);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(23, 25));
        backButton->setMaximumSize(QSize(23, 20));
        backButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(backButton);

        horizontalSpacer_18 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_18);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_19 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_19);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(42, 25));
        clearButton->setMaximumSize(QSize(42, 20));
        clearButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(clearButton);

        periodButton = new QPushButton(widget);
        periodButton->setObjectName(QString::fromUtf8("periodButton"));
        periodButton->setMinimumSize(QSize(25, 25));
        periodButton->setMaximumSize(QSize(25, 20));
        periodButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(periodButton);

        spaceButton = new QPushButton(widget);
        spaceButton->setObjectName(QString::fromUtf8("spaceButton"));
        spaceButton->setEnabled(true);
        spaceButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(spaceButton);

        commaButton = new QPushButton(widget);
        commaButton->setObjectName(QString::fromUtf8("commaButton"));
        commaButton->setMinimumSize(QSize(25, 25));
        commaButton->setMaximumSize(QSize(25, 20));
        commaButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(commaButton);

        nextLineButton = new QPushButton(widget);
        nextLineButton->setObjectName(QString::fromUtf8("nextLineButton"));
        nextLineButton->setMinimumSize(QSize(25, 25));
        nextLineButton->setMaximumSize(QSize(25, 20));
        nextLineButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(nextLineButton);

        horizontalSpacer_20 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_20);


        verticalLayout->addLayout(horizontalLayout_17);


        retranslateUi(SmallKeyboard);

        QMetaObject::connectSlotsByName(SmallKeyboard);
    } // setupUi

    void retranslateUi(QDialog *SmallKeyboard)
    {
        SmallKeyboard->setWindowTitle(QApplication::translate("SmallKeyboard", "SmallKeyboard", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("SmallKeyboard", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        two->setText(QApplication::translate("SmallKeyboard", "2", 0, QApplication::UnicodeUTF8));
        three->setText(QApplication::translate("SmallKeyboard", "3", 0, QApplication::UnicodeUTF8));
        one->setText(QApplication::translate("SmallKeyboard", "1", 0, QApplication::UnicodeUTF8));
        seven->setText(QApplication::translate("SmallKeyboard", "7", 0, QApplication::UnicodeUTF8));
        nine->setText(QApplication::translate("SmallKeyboard", "9", 0, QApplication::UnicodeUTF8));
        five->setText(QApplication::translate("SmallKeyboard", "5", 0, QApplication::UnicodeUTF8));
        six->setText(QApplication::translate("SmallKeyboard", "6", 0, QApplication::UnicodeUTF8));
        eight->setText(QApplication::translate("SmallKeyboard", "8", 0, QApplication::UnicodeUTF8));
        four->setText(QApplication::translate("SmallKeyboard", "4", 0, QApplication::UnicodeUTF8));
        zero->setText(QApplication::translate("SmallKeyboard", "0", 0, QApplication::UnicodeUTF8));
        q->setText(QApplication::translate("SmallKeyboard", "q", 0, QApplication::UnicodeUTF8));
        w->setText(QApplication::translate("SmallKeyboard", "w", 0, QApplication::UnicodeUTF8));
        e->setText(QApplication::translate("SmallKeyboard", "e", 0, QApplication::UnicodeUTF8));
        r->setText(QApplication::translate("SmallKeyboard", "r", 0, QApplication::UnicodeUTF8));
        t->setText(QApplication::translate("SmallKeyboard", "t", 0, QApplication::UnicodeUTF8));
        yB->setText(QApplication::translate("SmallKeyboard", "y", 0, QApplication::UnicodeUTF8));
        u->setText(QApplication::translate("SmallKeyboard", "u", 0, QApplication::UnicodeUTF8));
        i->setText(QApplication::translate("SmallKeyboard", "i", 0, QApplication::UnicodeUTF8));
        o->setText(QApplication::translate("SmallKeyboard", "o", 0, QApplication::UnicodeUTF8));
        p->setText(QApplication::translate("SmallKeyboard", "p", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("SmallKeyboard", "a", 0, QApplication::UnicodeUTF8));
        s->setText(QApplication::translate("SmallKeyboard", "s", 0, QApplication::UnicodeUTF8));
        d->setText(QApplication::translate("SmallKeyboard", "d", 0, QApplication::UnicodeUTF8));
        f->setText(QApplication::translate("SmallKeyboard", "f", 0, QApplication::UnicodeUTF8));
        g->setText(QApplication::translate("SmallKeyboard", "g", 0, QApplication::UnicodeUTF8));
        h->setText(QApplication::translate("SmallKeyboard", "h", 0, QApplication::UnicodeUTF8));
        j->setText(QApplication::translate("SmallKeyboard", "j", 0, QApplication::UnicodeUTF8));
        k->setText(QApplication::translate("SmallKeyboard", "k", 0, QApplication::UnicodeUTF8));
        l->setText(QApplication::translate("SmallKeyboard", "l", 0, QApplication::UnicodeUTF8));
        minusButtton->setText(QApplication::translate("SmallKeyboard", "-", 0, QApplication::UnicodeUTF8));
        z->setText(QApplication::translate("SmallKeyboard", "z", 0, QApplication::UnicodeUTF8));
        xB->setText(QApplication::translate("SmallKeyboard", "x", 0, QApplication::UnicodeUTF8));
        c->setText(QApplication::translate("SmallKeyboard", "c", 0, QApplication::UnicodeUTF8));
        v->setText(QApplication::translate("SmallKeyboard", "v", 0, QApplication::UnicodeUTF8));
        b->setText(QApplication::translate("SmallKeyboard", "b", 0, QApplication::UnicodeUTF8));
        n->setText(QApplication::translate("SmallKeyboard", "n", 0, QApplication::UnicodeUTF8));
        m->setText(QApplication::translate("SmallKeyboard", "m", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("SmallKeyboard", "<-", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("SmallKeyboard", "clear", 0, QApplication::UnicodeUTF8));
        periodButton->setText(QApplication::translate("SmallKeyboard", ".", 0, QApplication::UnicodeUTF8));
        spaceButton->setText(QApplication::translate("SmallKeyboard", "space", 0, QApplication::UnicodeUTF8));
        commaButton->setText(QApplication::translate("SmallKeyboard", ",", 0, QApplication::UnicodeUTF8));
        nextLineButton->setText(QApplication::translate("SmallKeyboard", "\\n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SmallKeyboard: public Ui_SmallKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLKEYBOARD_H
