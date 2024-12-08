#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello Nadim Hello Nadim Hello Nadim");
    label->show();
    return app.exec();
}
