#include "mna_winodows.h"
#include "ui_mna_winodows.h"
#include <QMessageBox>

Mna_Winodows::Mna_Winodows(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Mna_Winodows)
{
    ui->setupUi(this);
}

Mna_Winodows::~Mna_Winodows()
{
    delete ui;
}

void Mna_Winodows::on_Bttn_OK_clicked()
{
    QString str = ui->Edit_Name->text();
    QMessageBox qObj;
    qObj.setWindowTitle("08-Simple Dialog");
    qObj.setText("Hello " + str);

    //Add "Yes" button into QMessageBox
    qObj.setStandardButtons(QMessageBox::Yes);

    //Add "No" button into QMessageBox
    qObj.addButton(QMessageBox::No);

    //Set Default button as "No"
    //qObj.setDefaultButton(QMessageBox::No);
    if(qObj.exec() == QMessageBox::Yes)
    {
        ui->Edit_Name->setText("Yes");
    }
    {
        ui->Edit_Name->setText("NO");
    }
}

