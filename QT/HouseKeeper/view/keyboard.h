#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include "ui_keyboard.h"

class Keyboard:public QWidget,public Ui::Keyboard
{
Q_OBJECT
public:
Keyboard( QWidget* parent = 0);
~Keyboard();
};
#endif
