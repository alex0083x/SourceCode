#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtHdInfo.h"
#include "HardInfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtHdInfoClass; };
QT_END_NAMESPACE

class QtHdInfo : public QMainWindow
{
    Q_OBJECT

public:
    QtHdInfo(QWidget *parent = nullptr);
    ~QtHdInfo();
       
private:
    Ui::QtHdInfoClass *ui;
    HardInfo *myGetHardInfo;
};
