#include "displaysysinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DisplaySysInfo w;
    w.show();

    return a.exec();
}
