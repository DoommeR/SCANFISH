#ifndef TIMEWINDOW_H
#define	TIMEWINDOW_H

#include <qt4/QtGui/QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDateTime>
#include <QTime>
#include <QMainWindow>
#include <QToolButton>
#include <QPushButton>

#include "MessageEditor.h"
#include "Transmit.h"
#include "Receive.h"
#include "Connection.h"

#include "controller.h"
#include "msg.h"


class TimeWindow : public QWidget, public CanListener
{
    Q_OBJECT
    QVBoxLayout *MainLayout;

public:
    TimeWindow (QWidget *TimeWindow);

    int notify();
    int errorInNet(const char *str);
    void setContrNum();
    int num;
    Connection *Con;

    signals:
    void ReceiveSignal(int ID,int DLC,QString DATA,QTime time);

public slots:
    int connect();
    int disconnect();
    void showCredits();
    void setCurrentNum();


private:
    MessageEditor *MessEd; 
   Transmit *Trans; 
    Receive *Rec;
    GeneralScreen *gs;
};

#endif
