#ifndef MNA_WINODOWS_H
#define MNA_WINODOWS_H

#include <QDialog>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class Mna_Winodows;
}
QT_END_NAMESPACE

class Mna_Winodows : public QDialog
{
    Q_OBJECT

public:
    Mna_Winodows(QWidget *parent = nullptr);
    ~Mna_Winodows();

private slots:
    void on_Bttn_OK_clicked();

private:
    Ui::Mna_Winodows *ui;
};
#endif // MNA_WINODOWS_H
