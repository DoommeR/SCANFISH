#include <qt4/QtGui/QApplication>
#include <QWidget>
#include <QLabel>
#include <QHeaderView>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QTabWidget>
#include <QTabBar>
#include <QToolButton>

#include "headers/generalScreen.h"
#include "headers/MainWindow.h"
#include "headers/controller.h"
#include "headers/MainWindowTab.h"


//void MsgHandler(QtMsgType type,const char *msg)
void MsgHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    //do nothing
}

int main(int argc, char *argv[])
{
   qInstallMessageHandler(MsgHandler);
//qInstallMsgHandler(MsgHandler);
   QApplication app(argc,argv);

   MainWindow *MainWin=new MainWindow(NULL);
   MainWindowTab *MainWinTab=new MainWindowTab(NULL);

   QMainWindow mw(0);
   mw.setWindowTitle("ScanFISH");
   mw.setCentralWidget(MainWinTab);
   QMenuBar *mbar=mw.menuBar();
   QMenu *menu=new QMenu("Menu");
   menu->addAction("About",MainWin,SLOT(showCredits()));
   menu->addAction("Quit",&app,SLOT(quit()));
   mbar->addMenu(menu);
	

   mw.setGeometry(100,100,850,550);
   mw.show();

   return app.exec();
  // return 0;
}
