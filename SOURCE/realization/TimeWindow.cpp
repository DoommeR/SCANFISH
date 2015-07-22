#include "headers/TimeWindow.h"
#include "headers/controller.h"
#include <stdio.h>
#include <string.h>
#include <QTime>


TimeWindow :: TimeWindow (QWidget *TimeWindow) : QWidget (TimeWindow),CanListener()
{
    MainLayout = new QVBoxLayout;

    MessEd = new MessageEditor(NULL);
    Trans = new Transmit(NULL);
    Rec = new Receive(NULL);
    Con = new Connection(NULL,this);

    MainLayout->addWidget(Con);
    MainLayout->addWidget(Rec);
    MainLayout->addWidget(Trans);
    MainLayout->addWidget(MessEd);
    MessEd->setSleep();
    Trans->setFocusPolicy(Qt::NoFocus);
    Rec->setFocusPolicy(Qt::NoFocus);

    QObject::connect (MessEd,SIGNAL(SendSig(QString, QString, QString,QTime)),
            Trans,SLOT(SendSlot(QString, QString, QString,QTime)));

    QObject::connect (this,SIGNAL(ReceiveSignal(int,int,QString,QTime)),Rec,
            SLOT(ReceiveSlot(int,int,QString,QTime)));

    QObject::connect(Con,SIGNAL(active()),this,SLOT(connect()));
    QObject::connect(Con,SIGNAL(disactive()),this,SLOT(disconnect()));

    QObject::connect(MessEd,SIGNAL(changeNum()),this,SLOT(setCurrentNum()));
    QObject::connect(Con,SIGNAL(changeNum()),this,SLOT(setCurrentNum()));

    setLayout(MainLayout);
}

int TimeWindow :: connect()
{
     MessEd->wakeUp();
     num=GeneralScreen::getGS()->GSCon->currentNet();
     return 0;
}

int TimeWindow :: disconnect()
{
     MessEd->setSleep();
     return 0;
}

int TimeWindow :: notify()
{    
    unsigned int i;
    QString text;
    char data_element[17];
    gs = GeneralScreen::getGS();
    gs->GSRec->setMsg();
    for (i=0;i<gs->GSRec->getMsgDlc();i++)
    {
        sprintf(data_element,"%02X",gs->GSRec->getMsgData(i));
        text=text+" "+QString::fromLatin1(data_element,strlen(data_element)); //formAscii заменен на fromLatin1
    }
    QTime time;
    time=((QDateTime::fromTime_t(gs->GSRec->getMsgTimestampSec())).time());
    time=time.addMSecs(gs->GSRec->getMsgTimestampMS()/1000);
    gs->GSRec->haveReceived();
    emit ReceiveSignal(gs->GSRec->getMsgId(), gs->GSRec->getMsgDlc(),text,time);
    gs->GSRec->setMsgFree();
    return 0;
}

int TimeWindow :: errorInNet(const char* str)
{
     QMessageBox msgBox;
     QString string(str);
     QString info("Warning");

     msgBox.setText(string);
     msgBox.setIcon(QMessageBox::Warning);

     msgBox.setWindowTitle(info);
     msgBox.exec();
}


void TimeWindow::showCredits()
{
    QLabel *lbl=new QLabel(0);
    QString string;
    string= "\n   release: scanfish 0.1   \n"
            "   license: GPLv3   \n"
            "   source: https://github.com/fulcrum7/SCANFISH   \n"
            "   contacts: scanfishproject@gmail.com\n"
            "   We are waiting for your comments and suggestions   \n"
            "   Let's make CAN development free\n";
    lbl->setFixedWidth(500);
    lbl->setText(string);
    lbl->setWindowTitle("scanfish info");
    lbl->show();
}

void TimeWindow::setCurrentNum()
{
    GeneralScreen::getGS()->GSCon->setCurrentNum();
}
