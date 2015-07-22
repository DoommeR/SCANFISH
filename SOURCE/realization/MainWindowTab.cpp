#include "headers/MainWindowTab.h"

MainWindowTab :: MainWindowTab(QTabWidget *tab1) : QTabWidget(tab1)
{
    numTab=0;

    tab=new QTabWidget;
    addBut = new QPushButton("Add connection");
    MainWin=new MainWindow(NULL);
   // timewin=new TimeWindow(NULL);
    tab->addTab(MainWin,"new net");
    //tab->setTabsClosable(true);

    addBut->setIcon(QIcon("./newic.png"));

    tab->setCornerWidget(addBut,Qt::TopRightCorner);
    QHBoxLayout *lout = new QHBoxLayout;
    lout->addWidget(tab);

    QObject::connect(addBut,SIGNAL(clicked()),this,SLOT(addNewTab()));
    setLayout(lout);

    QObject::connect(MainWin->Con,SIGNAL(active()),this,
            SLOT(changeTabText()));

}

void MainWindowTab::addNewTab()
{
    MainWin=new MainWindow(NULL);
    tab->addTab(MainWin,"вкладочка_1");
    QObject::connect(MainWin->Con,SIGNAL(active()),this,
            SLOT(changeTabText()));

    timewin = new TimeWindow(NULL);
    tab->addTab(timewin,"вкладочка_2");
    QObject::connect(timewin->Con,SIGNAL(active()),this,
            SLOT(changeTabText()));
}

void MainWindowTab::changeTabText()
{

    QString text=MainWin->Con->tabName;
    tab->setTabText(numTab,"   "+text+"   ");
    numTab++;
}
