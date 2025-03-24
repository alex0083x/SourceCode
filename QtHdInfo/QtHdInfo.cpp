#include "QtHdInfo.h"

QtHdInfo::QtHdInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtHdInfoClass()),myGetHardInfo(new HardInfo(this))
{
    ui->setupUi(this);
}

QtHdInfo::~QtHdInfo()
{
    delete ui;
}

