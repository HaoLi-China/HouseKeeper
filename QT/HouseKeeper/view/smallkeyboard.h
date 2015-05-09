#ifndef SMALLKEYBOARD_H
#define SMALLKEYBOARD_H

#include <QDialog>
#include "ui_smallkeyboard.h"

class SmallKeyboard : public QDialog,public Ui::SmallKeyboard
{
    Q_OBJECT

public:
    explicit SmallKeyboard(QWidget *parent = 0);
    ~SmallKeyboard();

public:
QString getContent();

//定义槽函数，分别对应消息界面的各个按钮
private slots:
void clickTextButton();
void clickSpace();
void clickBack();
void clickClear();
void clickNextLine();

private:
QString content;
};

#endif // SMALLKEYBOARD_H
