/********************************************************************************
** Form generated from reading UI file 'signalslot.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALSLOT_H
#define UI_SIGNALSLOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalSlot
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_Slider_Progressbar;
    QSlider *horizontalSlider_signalslot;
    QProgressBar *progressBar_signalslot;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_enable_signalslot;
    QPushButton *pushButton_disable_signalslot;
    QPushButton *pushButton_close_exit;
    QMenuBar *menubar;
    QMenu *menuSignal;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SignalSlot)
    {
        if (SignalSlot->objectName().isEmpty())
            SignalSlot->setObjectName("SignalSlot");
        SignalSlot->resize(800, 374);
        centralwidget = new QWidget(SignalSlot);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(120, 20, 261, 41));
        verticalLayout_Slider_Progressbar = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_Slider_Progressbar->setObjectName("verticalLayout_Slider_Progressbar");
        verticalLayout_Slider_Progressbar->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_signalslot = new QSlider(verticalLayoutWidget);
        horizontalSlider_signalslot->setObjectName("horizontalSlider_signalslot");
        horizontalSlider_signalslot->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_Slider_Progressbar->addWidget(horizontalSlider_signalslot);

        progressBar_signalslot = new QProgressBar(centralwidget);
        progressBar_signalslot->setObjectName("progressBar_signalslot");
        progressBar_signalslot->setGeometry(QRect(120, 70, 331, 28));
        progressBar_signalslot->setValue(0);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(470, 100, 137, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_enable_signalslot = new QPushButton(layoutWidget);
        pushButton_enable_signalslot->setObjectName("pushButton_enable_signalslot");

        verticalLayout->addWidget(pushButton_enable_signalslot);

        pushButton_disable_signalslot = new QPushButton(layoutWidget);
        pushButton_disable_signalslot->setObjectName("pushButton_disable_signalslot");

        verticalLayout->addWidget(pushButton_disable_signalslot);

        pushButton_close_exit = new QPushButton(layoutWidget);
        pushButton_close_exit->setObjectName("pushButton_close_exit");

        verticalLayout->addWidget(pushButton_close_exit);

        SignalSlot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignalSlot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuSignal = new QMenu(menubar);
        menuSignal->setObjectName("menuSignal");
        SignalSlot->setMenuBar(menubar);
        toolBar = new QToolBar(SignalSlot);
        toolBar->setObjectName("toolBar");
        SignalSlot->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuSignal->menuAction());

        retranslateUi(SignalSlot);
        QObject::connect(pushButton_close_exit, &QPushButton::clicked, SignalSlot, qOverload<>(&QMainWindow::close));
        QObject::connect(horizontalSlider_signalslot, &QSlider::sliderPressed, progressBar_signalslot, qOverload<>(&QProgressBar::reset));

        QMetaObject::connectSlotsByName(SignalSlot);
    } // setupUi

    void retranslateUi(QMainWindow *SignalSlot)
    {
        SignalSlot->setWindowTitle(QCoreApplication::translate("SignalSlot", "SignalSlot", nullptr));
        pushButton_enable_signalslot->setText(QCoreApplication::translate("SignalSlot", "Enable Signal Slot\"", nullptr));
        pushButton_disable_signalslot->setText(QCoreApplication::translate("SignalSlot", "Disable Signal Slot", nullptr));
        pushButton_close_exit->setText(QCoreApplication::translate("SignalSlot", "Close (Exit)", nullptr));
        menuSignal->setTitle(QCoreApplication::translate("SignalSlot", "Signal", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SignalSlot", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalSlot: public Ui_SignalSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALSLOT_H
