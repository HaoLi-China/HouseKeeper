#include "about.h"

//构造函数
About::About(QWidget *parent) :QWidget(parent)
{
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
About::~About()
{

}

//初始化
void About::init(){
   setupUi(this);

   background.load("images/bg.png");
   nextPageIcon.load("images/nextpage.png");
   lastPageIcon.load("images/lastpage.png");
   aboutFunction.load("images/aboutFunction.png");
   aboutInfo.load("images/aboutInfo.png");
   aboutTeam.load("images/aboutTeam.png");



   nextPageButton->setIcon(QIcon(nextPageIcon));
   lastPageButton->setIcon(QIcon(lastPageIcon));

   nextPageButton->setIconSize(QSize(30,30));
   lastPageButton->setIconSize(QSize(30,30));

   QPalette palette1;
   palette1.setBrush(this->backgroundRole(), QBrush(background));
   this->setPalette(palette1);

   QPalette palette2;
   palette2.setBrush(funcwidget->backgroundRole(), QBrush(aboutFunction));
   funcwidget->setPalette(palette2);

   QPalette palette3;
   palette3.setBrush(infowidget->backgroundRole(), QBrush(aboutInfo));
   infowidget->setPalette(palette3);

   QPalette palette4;
   palette4.setBrush(teamwidget->backgroundRole(), QBrush(aboutTeam));
   teamwidget->setPalette(palette4);

   infowidget->hide();
   lastPageButton->setDisabled(true);

   connect(nextPageButton, SIGNAL(clicked()), this, SLOT(slot_showNextPage()));
   connect(lastPageButton, SIGNAL(clicked()), this, SLOT(slot_showLastPage()));
   this->show();
}

//下一页
void About::slot_showNextPage(){
    funcwidget->hide();
    teamwidget->hide();
    infowidget->show();
    nextPageButton->setDisabled(true);
    lastPageButton->setEnabled(true);
}

//上一页
void About::slot_showLastPage(){
    funcwidget->show();
    teamwidget->show();
    infowidget->hide();
    nextPageButton->setEnabled(true);
    lastPageButton->setDisabled(true);
}
