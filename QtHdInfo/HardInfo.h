#pragma once
#include <QObject>
#include <QNetworkInterface>

class HardInfo  : public QObject
{
	Q_OBJECT

public:
	HardInfo(QObject *parent);
	~HardInfo();
	QString getNetInfo();
};
