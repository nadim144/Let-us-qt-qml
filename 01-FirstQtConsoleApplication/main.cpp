/*#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char myoutput [60];
    int stringlength;
    int x=4;
    int y=10;
    stringlength = sprintf(myoutput, "%d plus %d equals %d", x, y, x+y);
    printf ("[%s] is a string that is %d characters long.\n", myoutput, stringlength);
    return a.exec();
}*/

#include <iostream>
#include <QString>
using namespace std;

int main()
{
    QString name = "Qt Console App";
    cout << "Hello, " << name.toStdString() << "!" << endl;
    return 0;
}

