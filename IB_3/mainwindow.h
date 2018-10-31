#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <random>
#include <QTime>
#include <math.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString alphabet=" ABCDEFGHIJKLMNOPQRSTUVWXYZабвгдеёжзийклмнопрстуфхцчшщъыьэюя";

private slots:

    void on_Generate_clicked();

    void on_Hack_clicked();

    void on_LengthSlider_valueChanged(int value);

    void on_PowerSlider_valueChanged(int value);

private:

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
