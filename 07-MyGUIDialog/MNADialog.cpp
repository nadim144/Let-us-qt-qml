#include "MNADialog.hpp"
#include "ui_MNADialog.h"

MNADialog::MNADialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MNADialog)
{
    ui->setupUi(this);
}

MNADialog::~MNADialog()
{
    delete ui;
}

