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
#include <QTableWidgetItem>
#include <QSpinBox>
#include <QSize>
#include <QGroupBox>
#include <QIntValidator>
#include <QTime>
#include <stdio.h>

#include "controller.h"
#include "msg.h"

class MessageEditor : public QGroupBox
{
    Q_OBJECT
    QGridLayout *MesEditLayout;

public:
    MessageEditor (QWidget *MesEd);
    void setSleep();
    void wakeUp();
    signals:
    void DLC_TextChanged (int k);
    void SendClicked();
	
    void SendSig(QString ID,QString DLC,QString DATA,QTime time);
    void changeNum();
	void buildCreateMesTab();
	void buildSendOptionsTab();
	
private slots:
    void CommitClicked();
    void EnableCommitButton();
    void ChangeDLC();
    void SendSigSl();

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

   QGridLayout *MainMesEditLayout;
   QWidget *createMesTabWidget;
   QWidget *sendOptionsTabWidget;

   QTabWidget *createMesTab;
   QTabWidget *sendOptionsTab;

   QGridLayout *sendOptionsLayout;
   QGridLayout *createMesLayout;

    int i,k,s,d,f;
    QLineEdit *bLineEdit_DATA[8];

    Msg *GuiMsgContainer;
    Controller *Contr;
};

#endif	/* MESEDIT_H */

