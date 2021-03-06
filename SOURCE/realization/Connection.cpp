#include "headers/Connection.h"
#include "headers/controller.h"

Connection::Connection(QWidget *Con,CanListener *mcanl) : QWidget (Con)
{
   GS=new GeneralScreen();
   canl=mcanl;
   can0 = new QLineEdit;
   can0->setPlaceholderText("Interface");
   can0->setFocusPolicy(Qt::ClickFocus);
   can0->setFixedWidth(80);
   ConnectButton = new QPushButton("Connect");
   DisconnectButton = new QPushButton("Disconnect");
   ConnectButton->setFixedSize(95,27);
   DisconnectButton->setFixedSize(95,27);
   St = new QLabel("Status:");
   OnOff = new QLabel("OFF");

   horizontalSpacer = new QSpacerItem(10,0, QSizePolicy::Expanding,
                    QSizePolicy::Minimum);

   ConnectionLayout = new QHBoxLayout;
   ConnectionLayout->insertSpacing(0,10);
   ConnectionLayout->addWidget(can0);
   ConnectionLayout->addWidget(ConnectButton);
   ConnectionLayout->addWidget(DisconnectButton);
   ConnectionLayout->addWidget(St);
   ConnectionLayout->addWidget(OnOff);
   ConnectionLayout->addSpacerItem(horizontalSpacer);

   ConnectionLayout->setSpacing(45);

   DisconnectButton->setEnabled(false);
   ConnectButton->setEnabled(false);

   setLayout(ConnectionLayout);

   connect (ConnectButton,SIGNAL(clicked()),this,SLOT(ConnectClicked()));
   connect (DisconnectButton,SIGNAL(clicked()),this,SLOT(DisconnectClicked()));
   connect (can0,SIGNAL(textChanged(const QString &)),this,
           SLOT(EnableConnectButton()));
}

void Connection :: ConnectClicked()
{
    tabName=can0->text();
    strInt.clear();
    strInt.append(can0->text().toLatin1());//Внимание. Костыль, изначально было toAscii()
    //strInt.append(can0->text().toAscii());
    if (GS->GSCon->gsConnection(strInt.data(),canl)==0)
    {
        ConnectButton->setEnabled(false);
        DisconnectButton->setEnabled(true);
        can0->setEnabled(false);
        OnOff->setText("ON");
        emit active();
    } 
}

void Connection :: DisconnectClicked()
{
    emit changeNum();
    DisconnectButton->setEnabled(false);
    ConnectButton->setEnabled(true);
    can0->setEnabled(true);
    OnOff->setText("OFF");

    GS->GSCon->gsDisconnection();
    emit disactive();
}

void Connection :: EnableConnectButton()
{
    if (can0->text().isEmpty())
        ConnectButton->setEnabled(false);
    else
        ConnectButton->setEnabled(true);
}
