#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>

namespace Ui {
class customer;
}

class customer : public QDialog
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr, QList<QString> *nam = nullptr, QList<QString> *pri = nullptr, QList<QString> *Q = nullptr, QList<QString> *C = nullptr);
    ~customer();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::customer *ui;
    QList<QString> *names;
    QList<QString> *prices;
    QList<QString> *quan;
    QList<QString> *cate;
    QList<QString> cartnames;
    QList<QString> cartprices;
    QList<QString> cartquan;
    int TP = 0;
};

#endif // CUSTOMER_H
