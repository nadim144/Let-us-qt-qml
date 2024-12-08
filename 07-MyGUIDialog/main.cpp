#include "MNADialog.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MNADialog w;
    w.show();
    return a.exec();
}
