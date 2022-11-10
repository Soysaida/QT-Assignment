#include "sellerbuyer.h"
#include "ui_sellerbuyer.h"
#include "customer.h"
#include "seller.h"

sellerbuyer::sellerbuyer(QWidget *parent, QString Type, QList<QString> *nam, QList<QString> *pri, QList<QString> *Q, QList<QString> *C) :
    QDialog(parent),
    T(Type),
    names(nam),
    prices(pri),
    quan(Q),
    cate(C),
    ui(new Ui::sellerbuyer)
{
    ui->setupUi(this);
}

sellerbuyer::~sellerbuyer()
{
    delete ui;

}


void sellerbuyer::on_Next_clicked()
{

    if(T=="1")
    {
        Seller *sell = new Seller(this, names, prices, quan, cate);
        sell->setModal(true);
        sell->exec();
        return;
    }
    else
    {
        customer *cost = new customer(this, names, prices, quan, cate);
        cost->setModal(true);
        cost->exec();
        return;
    }

}

