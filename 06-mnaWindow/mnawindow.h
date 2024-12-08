#ifndef MNAWINDOW_H
#define MNAWINDOW_H

#include <QMainWindow>
#include "mnadialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class mnaWindow;
}
QT_END_NAMESPACE

class mnaWindow : public QMainWindow
{
    Q_OBJECT

public:
    mnaWindow(QWidget *parent = nullptr);
    ~mnaWindow();
    void setModalDialogFlag(bool flag);
    bool getModalDialogFlag();


private slots:
    void on_actionModel_Dialog_triggered();
    void on_actionModalless_Dialog_triggered();

private:
    Ui::mnaWindow *ui;
    mnaDialog *modallessDlg;
    bool bModalDialogFlag;
};
#endif // MNAWINDOW_H
