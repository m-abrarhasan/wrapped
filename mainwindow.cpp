#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "warp.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Warp warp;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btn_Connect_clicked(bool checked)
{

//    if (!status){

//        ui->btn_Connect->setText("Connected!");
//    }

}




// kate: indent-mode cstyle; indent-width 4; replace-tabs on; 
