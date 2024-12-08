/********************************************************************************
** Form generated from reading UI file 'mnawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNAWINDOW_H
#define UI_MNAWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mnaWindow
{
public:
    QAction *actionModel_Dialog;
    QAction *actionModalless_Dialog;
    QWidget *centralwidget;
    QPlainTextEdit *PLAIN_TXT_EDIT;
    QMenuBar *menubar;
    QMenu *menuNew_Dialog;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mnaWindow)
    {
        if (mnaWindow->objectName().isEmpty())
            mnaWindow->setObjectName("mnaWindow");
        mnaWindow->resize(800, 600);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::CallStart));
        mnaWindow->setWindowIcon(icon);
        actionModel_Dialog = new QAction(mnaWindow);
        actionModel_Dialog->setObjectName("actionModel_Dialog");
        actionModalless_Dialog = new QAction(mnaWindow);
        actionModalless_Dialog->setObjectName("actionModalless_Dialog");
        centralwidget = new QWidget(mnaWindow);
        centralwidget->setObjectName("centralwidget");
        PLAIN_TXT_EDIT = new QPlainTextEdit(centralwidget);
        PLAIN_TXT_EDIT->setObjectName("PLAIN_TXT_EDIT");
        PLAIN_TXT_EDIT->setGeometry(QRect(120, 70, 104, 70));
        mnaWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mnaWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuNew_Dialog = new QMenu(menubar);
        menuNew_Dialog->setObjectName("menuNew_Dialog");
        mnaWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mnaWindow);
        statusbar->setObjectName("statusbar");
        mnaWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew_Dialog->menuAction());
        menuNew_Dialog->addAction(actionModel_Dialog);
        menuNew_Dialog->addSeparator();
        menuNew_Dialog->addAction(actionModalless_Dialog);

        retranslateUi(mnaWindow);

        QMetaObject::connectSlotsByName(mnaWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mnaWindow)
    {
        mnaWindow->setWindowTitle(QCoreApplication::translate("mnaWindow", "Hello Nadim", nullptr));
        actionModel_Dialog->setText(QCoreApplication::translate("mnaWindow", "Modal Dialog", nullptr));
        actionModalless_Dialog->setText(QCoreApplication::translate("mnaWindow", "Modalless Dialog", nullptr));
        menuNew_Dialog->setTitle(QCoreApplication::translate("mnaWindow", "New Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mnaWindow: public Ui_mnaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNAWINDOW_H
