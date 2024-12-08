#ifndef MNADIALOG_H
#define MNADIALOG_H

#include <QDialog>

namespace Ui
{
    class mnaDialog;
}

class mnaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit mnaDialog(bool bModalDialogFlag, QWidget *parent = nullptr);
    ~mnaDialog();

private:
    Ui::mnaDialog *ui;
};

#endif // MNADIALOG_H
