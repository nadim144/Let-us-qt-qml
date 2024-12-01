#include <QCoreApplication>
#include <QString>
#include <QDebug>

#include <QDate>
#include <QChar>
#include <QRect>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString qstr = "Hello Nadim, How are you?!";
    qDebug()<<"Yes, " + qstr;
    qDebug()<<"I heard about you. all good?";
    qDebug("I believe, You belong to Distict Supaul, BIHAR");

    qDebug() << "Date:" << QDate::currentDate();
    qDebug() << "Types:" << QString("String") << QChar('x') << QRect(0, 10, 50, 40);
    return a.exec();
}
