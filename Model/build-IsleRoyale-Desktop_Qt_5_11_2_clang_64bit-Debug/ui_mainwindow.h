/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QtCharts::QChartView *MooseChartView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *setRunNr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *setMooseMortality;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *setWolfMortality;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *setStartingWolfAbundance;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *setStartingMooseAbundance;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpinBox *setMooseCarryingCapacity;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *runButton;
    QPushButton *closeButton;
    QtCharts::QChartView *WolfChartView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *varyShownReplicate;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *averageWolfAbundance;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *averageMooseAbundance;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLabel *wolfExtinctions;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLabel *mooseExtinctions;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        MooseChartView = new QtCharts::QChartView(centralWidget);
        MooseChartView->setObjectName(QStringLiteral("MooseChartView"));
        MooseChartView->setGeometry(QRect(10, 30, 600, 300));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(620, 40, 235, 190));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        setRunNr = new QSpinBox(verticalLayoutWidget);
        setRunNr->setObjectName(QStringLiteral("setRunNr"));
        setRunNr->setMinimum(1);
        setRunNr->setValue(1);

        horizontalLayout->addWidget(setRunNr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        setMooseMortality = new QDoubleSpinBox(verticalLayoutWidget);
        setMooseMortality->setObjectName(QStringLiteral("setMooseMortality"));
        setMooseMortality->setMaximum(1);
        setMooseMortality->setSingleStep(0.01);

        horizontalLayout_3->addWidget(setMooseMortality);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        setWolfMortality = new QDoubleSpinBox(verticalLayoutWidget);
        setWolfMortality->setObjectName(QStringLiteral("setWolfMortality"));
        setWolfMortality->setMaximum(1);
        setWolfMortality->setSingleStep(0.01);
        setWolfMortality->setValue(0.2);

        horizontalLayout_2->addWidget(setWolfMortality);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        setStartingWolfAbundance = new QSpinBox(verticalLayoutWidget);
        setStartingWolfAbundance->setObjectName(QStringLiteral("setStartingWolfAbundance"));
        setStartingWolfAbundance->setMaximum(500);
        setStartingWolfAbundance->setValue(20);

        horizontalLayout_4->addWidget(setStartingWolfAbundance);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        setStartingMooseAbundance = new QSpinBox(verticalLayoutWidget);
        setStartingMooseAbundance->setObjectName(QStringLiteral("setStartingMooseAbundance"));
        setStartingMooseAbundance->setMaximum(5000);
        setStartingMooseAbundance->setValue(1000);

        horizontalLayout_5->addWidget(setStartingMooseAbundance);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        setMooseCarryingCapacity = new QSpinBox(verticalLayoutWidget);
        setMooseCarryingCapacity->setObjectName(QStringLiteral("setMooseCarryingCapacity"));
        setMooseCarryingCapacity->setMaximum(10000);
        setMooseCarryingCapacity->setValue(5000);

        horizontalLayout_9->addWidget(setMooseCarryingCapacity);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(901, 40, 77, 66));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        runButton = new QPushButton(verticalLayoutWidget_2);
        runButton->setObjectName(QStringLiteral("runButton"));

        verticalLayout_2->addWidget(runButton);

        closeButton = new QPushButton(verticalLayoutWidget_2);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        verticalLayout_2->addWidget(closeButton);

        WolfChartView = new QtCharts::QChartView(centralWidget);
        WolfChartView->setObjectName(QStringLiteral("WolfChartView"));
        WolfChartView->setGeometry(QRect(10, 360, 600, 300));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 330, 160, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        varyShownReplicate = new QSpinBox(horizontalLayoutWidget);
        varyShownReplicate->setObjectName(QStringLiteral("varyShownReplicate"));

        horizontalLayout_6->addWidget(varyShownReplicate);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(620, 370, 271, 104));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        averageWolfAbundance = new QLabel(verticalLayoutWidget_3);
        averageWolfAbundance->setObjectName(QStringLiteral("averageWolfAbundance"));

        horizontalLayout_7->addWidget(averageWolfAbundance);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        averageMooseAbundance = new QLabel(verticalLayoutWidget_3);
        averageMooseAbundance->setObjectName(QStringLiteral("averageMooseAbundance"));

        horizontalLayout_8->addWidget(averageMooseAbundance);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        wolfExtinctions = new QLabel(verticalLayoutWidget_3);
        wolfExtinctions->setObjectName(QStringLiteral("wolfExtinctions"));

        horizontalLayout_10->addWidget(wolfExtinctions);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        mooseExtinctions = new QLabel(verticalLayoutWidget_3);
        mooseExtinctions->setObjectName(QStringLiteral("mooseExtinctions"));

        horizontalLayout_11->addWidget(mooseExtinctions);


        verticalLayout_3->addLayout(horizontalLayout_11);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Chart Template MoKu 2018", nullptr));
        label->setText(QApplication::translate("MainWindow", "Number of runs", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Moose mortality rate", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Wolf mortality rate", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Starting wolf abundance", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Starting moose abundance", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Moose carrying capacity", nullptr));
        runButton->setText(QApplication::translate("MainWindow", "Start", nullptr));
        closeButton->setText(QApplication::translate("MainWindow", "Close", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Plotted replicate", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Mean wolf abundance:", nullptr));
        averageWolfAbundance->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Mean moose abundance:", nullptr));
        averageMooseAbundance->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Wolf extinctions:", nullptr));
        wolfExtinctions->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Moose extinctions: ", nullptr));
        mooseExtinctions->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
