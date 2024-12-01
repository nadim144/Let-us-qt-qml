#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 2). signal slot using programiticaly using comnnect method
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), ui->progressBar_2, SLOT(setValue(int)));

    // 3). One signal and two slot using programiticaly using comnnect method
    connect(ui->HSLIDER_3, SIGNAL(valueChanged(int)), ui->PBAR_3, SLOT(setValue(int)));
    connect(ui->HSLIDER_3, SIGNAL(valueChanged(int)), ui->PBAR_4, SLOT(setValue(int)));

    //4). signal and slot - disconnect first progressbar and connect 2nd progressbar
    disconnect(ui->Hori_Slider, SIGNAL(valueChanged(int)), ui->Progrss_Bar_1, SLOT(setValue(int)));
    connect(ui->Hori_Slider, SIGNAL(valueChanged(int)), ui->Progrss_Bar_2, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
