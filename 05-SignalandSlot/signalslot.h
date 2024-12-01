#ifndef SIGNALSLOT_H
#define SIGNALSLOT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SignalSlot;
}
QT_END_NAMESPACE

class SignalSlot : public QMainWindow
{
    Q_OBJECT

public:
    SignalSlot(QWidget *parent = nullptr);
    ~SignalSlot();

private slots:
    void on_pushButton_enable_signalslot_clicked();

    void on_pushButton_disable_signalslot_clicked();

private:
    Ui::SignalSlot *ui;
};
#endif // SIGNALSLOT_H
