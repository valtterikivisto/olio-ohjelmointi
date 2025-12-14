#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    counter = 0;
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::btnCountPressed);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::btnResetPressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnCountPressed()
{
    counter++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelnfo->setText("Nappia Count painettu " + s + " kertaa");
}

void MainWindow::btnResetPressed()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelnfo->setText("Nappia Count painettu " + s + " kertaa");
}
