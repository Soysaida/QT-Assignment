#ifndef SELLER_H
#define SELLER_H

#include <QDialog>

namespace Ui {
class Seller;
}

class Seller : public QDialog
{
    Q_OBJECT

public:
    explicit Seller(QWidget *parent = nullptr, QList<QString> *nam = nullptr, QList<QString> *pri = nullptr, QList<QString> *Q = nullptr, QList<QString> *C = nullptr);
    ~Seller();

private slots:
    void on_Add_clicked();

    void on_Back_clicked();

private:
    Ui::Seller *ui;
    double Price = 0;
    double Quantity;
    QString X;
    QList<QString> *names;
    QList<QString> *prices;
    QList<QString> *quan;
    QList<QString> *cate;
};

#endif // SELLER_H
