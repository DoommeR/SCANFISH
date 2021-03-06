#ifndef CONNECTION_H
#define	CONNECTION_H

#include <qt4/QtGui/QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLayout>
#include <QHeaderView>
#include <QScrollArea>
#include <QGridLayout>
#include <QTableWidget>
#include <QHeaderView>
#include <QPaintEvent>
#include <QPainter>

#include "canlistener.h"
#include "generalScreen.h"


class Connection : public QWidget
{
    Q_OBJECT
    QHBoxLayout *ConnectionLayout;
public:
    Connection(QWidget *Con, CanListener *mcanl);
    QString tabName;

    signals:
    void active();
    void disactive();
    void changeNum();

private slots:
    void ConnectClicked();
    void DisconnectClicked();
    void EnableConnectButton();

private:
    QLabel *Interface;
    QLineEdit *can0;
    QPushButton *ConnectButton;
    QPushButton *DisconnectButton;
    QLabel *St;
    QLabel *OnOff;
    QSpacerItem *horizontalSpacer;
    CanListener *canl;
    QByteArray strInt;
    int push;
    GeneralScreen *GS;
};

#endif	/* CONNECTION_H */

