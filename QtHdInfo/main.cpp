#include "QtHdInfo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QString showGetInfo;
    QApplication a(argc, argv);
    QtHdInfo w; 
    w.show();
    return a.exec();

  }
