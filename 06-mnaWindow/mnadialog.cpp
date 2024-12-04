#include "mnadialog.h"
#include "ui_mnadialog.h"

mnaDialog::mnaDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mnaDialog)
{
    ui->setupUi(this);
}

mnaDialog::~mnaDialog()
{
    delete ui;
}
