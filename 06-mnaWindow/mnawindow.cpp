#include "mnawindow.h"
#include "ui_mnawindow.h"
#include "mnadialog.h"

mnaWindow::mnaWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mnaWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->PLAIN_TXT_EDIT);
}

mnaWindow::~mnaWindow()
{
    delete ui;
}

void mnaWindow::on_actionModel_Dialog_triggered()
{
    mnaDialog mnaDlg;
    mnaDlg.setModal(true);
    mnaDlg.exec();
}

