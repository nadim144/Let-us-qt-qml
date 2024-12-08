#include "mnawindow.h"
#include "ui_mnawindow.h"
#include "mnadialog.h"

mnaWindow::mnaWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mnaWindow)
    , modallessDlg(nullptr)
{
    ui->setupUi(this);
    setCentralWidget(ui->PLAIN_TXT_EDIT);
}

mnaWindow::~mnaWindow()
{
    delete ui;
    delete modallessDlg;
}

void mnaWindow::setModalDialogFlag(bool flag)
{
    bModalDialogFlag = flag;
}

bool mnaWindow::getModalDialogFlag()
{
    return bModalDialogFlag;
}

void mnaWindow::on_actionModel_Dialog_triggered()
{
    setModalDialogFlag(true);
    mnaDialog mnaDlg(getModalDialogFlag());
    mnaDlg.setModal(true);
    mnaDlg.exec();
}


void mnaWindow::on_actionModalless_Dialog_triggered()
{
    setModalDialogFlag(false);
    modallessDlg = new mnaDialog(getModalDialogFlag());
    modallessDlg->show();
}

