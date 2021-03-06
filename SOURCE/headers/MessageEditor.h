#ifndef MESEDIT_H
#define	MESEDIT_H

#include <qt4/QtGui/QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QString>
#include <QValidator>
#include <QRegExpValidator>
#include <QRegExp>
#include <QVariant>
#include <QTabWidget>
#include <QTableWidgetItem>
#include <QSpinBox>
#include <QSize>
#include <QGroupBox>
#include <QIntValidator>
#include <QTime>
#include <QtTest/QTest>
#include <stdio.h>
#include <unistd.h>

#include "controller.h"
#include "msg.h"

class MessageEditor : public QGroupBox
{
    Q_OBJECT

    QGridLayout *createMesLayout;
    QGridLayout *sendOptionsLayout;
    QGridLayout *MainMesEditLayout;

    QWidget *createMesTabWidget;
    QWidget *sendOptionsTabWidget;

    void buildCreateMesTab();
    void buildSendOptionsTab();

public:
    MessageEditor (QWidget *MesEd);
    void setSleep();
    void wakeUp();
    signals:
    void DLC_TextChanged (int k);
    void SendClicked();
    void SendSig(QString ID,QString DLC,QString DATA,QTime time);
    void changeNum();


private slots:
    void CommitClicked();
    void EnableCommitButton();
    void ChangeDLC();
    void SendSigSl();
    void FakeClicked();

private:

    QLabel *tLabel_ID;
    QLabel *tLabel_fID;
    QLabel *tLabel_DLC;
    QLabel *tLabel_fDLC;
    QLabel *tLabel_DATA;
    QLabel *tLabel_fDATA[8];
    QPushButton *SendButton;

    QLabel *bLabel_ID;
    QLineEdit *bLineEdit_ID;
    QLabel *bLabel_DLC;
    QLabel *bLabel_DATA;
    QLineEdit *bLineEdit_DATA1;
    QPushButton *CommitButton;
    QSpinBox *DLC_SpinBox;

    QRegExp *RegDLC;
    QRegExp *RegID;
    QRegExp *RegDATA;
    QRegExpValidator *ID_Validator;
    QRegExpValidator *DLC_Validator;
    QRegExpValidator *DATA_Validator;

    QWidget *DATA_Widget;
    QWidget *fDATA_Widget;
    QTabWidget *createMesTab;
    QTabWidget *sendOptionsTab;
//------------------
	QLabel *tLabel_Timer;
	QLabel *tLabel_Num;
	QLabel *fLabel_Timer;
	QLabel *fLabel_Num;
	QLineEdit *tLineEdit_Timer;
	QLineEdit *tLineEdit_Pack;
	QPushButton *tButtonFake;
//------------------
    int i,k,s,d,f;
    QLineEdit *bLineEdit_DATA[8];

    Msg *GuiMsgContainer;
    Controller *Contr;
};

#endif	/* MESEDIT_H */


