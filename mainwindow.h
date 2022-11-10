#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QList<QString> names;
    QList<QString> prices;
    QList<QString> quan;
    QList<QString> cate;
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_Seller_clicked();

    void on_Costumer_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
