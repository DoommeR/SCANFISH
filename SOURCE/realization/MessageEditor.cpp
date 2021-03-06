#include "headers/MessageEditor.h"
#include "headers/Transmit.h"
#include "headers/generalScreen.h"

MessageEditor::MessageEditor (QWidget *MesEd)
{
   f=0;
   Contr=Controller::getController();;

   setTitle("    Message Editor");

   MainMesEditLayout=new QGridLayout;
   createMesTabWidget=new QWidget;
   sendOptionsTabWidget=new QWidget;

   createMesTab=new QTabWidget;
   sendOptionsTab=new QTabWidget;

   buildCreateMesTab();
   buildSendOptionsTab();

   createMesTabWidget->setLayout(createMesLayout);
   createMesTab->addTab(createMesTabWidget,  " Create Message ");
   sendOptionsTabWidget->setLayout(sendOptionsLayout);
   createMesTab->addTab(sendOptionsTabWidget,"  Send Options  ");
   MainMesEditLayout->addWidget(createMesTab);
   setLayout(MainMesEditLayout);

   QValidator *val = new QIntValidator(0,536870911,this);
   bLineEdit_ID->setValidator(val);

   QRegExp RegDATA("[0-9a-fA-F][0-9a-fA-F]");
   DATA_Validator = new QRegExpValidator(RegDATA,this);
   for(i=0;i<8;i++)
       bLineEdit_DATA[i]->setValidator(DATA_Validator);

   for (i=0;i<8;i++)
       bLineEdit_DATA[i]->cursorForward(false,0);

   k=DLC_SpinBox->value();

   connect (DLC_SpinBox, SIGNAL(valueChanged(const QString)),
           this,SLOT(ChangeDLC()));

   connect (bLineEdit_ID, SIGNAL(textChanged(const QString &)),
           this,SLOT(EnableCommitButton()));

   for (i=0;i<k;i++)
       connect (bLineEdit_DATA[i], SIGNAL(textChanged(const QString &)),
           this,SLOT(EnableCommitButton()));

   connect (CommitButton, SIGNAL(clicked()),this,SLOT(CommitClicked()));
   connect (SendButton, SIGNAL(clicked()),this,SLOT(SendSigSl()));
   connect (tButtonFake,SIGNAL(clicked()),this,SLOT(FakeClicked()));
		   
}


void MessageEditor::buildCreateMesTab()
{
   createMesLayout = new QGridLayout;

   tLabel_ID=new QLabel("ID:");
   tLabel_fID=new QLabel("");
   tLabel_DLC=new QLabel("DLC:");
   tLabel_fDLC=new QLabel("");
   tLabel_DATA=new QLabel("DATA:");

   for (i=0;i<8;i++)
       tLabel_fDATA[i]=new QLabel("");

   SendButton=new QPushButton ("Send");
   SendButton->setFixedSize(95,27);

   bLabel_ID=new QLabel("ID:",this);
   bLineEdit_ID=new QLineEdit;
   bLabel_DLC=new QLabel("DLC:");
   bLabel_DATA=new QLabel("DATA:");

   for (i=0;i<8;i++)
       bLineEdit_DATA[i]=new QLineEdit("");

   CommitButton=new QPushButton ("Commit");
   CommitButton->setFixedSize(95,27);

   CommitButton->setEnabled(false);
   SendButton->setEnabled(false);

   DLC_SpinBox = new QSpinBox;
   DLC_SpinBox->setFixedSize(40,27);
   DLC_SpinBox->setMinimum(1);
   DLC_SpinBox->setMaximum(8);
   DLC_SpinBox->setValue(8);

   createMesLayout->addWidget(tLabel_ID,1,0,Qt::AlignLeft);
   createMesLayout->addWidget(tLabel_fID,1,1,Qt::AlignLeft);
   createMesLayout->addWidget(tLabel_DLC,1,2,Qt::AlignLeft);
   createMesLayout->addWidget(tLabel_fDLC,1,3,Qt::AlignLeft);
   createMesLayout->addWidget(tLabel_DATA,1,4,Qt::AlignLeft);

   fDATA_Widget = new QWidget;
   for (i=0;i<8;i++)
       tLabel_fDATA[i]->setFixedSize(30,27);
   for (i=0;i<8;i++)
   {
       tLabel_fDATA[i]->setParent(fDATA_Widget);
       tLabel_fDATA[i]->move(i*50,0);
   }
   fDATA_Widget->setFixedSize(400,28);
   createMesLayout->addWidget(fDATA_Widget,1,5,1,8,Qt::AlignLeft);
   createMesLayout->addWidget(SendButton,1,13,Qt::AlignLeft);

   createMesLayout->addWidget(bLabel_ID,2,0,Qt::AlignLeft);
   bLineEdit_ID->setFixedSize(80,27);
   createMesLayout->addWidget(bLineEdit_ID,2,1,Qt::AlignLeft);
   createMesLayout->addWidget(bLabel_DLC,2,2,Qt::AlignLeft);
   createMesLayout->addWidget(DLC_SpinBox,2,3,Qt::AlignLeft);
   createMesLayout->addWidget(bLabel_DATA,2,4,Qt::AlignLeft);

   DATA_Widget = new QWidget;
   for (i=0;i<8;i++)
       bLineEdit_DATA[i]->setFixedSize(30,27);
   for (i=0;i<8;i++)
   {
       bLineEdit_DATA[i]->setParent(DATA_Widget);
       bLineEdit_DATA[i]->move(i*50,0);
   }
   DATA_Widget->setFixedSize(400,28);
   createMesLayout->addWidget(DATA_Widget,2,5,1,8,Qt::AlignLeft);
   createMesLayout->addWidget(CommitButton,2,13,Qt::AlignLeft);

   for (i=0;i<13;i++)
       createMesLayout->setColumnStretch(i,100);

   createMesLayout->setSpacing(13);
}


void MessageEditor::buildSendOptionsTab()
{
   sendOptionsLayout = new QGridLayout;
	tLabel_Timer=new QLabel("Interval:");
	tLineEdit_Timer=new QLineEdit("0");
	tLabel_Num=new QLabel("Count:");
	tLineEdit_Pack =new QLineEdit("1");
	tButtonFake=new QPushButton("Ok");
	fLabel_Timer=new QLabel("0");
	fLabel_Num=new QLabel("1");
	
	sendOptionsLayout->addWidget(tLabel_Timer,1,0,Qt::AlignLeft);
	 tLineEdit_Timer->setFixedSize(40,27);
	sendOptionsLayout->addWidget(tLineEdit_Timer,1,1,Qt::AlignLeft);
   	 tLineEdit_Pack->setFixedSize(40,27);
	sendOptionsLayout-> addWidget(fLabel_Timer,1,2,Qt::AlignLeft);
	sendOptionsLayout->addWidget(tLabel_Num,2,0,Qt::AlignLeft);
  
	sendOptionsLayout->addWidget(tLineEdit_Pack,2,1,Qt::AlignLeft);
	sendOptionsLayout-> addWidget(fLabel_Num,2,2,Qt::AlignLeft);
	sendOptionsLayout -> addWidget(tButtonFake,2,3,Qt::AlignRight);
	
	//createMesLayout->setColumnStretch(0,100);
	//createMesLayout->setColumnStretch(1,100);
	//createMesLayout->setColumnStretch(2,100);
	//createMesLayout->setColumnStretch(3,100);
	//createMesLayout->setSpacing(3);
}

void MessageEditor::FakeClicked()
{
	QString text = tLineEdit_Timer->text();
    text=text.toUpper();
    fLabel_Timer->setText(text);
	
	text=tLineEdit_Pack->text();
	text=text.toUpper();
	fLabel_Num->setText(text);
}

void MessageEditor::CommitClicked()
{
    f=1;
    SendButton->setEnabled(true);

    QString text = bLineEdit_ID->text();
    text=text.toUpper();
    tLabel_fID->setText(text);

    int value = DLC_SpinBox->value();
    text=QVariant(value).toString();
    text=text.toUpper();
    tLabel_fDLC->setText(text);

    int size;

    for (i=0;i<8;i++)
    {
        text = bLineEdit_DATA[i]->text();
        text=text.toUpper();
        size = bLineEdit_DATA[i]->text().size();
        if (size==1)
            tLabel_fDATA[i]->setText("0"+text);
        else
            tLabel_fDATA[i]->setText(text);
    }
    text = "";
    bLineEdit_ID->setText(text);
    for (i=0;i<8;i++)
       bLineEdit_DATA[i]->setText(text);
}

void MessageEditor :: EnableCommitButton()
{
    bool LE_ID = bLineEdit_ID->text().isEmpty();
    bool LE_DATA0 = bLineEdit_DATA[0]->text().isEmpty();
    bool LE_DATA1 = bLineEdit_DATA[1]->text().isEmpty();
    bool LE_DATA2 = bLineEdit_DATA[2]->text().isEmpty();
    bool LE_DATA3 = bLineEdit_DATA[3]->text().isEmpty();
    bool LE_DATA4 = bLineEdit_DATA[4]->text().isEmpty();
    bool LE_DATA5 = bLineEdit_DATA[5]->text().isEmpty();
    bool LE_DATA6 = bLineEdit_DATA[6]->text().isEmpty();
    bool LE_DATA7 = bLineEdit_DATA[7]->text().isEmpty();

    if (LE_ID||LE_DATA0||LE_DATA1||LE_DATA2||LE_DATA3||LE_DATA4
            ||LE_DATA5||LE_DATA6||LE_DATA7)
        CommitButton->setEnabled(false);
    else
        CommitButton->setEnabled(true);

    s=0;
    for (d=0;d<k;d++)
        if (!(bLineEdit_DATA[d]->text().isEmpty()))
            s++;

    if (!(bLineEdit_ID->text().isEmpty()))
        s++;
    if (s==k+1)
        CommitButton->setEnabled(true);
}

void MessageEditor::ChangeDLC()
{
    k=DLC_SpinBox->value();

    for (i=0;i<8;i++)
   {
       if (i<k)
       {
           bLineEdit_DATA[i]->setText("");
           bLineEdit_DATA[i]->show();
           tLabel_fDATA[i]->show();

       }
       else
       {
           bLineEdit_DATA[i]->setText("");
           bLineEdit_DATA[i]->hide();
       }
   };
    emit DLC_TextChanged(k);
}

void MessageEditor :: SendSigSl()
{
    emit changeNum();
    bool ok;
    QString data;
    int i;
    unsigned long gsId;
    unsigned int gsDlc;
    unsigned char gsData[8];
	int num_pack;
	float num_time;
	
	num_pack = tLineEdit_Pack -> text().toUInt(&ok,10);
	num_time = tLineEdit_Timer -> text().toFloat(&ok);
	
		gsId=tLabel_fID->text().toUInt(&ok,10);
		gsDlc=tLabel_fDLC->text().toUInt(&ok,10);
		GeneralScreen::getGS()->GSMesEdit->gsStart();

		for(i=0;i<tLabel_fDLC->text().toUInt(&ok,10);i++)
		{
		   data=data+" "+tLabel_fDATA[i]->text();
		   gsData[i]=tLabel_fDATA[i]->text().toUShort(&ok,16);
		}
		
		for (i=0; i<num_pack; i++)
		{
		QTime time;
		float control_time;
		
		//struct timeval timestamp;
		time=(QDateTime::fromTime_t(GeneralScreen::getGS()->GSMesEdit->getTimestampSec()).time());
		time=time.addMSecs(GeneralScreen::getGS()->GSMesEdit->getTimestampMS()/1000);
		
			if (GeneralScreen::getGS()->GSMesEdit->gsSend(gsId,gsDlc,gsData)==0)
			{	
				
					
					//sleep(num_time);
					emit SendSig(tLabel_fID->text(),tLabel_fDLC->text(),data,time);
			}
		control_time=num_time*1000;
		
		 QTest::qWait(control_time);
		}
	
}


void MessageEditor::setSleep()
{
    CommitButton->setEnabled(false);
    SendButton->setEnabled(false);
}

void MessageEditor::wakeUp()
{
    if (f!=0)
        SendButton->setEnabled(true);
}
