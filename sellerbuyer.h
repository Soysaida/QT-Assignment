#ifndef SELLERBUYER_H
#define SELLERBUYER_H

#include <QDialog>

namespace Ui {
class sellerbuyer;
}

class sellerbuyer : public QDialog
{
    Q_OBJECT

public:
    explicit sellerbuyer(QWidget *parent = nullptr, QString Type = "0", QList<QString> *nam = nullptr, QList<QString> *pri = nullptr, QList<QString> *Q = nullptr, QList<QString> *C = nullptr);
    ~sellerbuyer();

private slots:

    void on_Next_clicked();

private:
    Ui::sellerbuyer *ui;
    QString T;
    QList<QString> *names;
    QList<QString> *prices;
    QList<QString> *quan;
    QList<QString> *cate;
};

#endif // SELLERBUYER_H
