#include "mnawindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mnaWindow w;
    w.show();
    return a.exec();
}
