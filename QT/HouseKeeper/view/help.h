#ifndef HELP_H
#define HELP_H

#include <QWidget>
#include "ui_help.h"

class Help : public QWidget, public Ui::Help
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = 0);
    ~Help();

public:
    void init();

private:
 QPixmap background,helpPic;
};

#endif // HELP_H
