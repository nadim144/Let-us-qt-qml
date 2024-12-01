#include "signalslot.h"
#include "ui_signalslot.h"

SignalSlot::SignalSlot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignalSlot)
{
    ui->setupUi(this);
    ui->pushButton_enable_signalslot->setText("Enable Signal Slot");
    ui->pushButton_disable_signalslot->setText("Disable Signal Slot");

}

SignalSlot::~SignalSlot()
{
    delete ui;
}

void SignalSlot::on_pushButton_enable_signalslot_clicked()
{
    connect(ui->horizontalSlider_signalslot, SIGNAL(valueChanged(int)), ui->progressBar_signalslot, SLOT(setValue(int)));
}


void SignalSlot::on_pushButton_disable_signalslot_clicked()
{
    disconnect(ui->horizontalSlider_signalslot, SIGNAL(valueChanged(int)), ui->progressBar_signalslot, SLOT(setValue(int)));
}

