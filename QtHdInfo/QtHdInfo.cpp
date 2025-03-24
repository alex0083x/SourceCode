#include "QtHdInfo.h"

QtHdInfo::QtHdInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtHdInfoClass())
{
    ui->setupUi(this);
}

QtHdInfo::~QtHdInfo()
{
    delete ui;
}

QString QtHdInfo::getNetInfo()
{ 
    QString networkInfo;
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
    for (const QNetworkInterface& interface : interfaces) {
        networkInfo += "Interface: " + interface.humanReadableName() + "\n";
        networkInfo += "MAC: " + interface.hardwareAddress() + "\n";
        for (const QNetworkAddressEntry& entry : interface.addressEntries()) {
            if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                networkInfo += "IP: " + entry.ip().toString() + "\n";
            }
        }
    }
    return networkInfo;
}