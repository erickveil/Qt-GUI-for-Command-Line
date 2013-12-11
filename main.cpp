#include "ncatwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NcatWindow w;
    w.show();

    return a.exec();
}
