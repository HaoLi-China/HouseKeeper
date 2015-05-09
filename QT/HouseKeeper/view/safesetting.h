#ifndef SAFESETTING_H
#define SAFESETTING_H

#include <QDialog>
#include "ui_safesetting.h"

class SafeSetting : public QDialog, public Ui::SafeSetting
{
    Q_OBJECT

public:
    explicit SafeSetting(QWidget *parent = 0,bool flag=false);
    ~SafeSetting();

public:
    void init();

signals:
    void signal_setSafeFlag(bool);

public slots:
    void slot_setSafeFlag();

private:
 QPixmap background;
};

#endif // ABOUT_H
