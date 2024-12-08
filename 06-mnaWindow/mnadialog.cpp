#include "mnadialog.h"
#include "ui_mnadialog.h"

mnaDialog::mnaDialog(bool bModalDialogFlag, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mnaDialog)
{
    ui->setupUi(this);
    if(true == bModalDialogFlag) // Modal Dialog
    {
        ui->commandLinkButton->setText("Modal Dialog");
    }
    else // ModalLess Dialog
    {
        ui->commandLinkButton->setText("Modalless Dialog");
    }
}

mnaDialog::~mnaDialog()
{
    delete ui;
}
