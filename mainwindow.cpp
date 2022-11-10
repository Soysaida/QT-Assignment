#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sellerbuyer.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Seller_clicked()
{
    sellerbuyer *seller = new sellerbuyer(this, "1", &names, &prices, &quan, &cate);
    seller->setModal(true);
    seller->exec();
    return;

}


void MainWindow::on_Costumer_clicked()
{
    sellerbuyer *costumer = new sellerbuyer(this, "2", &names, &prices, &quan, &cate);
    costumer->setModal(true);
    costumer->exec();
    return;
}

