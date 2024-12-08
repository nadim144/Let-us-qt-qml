/********************************************************************************
** Form generated from reading UI file 'MNADialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNADIALOG_H
#define UI_MNADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MNADialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mna_label;
    QLineEdit *mna_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mna_pushButtonOK;
    QPushButton *mna_pushButtonCancle;

    void setupUi(QDialog *MNADialog)
    {
        if (MNADialog->objectName().isEmpty())
            MNADialog->setObjectName("MNADialog");
        MNADialog->resize(200, 100);
        verticalLayout = new QVBoxLayout(MNADialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        mna_label = new QLabel(MNADialog);
        mna_label->setObjectName("mna_label");

        horizontalLayout->addWidget(mna_label);

        mna_lineEdit = new QLineEdit(MNADialog);
        mna_lineEdit->setObjectName("mna_lineEdit");

        horizontalLayout->addWidget(mna_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mna_pushButtonOK = new QPushButton(MNADialog);
        mna_pushButtonOK->setObjectName("mna_pushButtonOK");

        horizontalLayout_2->addWidget(mna_pushButtonOK);

        mna_pushButtonCancle = new QPushButton(MNADialog);
        mna_pushButtonCancle->setObjectName("mna_pushButtonCancle");

        horizontalLayout_2->addWidget(mna_pushButtonCancle);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MNADialog);

        QMetaObject::connectSlotsByName(MNADialog);
    } // setupUi

    void retranslateUi(QDialog *MNADialog)
    {
        MNADialog->setWindowTitle(QCoreApplication::translate("MNADialog", "MNA Dialog", nullptr));
        mna_label->setText(QCoreApplication::translate("MNADialog", "Name", nullptr));
        mna_pushButtonOK->setText(QCoreApplication::translate("MNADialog", "OK", nullptr));
        mna_pushButtonCancle->setText(QCoreApplication::translate("MNADialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MNADialog: public Ui_MNADialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNADIALOG_H
