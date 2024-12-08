/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSlider;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider_2;
    QProgressBar *progressBar_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QSlider *HSLIDER_3;
    QVBoxLayout *verticalLayout_6;
    QProgressBar *PBAR_3;
    QProgressBar *PBAR_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_8;
    QSlider *Hori_Slider;
    QProgressBar *Progrss_Bar_1;
    QProgressBar *Progrss_Bar_2;
    QMenuBar *menubar;
    QMenu *menuProgressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionSlider = new QAction(MainWindow);
        actionSlider->setObjectName("actionSlider");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 10, 514, 445));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalSlider_2 = new QSlider(widget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_2);

        progressBar_2 = new QProgressBar(widget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setValue(24);

        verticalLayout_2->addWidget(progressBar_2);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        HSLIDER_3 = new QSlider(widget);
        HSLIDER_3->setObjectName("HSLIDER_3");
        HSLIDER_3->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_5->addWidget(HSLIDER_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        PBAR_3 = new QProgressBar(widget);
        PBAR_3->setObjectName("PBAR_3");
        PBAR_3->setValue(24);

        verticalLayout_6->addWidget(PBAR_3);

        PBAR_4 = new QProgressBar(widget);
        PBAR_4->setObjectName("PBAR_4");
        PBAR_4->setValue(24);

        verticalLayout_6->addWidget(PBAR_4);


        verticalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_7->addWidget(label_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        Hori_Slider = new QSlider(widget);
        Hori_Slider->setObjectName("Hori_Slider");
        Hori_Slider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_8->addWidget(Hori_Slider);

        Progrss_Bar_1 = new QProgressBar(widget);
        Progrss_Bar_1->setObjectName("Progrss_Bar_1");
        Progrss_Bar_1->setValue(24);

        verticalLayout_8->addWidget(Progrss_Bar_1);

        Progrss_Bar_2 = new QProgressBar(widget);
        Progrss_Bar_2->setObjectName("Progrss_Bar_2");
        Progrss_Bar_2->setValue(24);

        verticalLayout_8->addWidget(Progrss_Bar_2);


        verticalLayout_7->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuProgressBar = new QMenu(menubar);
        menuProgressBar->setObjectName("menuProgressBar");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuProgressBar->menuAction());
        menuProgressBar->addAction(actionSlider);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, progressBar, &QProgressBar::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSlider->setText(QCoreApplication::translate("MainWindow", "Slider", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1. With signal slot using UI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "2). signal slot using programiticaly using comnnect method", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "3). One signal and two slot using programiticaly using comnnect method", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "4). signal and slot - disconnect first progressbar and connect 2nd progressbar", nullptr));
        menuProgressBar->setTitle(QCoreApplication::translate("MainWindow", "ProgressBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
