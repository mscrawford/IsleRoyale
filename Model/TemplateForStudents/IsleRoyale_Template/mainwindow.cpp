#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <algorithm>
#include <math.h>
#include <string>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
 * Below this line you will find the actual model code
 * --- --- --- --- --- --- --- --- --- --- --- --- ---
 * Note: All the code are just suggestions, based on a model that Mike created
 * It is up to you and your model plan and personal style
 * whether you are gonna use the code as it is or whether you
 * will adapt it according to your need.
 * In several places you will need to adapt it for sure.
 * The names of variables can of course be changed. If you e.g. have age cohorts of wolves,
 * you will need to change the wolves array respectively
 * */


/*
 * This is the setup. here we initialize the GUI and all parameters
 * */
void MainWindow::setupSimulation()
{
    // Setup the graphical user interface - see definition of function below
    initializeGUI();

    // Initialize the moose and wolf population arrays
    for (int i = 0; i < MAX_RUNS; i++)
    {
        for (int j = 0; j < DURATION; j++)
        {
            nMoose[i][j] = 0;
            nWolves[i][j] = 0;
        }
    }
}
/*
 * This function controls the simulation. It calls the necessary functions for simulation and plotting
 *  in the correct order
 * */
void MainWindow::runSimulation()
{
   //here we call the setup function, which is defined above
    setupSimulation();

    for (currentRun = 0; currentRun < nRuns; currentRun++)
    {
        for (currentTimestep = 0; currentTimestep < DURATION; currentTimestep++)
        {
            oneYear();
        }
    }

    updateGUI();
}
/*
 * Everything that is gonna happen in one year (like most of your flow chart but the initialization)
 * */
void MainWindow::oneYear()
{
    /* To reduce complexity in your models, we suggest to use "temporary variables" to store both the moose and wolf
     * abundances for the current year. That is, at the beginning of the year, set the preliminary moose and wolf abundances
     * to their values from the last timestep (or year). Then, through reproduction/predation/mortality, modify these values as you
     * see fit. At the end of the timestep (year), enter these values into their corresponding array to be plotted later.
     * note that if you are using age cohorts the tmp variables will likely be one dimensional arrays
     */

    //set to initial values in first timestep only
    if (currentTimestep == 0)
    {
        tmp_nMoose = startingMooseAbundance;
        tmp_nWolves = startingWolfAbundance;
    }
    //in all other cases grab number from array
    else
    {
        tmp_nMoose = nMoose[currentRun][currentTimestep - 1];
        tmp_nWolves = nWolves[currentRun][currentTimestep - 1];
    }

    /*
     * Now here should be a "list" of functions that looks exactly like the series of processes in your flowchart
     * */
    reproduction();
    predation();
    mortality();

    //only after you processed everything, you will store the value in the array!
    //note that if you are using age cohorts the tmp variables will likely be one dimensional arrays
    nMoose[currentRun][currentTimestep] = tmp_nMoose;
    nWolves[currentRun][currentTimestep] = tmp_nWolves;
}
//here we provide pseudo code. This is a way to get started with programming a function. Developing such pseudo code
void MainWindow::reproduction()
{
    ////////////////////
    // Moose reproduction

    /* Calculate the moose recruitment rate. It may be wise to introduce a carrying capacity
     * by multiplying the growth rate by the ratio of current moose to the theoretical carrying capacity.
     *
     * For each moose, see if it reproduces this year. If it does, store this increase in a temporary variable
     */ 

    ////////////////////
    // Wolf reproduction

    /* Calculate the wolf recruitment rate. One simple way this can be done, potentially, is through the linear relationship between the
     * total number of moose and the wolve's recruitment rate. Using this linear relationship it is possible to calculate the expected number of 
     * pups for this year. Remember: These linear relationships will eventually be negative when the number of moose is too lower. You need to set it
     * by hand to 0 if this is the case.
     */

    ////////////////////
    // Add the number of new moose to the number of moose and the number of new wolves to the number of wolves.
}

void MainWindow::predation()
{
    const int MONTHS_PER_YEAR = 12;

    // Since nothing happens during the year other than predation, we do not explicitely include a monthly timestep.
    // Instead, we run the monthly kill rate 12 times.
    for (int i = 0; i < MONTHS_PER_YEAR; i++)
    {

    }
}

// Stochastic mortality for the wolves and the moose
void MainWindow::mortality()
{

}

/* Calculates the wolves' kill rate on a monthly basis using the coefficients taken from
 * the linear model of the raw data. This is one example of a simple stabilizing mechanism embedded in the dataset:
 * When the population of moose is high, the kill rate per wolf will be higher. When the population of moose is low,
 * the kill rate per wolf will be lower.
 *
 * Note that this data is from before 1981, when the moose-wolf dynamics were less driven by disease and inbreeding.
 */
double MainWindow::calculateMonthlyKillRate()
{
    double killRate = 0.001 * tmp_nMoose + -0.353;
    if (killRate < 0) killRate = 0; // With few enough moose, the line will predict a negative kill rate. This is nonsensical.

    return killRate;
}

// Generates a random double from (left, right)
double MainWindow::generateRandomRange(double left, double right)
{
    return (generateRandom01() * (right - left)) + left;
}

// Generates a random double from (0, 1)
double MainWindow::generateRandom01()
{
    return rand() / double(RAND_MAX);
}

// Data management and GUI visualization at the end of the simulation
void MainWindow::updateGUI()
{
    // Draw the currently chose (via the dial) replicate's line charts
    for (int i = 0; i < DURATION; i++)
    {
        UpdateMooseLineChart(i, nMoose[ui->varyShownReplicate->value()][i]);
        UpdateWolfLineChart(i, nWolves[ui->varyShownReplicate->value()][i]);
    }

    // Calculate average values for key metrics across time and simulation runs (i.e. nRuns and DURATION)
    int averageMooseAbundance = 0;
    int averageWolfAbundance = 0;
    int wolfExtinctions = 0;
    int mooseExtinctions = 0;

    for (int i = 0; i < nRuns; i++)
    {
        for (int j = 0; j < DURATION; j++)
        {
            averageWolfAbundance += nWolves[i][j];
            averageMooseAbundance += nMoose[i][j];
        }

        if (nWolves[i][DURATION-1] == 0) wolfExtinctions++;
        if (nMoose[i][DURATION-1] == 0) mooseExtinctions++;
    }

    averageWolfAbundance = averageWolfAbundance / (int) (nRuns * DURATION);
    averageMooseAbundance = averageMooseAbundance / (int) (nRuns * DURATION);

    // Update GUI with new values
    ui->averageWolfAbundance->setText(QString::number(averageWolfAbundance));
    ui->averageWolfAbundance->repaint();

    ui->averageMooseAbundance->setText(QString::number(averageMooseAbundance));
    ui->averageMooseAbundance->repaint();

    ui->wolfExtinctions->setText(QString::number(wolfExtinctions));
    ui->wolfExtinctions->repaint();

    ui->mooseExtinctions->setText(QString::number(mooseExtinctions));
    ui->mooseExtinctions->repaint();
}

void MainWindow::initializeGUI()
{
    ///////////////////////////
    // Read in user input from GUI and initialize simulation variables
    nRuns = ui->setRunNr->value(); // number of simulation replicates

    wolfMortalityRate = ui->setWolfMortality->value(); // Yearly Stochastic wolf mortality rate
    mooseMortalityRate = ui->setMooseMortality->value(); // Yearly Stochastic moose mortality rate

    startingWolfAbundance = ui->setStartingWolfAbundance->value(); // Starting wolf abundance
    startingMooseAbundance = ui->setStartingMooseAbundance->value(); // Starting moose abundance

    mooseCarryingCapacity = ui->setMooseCarryingCapacity->value(); // Frequency-dependent growth limitation for moose
    /* To keep moose from exponential growth when wolves are extinct, a frequency-dependent growth limitation can be
     * implemented by reducing the growth rate of the moose in relation to their size (i.e.the moose reproduce less
     * when there are many of them).
     */

    ///////////////////////////
    // Initialize GUI visualizations

    // Ensure "Show replicate" dial is bounded
    ui->varyShownReplicate->setMaximum(nRuns - 1);

    // Zero-out average wolf abundance
    ui->averageWolfAbundance->setText(QString::number(0));
    ui->averageWolfAbundance->repaint();

    // Zero-out average moose abundance
    ui->averageMooseAbundance->setText(QString::number(0));
    ui->averageMooseAbundance->repaint();

    // Zero-out average wolf extinction
    ui->wolfExtinctions->setText(QString::number(0));
    ui->wolfExtinctions->repaint();

    // Zero-out average moose extinction
    ui->mooseExtinctions->setText(QString::number(0));
    ui->mooseExtinctions->repaint();

    // Setup line charts
    initializeMooseLineChart();
    initializeWolfLineChart();
}

void MainWindow::initializeMooseLineChart()
{
    MooseLineChart = new QChart(); // This is the respective Chart Object
    MooseLineChart->setTitle("Moose abundance over time");

    // Wir definieren ein "Achsenobjekt". Hier: Für unsere Xachse, dahher der Name
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0, DURATION); // Der Wertebereich der Achse "Duration" is the max x value of the simulation(e.g. max duration of one run)
    axisX->setLabelFormat("%i");  // This property holds the label format of the axis: axisY
    axisX->setTitleText("Year");  // Der Titel der Achse

    // Wir definieren ein "Achsenobjekt". Hier: Für unsere Yachse, dahher der Name: axisY
    QValueAxis *axisY = new QValueAxis();
    currentMooseMaxY = startingMooseAbundance * 2;
    axisY->setRange(0, currentMooseMaxY);
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Moose abundance");

    // Nun richten wir die Achsen ein.
    MooseLineChart->setAxisX(axisX);
    MooseLineChart->setAxisY(axisY);
    MooseLineChart->legend()->hide(); // wir haben nicht genug Platz für Legenden, also lassen wir sie weg

    MooseLineSeries = new QLineSeries(); // This will hold the data series to be plotted

    MooseLineChart->addSeries(MooseLineSeries); // Add the moose line to the new chart

    MooseLineSeries->attachAxis(axisX);
    MooseLineSeries->attachAxis(axisY);

    ui->MooseChartView->setRenderHint(QPainter::Antialiasing);
    ui->MooseChartView->setChart(MooseLineChart);
}

void MainWindow::UpdateMooseLineChart(int x, int y)
{
    *MooseLineSeries << QPoint(x, y);  // This adds a point @ (x,y) for the moose

    if (y > currentMooseMaxY) // If the new value exceeds the y-axis, redraw the y-axis
    {
        currentMooseMaxY = y + 10;
        MooseLineChart->axisY()->setRange(0, currentMooseMaxY);
    }

}

void MainWindow::initializeWolfLineChart()
{
    WolfLineChart = new QChart(); // This is the respective Chart Object
    WolfLineChart->setTitle("Wolf abundance over time");

    // Wir definieren ein "Achsenobjekt". Hier: Für unsere Xachse, dahher der Name
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0, DURATION); // Der Wertebereich der Achse "Duration" is the max x value of the simulation(e.g. max duration of one run)
    axisX->setLabelFormat("%i");  // This property holds the label format of the axis: axisY
    axisX->setTitleText("Year");  // Der Titel der Achse

    // Wir definieren ein "Achsenobjekt". Hier: Für unsere Yachse, dahher der Name: axisY
    QValueAxis *axisY = new QValueAxis();
    currentWolfMaxY = startingWolfAbundance * 2;
    axisY->setRange(0, currentWolfMaxY);
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Wolf abundance");

    // Nun richten wir die Achsen ein.
    WolfLineChart->setAxisX(axisX);
    WolfLineChart->setAxisY(axisY);
    WolfLineChart->legend()->hide(); // wir haben nicht genug Platz für Legenden, also lassen wir sie weg

    WolfLineSeries = new QLineSeries(); // This will hold the data series to be plotted

    WolfLineChart->addSeries(WolfLineSeries); // Add the wolves' line to the new chart

    WolfLineSeries->attachAxis(axisX);
    WolfLineSeries->attachAxis(axisY);

    ui->WolfChartView->setRenderHint(QPainter::Antialiasing);
    ui->WolfChartView->setChart(WolfLineChart);
}

void MainWindow::UpdateWolfLineChart(int x, int y)
{
    *WolfLineSeries << QPoint(x, y);  // This adds a point @ (x,y) for the moose

    if (y > currentWolfMaxY) // If the new value exceeds the y-axis, redraw the y-axis
    {
        currentWolfMaxY = y + 10;
        WolfLineChart->axisY()->setRange(0, currentWolfMaxY);
    }

}

// GUI interaction — run the simulation when the "runButton" is clicked
void MainWindow::on_runButton_clicked()
{
    runSimulation();
}

void MainWindow::on_closeButton_clicked()
{
    this->close();
}

// When the "varyShownReplicate" dial is changed, the line charts are re-drawn to reflect the newly chosen replicate
void MainWindow::on_varyShownReplicate_valueChanged(int arg1)
{
    initializeWolfLineChart();
    initializeMooseLineChart();

    for (int i = 0; i < DURATION; i++)
    {
        UpdateWolfLineChart(i, nWolves[arg1][i]);
        UpdateMooseLineChart(i, nMoose[arg1][i]);
    }
}

// When the "setRunNr" button is changed, its value is incorporated into the simulation
void MainWindow::on_setRunNr_valueChanged(int arg1)
{
    nRuns = arg1;
}

void MainWindow::on_setWolfMortality_valueChanged(double arg1)
{
    wolfMortalityRate = arg1;
}

void MainWindow::on_setMooseMortality_valueChanged(double arg1)
{
    mooseMortalityRate = arg1;
}

void MainWindow::on_setStartingWolfAbundance_valueChanged(int arg1)
{
    startingWolfAbundance = arg1;
}

void MainWindow::on_setStartingMooseAbundance_valueChanged(int arg1)
{
    startingMooseAbundance = arg1;
}

void MainWindow::on_setMooseCarryingCapacity_valueChanged(int arg1)
{
    mooseCarryingCapacity = arg1;
}
