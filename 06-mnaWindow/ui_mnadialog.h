/********************************************************************************
** Form generated from reading UI file 'mnadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNADIALOG_H
#define UI_MNADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_mnaDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *mnaDialog)
    {
        if (mnaDialog->objectName().isEmpty())
            mnaDialog->setObjectName("mnaDialog");
        mnaDialog->setWindowModality(Qt::NonModal);
        mnaDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(mnaDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        commandLinkButton = new QCommandLinkButton(mnaDialog);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(90, 110, 174, 41));

        retranslateUi(mnaDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, mnaDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, mnaDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(mnaDialog);
    } // setupUi

    void retranslateUi(QDialog *mnaDialog)
    {
        mnaDialog->setWindowTitle(QCoreApplication::translate("mnaDialog", "Dialog", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("mnaDialog", "mna dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mnaDialog: public Ui_mnaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNADIALOG_H
