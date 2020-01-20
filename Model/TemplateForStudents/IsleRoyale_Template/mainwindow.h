#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QtCharts>

using namespace QtCharts;

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    /*
     * Here you find the declaration of GUI related functions
     * */
    void on_runButton_clicked();

    void on_closeButton_clicked();

    void on_setRunNr_valueChanged(int arg1);

    void on_setWolfMortality_valueChanged(double arg1);

    void on_setMooseMortality_valueChanged(double arg1);

    void on_setStartingWolfAbundance_valueChanged(int arg1);

    void on_setStartingMooseAbundance_valueChanged(int arg1);

    void on_varyShownReplicate_valueChanged(int arg1);

    void on_setMooseCarryingCapacity_valueChanged(int arg1);

private:

    // Simulation meta-parameters
    static const int DURATION = 100;
    static const int MAX_RUNS = 100;

    int nRuns;  //number of runs
    int currentRun;  //variable for current run (counter)
    int currentTimestep;

    // Initial values
    int startingWolfAbundance;
    int startingMooseAbundance;

    // Population levels
    int nMoose[MAX_RUNS][DURATION];
    int nWolves[MAX_RUNS][DURATION];

   //these helper variables are there to hold the number of individuals temporarily
   //to avoid messy code with the arrays that might be confusing
    int tmp_nMoose;
    int tmp_nWolves;

    // Vital rates
    double wolfMortalityRate;
    double mooseMortalityRate;
    int mooseCarryingCapacity;

    // Here you find the declarations of all simulation functions
    void setupSimulation();
    void runSimulation();
    void oneYear();
    void reproduction();
    void predation();
    void mortality();
    double calculateMonthlyKillRate();

    // Helper functions
    double generateRandom01();
    double generateRandomRange(double center, double width);

    // GUI
    Ui::MainWindow *ui;
    void initializeGUI();
    void updateGUI();

    // Moose line chart / you can leave this as it is if you dont want to change the charts/plotting
    QChart *MooseLineChart; // Pointer to Chart Object for the first Chart
    QLineSeries *MooseLineSeries;  // This stores Pointers to all different lines we can plot
    int currentMooseMaxY;
    void initializeMooseLineChart();
    void UpdateMooseLineChart(int x, int y); // Updating means adding a point at (x, y) on the chart

    // Wolf line chart
    QChart *WolfLineChart;
    QLineSeries *WolfLineSeries;
    int currentWolfMaxY;
    void initializeWolfLineChart();
    void UpdateWolfLineChart(int x, int y);

};

#endif // MAINWINDOW_H
