#ifndef MNADIALOG_HPP
#define MNADIALOG_HPP

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MNADialog;
}
QT_END_NAMESPACE

class MNADialog : public QDialog
{
    Q_OBJECT

public:
    MNADialog(QWidget *parent = nullptr);
    ~MNADialog();

private slots:
    // void on_mna_pushButtonCancle_clicked();

private:
    Ui::MNADialog *ui;
};
#endif // MNADIALOG_HPP
