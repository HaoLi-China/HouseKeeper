#ifndef DIGITALKEYBOARD_H
#define DIGITALKEYBOARD_H

#include <QWidget>
#include "ui_digitalKeyboard.h"

class DigitalKeyboard:public QWidget,public Ui::DigitalKeyboard
{
Q_OBJECT
public:
DigitalKeyboard(QWidget* parent = 0);
~DigitalKeyboard();
};
#endif
