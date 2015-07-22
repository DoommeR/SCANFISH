#ifndef MAINWINDOWTAB_H
#define	MAINWINDOWTAB_H

#include <qt4/QtGui/QApplication>
#include <QWidget>
#include <QPushButton>

#include "controller.h"
#include "MainWindow.h"
#include "TimeWin.h"


class MainWindowTab:public QTabWidget
{
    Q_OBJECT
public:
    MainWindowTab(QTabWidget *TabWid);
    QPushButton *addBut;
    QTabWidget *tab;
    MainWindow *MainWin;
	TimeWindow *timewin;

public slots:
    void addNewTab();
    void changeTabText();

private:
    int numTab;
    //Connection *Con;

};

#endif	/* MAINWINDOWTAB_H */

