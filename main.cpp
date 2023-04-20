#include<iostream>
#include <QtWidgets/QApplication>
#include "mainwindow.h"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow window("TonalityReasoner");
    window.show();
    return a.exec();
}