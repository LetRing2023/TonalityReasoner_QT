#include "mainwindow.h"

MainWindow::MainWindow(QString title)
{
	this->resize(800, 600);
	this->setWindowTitle(title);

	lr_central = new Reasoner_GUI();
	this->setCentralWidget(lr_central);
}

MainWindow::~MainWindow()
{

}