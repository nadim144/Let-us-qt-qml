/********************************************************************************
** Form generated from reading UI file 'mna_winodows.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNA_WINODOWS_H
#define UI_MNA_WINODOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Mna_Winodows
{
public:
    QGridLayout *gridLayout;
    QLabel *Txt_Name;
    QLineEdit *ui_editbox_name;
    QSpacerItem *horizontalSpacer;
    QPushButton *Bttn_OK;
    QPushButton *Bttn_Cancel;

    void setupUi(QDialog *Mna_Winodows)
    {
        if (Mna_Winodows->objectName().isEmpty())
            Mna_Winodows->setObjectName(QString::fromUtf8("Mna_Winodows"));
        Mna_Winodows->resize(200, 100);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Mna_Winodows->sizePolicy().hasHeightForWidth());
        Mna_Winodows->setSizePolicy(sizePolicy);
        Mna_Winodows->setMinimumSize(QSize(200, 100));
        gridLayout = new QGridLayout(Mna_Winodows);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Txt_Name = new QLabel(Mna_Winodows);
        Txt_Name->setObjectName(QString::fromUtf8("Txt_Name"));

        gridLayout->addWidget(Txt_Name, 0, 0, 1, 1);

        ui_editbox_name = new QLineEdit(Mna_Winodows);
        ui_editbox_name->setObjectName(QString::fromUtf8("ui_editbox_name"));

        gridLayout->addWidget(ui_editbox_name, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(41, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        Bttn_OK = new QPushButton(Mna_Winodows);
        Bttn_OK->setObjectName(QString::fromUtf8("Bttn_OK"));

        gridLayout->addWidget(Bttn_OK, 1, 1, 1, 1);

        Bttn_Cancel = new QPushButton(Mna_Winodows);
        Bttn_Cancel->setObjectName(QString::fromUtf8("Bttn_Cancel"));

        gridLayout->addWidget(Bttn_Cancel, 1, 2, 1, 1);


        retranslateUi(Mna_Winodows);
        QObject::connect(Bttn_Cancel, SIGNAL(clicked()), Mna_Winodows, SLOT(reject()));

        QMetaObject::connectSlotsByName(Mna_Winodows);
    } // setupUi

    void retranslateUi(QDialog *Mna_Winodows)
    {
        Mna_Winodows->setWindowTitle(QCoreApplication::translate("Mna_Winodows", "Mna_Winodows", nullptr));
        Txt_Name->setText(QCoreApplication::translate("Mna_Winodows", "Name: ", nullptr));
        Bttn_OK->setText(QCoreApplication::translate("Mna_Winodows", "Ok", nullptr));
        Bttn_Cancel->setText(QCoreApplication::translate("Mna_Winodows", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mna_Winodows: public Ui_Mna_Winodows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNA_WINODOWS_H
