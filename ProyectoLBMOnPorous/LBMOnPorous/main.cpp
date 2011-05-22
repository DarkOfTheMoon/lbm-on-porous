#include <QtGui/QApplication>
#include "simulbm.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimuLBM w;
    w.show();

    return a.exec();
}
