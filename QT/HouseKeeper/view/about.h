#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include "ui_about.h"

class About : public QWidget, public Ui::About
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = 0);
    ~About();

public:
    void init();

public slots:
    void slot_showNextPage();
    void slot_showLastPage();

private:
 QPixmap background,nextPageIcon,lastPageIcon,aboutFunction,aboutInfo,aboutTeam;
};

#endif // ABOUT_H
