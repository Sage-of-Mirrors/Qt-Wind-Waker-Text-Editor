#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_Viewmodel = new Viewmodel();
}

MainWindow::~MainWindow()
{
    delete m_Viewmodel;
    delete ui;
}
