#include "mna_winodows.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mna_Winodows w;
    w.show();
    return a.exec();
}
