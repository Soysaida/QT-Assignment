#include "seller.h"
#include "ui_seller.h"

Seller::Seller(QWidget *parent, QList<QString> *nam, QList<QString> *pri, QList<QString> *Q, QList<QString> *C) :
    QDialog(parent),
    names(nam),
    prices(pri),
    quan(Q),
    cate(C),
    ui(new Ui::Seller)
{
    ui->setupUi(this);
}

Seller::~Seller()
{
    delete ui;
}

void Seller::on_Add_clicked()
{
    X = ui->ProName->text();
    ui->ProName->setText("");
    names->append(X);
    X = ui->Price->text();
    ui->Price->setText("");
    prices->append(X);
    X = ui->Category->text();
    ui->Category->setText("");
    cate->append(X);
    X = ui->Quantity->text();
    ui->Quantity->setText("");
    quan->append(X);
}


void Seller::on_Back_clicked()
{
    this->close();
}

