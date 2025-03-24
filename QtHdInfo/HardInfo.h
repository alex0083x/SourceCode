#pragma once

#include <QObject>

class HardInfo  : public QObject
{
	Q_OBJECT

public:
	HardInfo(QObject *parent);
	~HardInfo();
};
