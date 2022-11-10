#include "customer.h"
#include "ui_customer.h"
#include <QMessageBox>
customer::customer(QWidget *parent, QList<QString> *nam, QList<QString> *pri, QList<QString> *Q, QList<QString> *C) :
    QDialog(parent),
    names(nam),
    prices(pri),
    quan(Q),
    cate(C),
    ui(new Ui::customer)
{
    ui->setupUi(this);
    for (int i =0; i<names->length(); i++)
    {
        ui->products->setText(ui->products->text()+names->at(i)+" ("+cate->at(i)+") ("+prices->at(i) +" LE) \n");
    }
}

customer::~customer()
{
    delete ui;
}

void customer::on_pushButton_4_clicked()
{
    for (int i =0; i<cartnames.length(); i++)
    {
        TP += (cartprices[i].toInt() * cartquan[i].toInt());
    }
    ui->Receipt->setText("The total price is " + QString::number(TP) + " LE");
}


void customer::on_pushButton_3_clicked()
{
    this->close();
}


void customer::on_pushButton_clicked()
{
    for (int i =0; i<names->length(); i++)
    {
        if(ui->lineEdit_3->text() == names->at(i)&&ui->lineEdit_4->text()!="")
        {
            cartnames.append(names->at(i));
            cartprices.append(prices->at(i));
            cartquan.append(ui->lineEdit_4->text());
        }
    }
    ui->cart->setText("");
    for (int i =0; i<cartnames.length(); i++)
    {
        ui->cart->setText(ui->cart->text()+cartnames[i]+" ("+cartquan[i]+") ("+cartprices[i] +" LE) \n");
    }
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
}


void customer::on_pushButton_2_clicked()
{
    for (int i =0; i<names->length(); i++)
    {
        if(ui->lineEdit->text() == names->at(i))
        {
            ui->search->setText("The product "+names->at(i)+" in cateorty "+cate->at(i)+" costs "+prices->at(i) +" LE");
            return;
        }
    }
    ui->search->setText("The product "+ui->lineEdit->text()+" in cateorty "+ui->lineEdit_2->text() + " does not exist!");
}

