/*
 *
 * This is the code template for building an Isle Royale Wolf/Moose population
 * model.
 * It provides all necessary User interface and plotting functionality
 * however, also those can be adapted by students if necessary
 * The model was build by Michael Crawford January 2019
 * mcraford@uni-potsdam.de
 *
 * */
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])  //we suggest to not touch this function at all
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
