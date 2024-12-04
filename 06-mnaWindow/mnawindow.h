#ifndef MNAWINDOW_H
#define MNAWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_actionModel_Dialog_triggered();

private:
    Ui::mnaWindow *ui;
};
#endif // MNAWINDOW_H
