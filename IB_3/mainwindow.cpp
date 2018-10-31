#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
                       QMainWindow(parent),
                       ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Generate_clicked()
{
    QString Password;
    int Power=ui->PowerSlider->value(),
        Length=ui->LengthSlider->value();

    //17 280 000 000
    if (pow(Power,Length) > 172800/pow(10,-5))
        QMessageBox::about(this, "Сообщение", "Пароль надежный!");

    for(int i=0;i<Length;i++)
        // К Паролю добавить сгенерированную букву алфавита
        Password.append(alphabet[qrand() % Power+1]);

    ui->Password->setText(Password);
}

void MainWindow::on_Hack_clicked()
{
    QString Password=ui->Password->text();

    if (Password.size() == 0){
        QMessageBox::critical(this, "Ошибка", "Вы не сгенерировали пароль!");
        return;
    }

    QString attempt;
    int Power=ui->PowerSlider->value(),
        Length=ui->LengthSlider->value(),
        symb[Length],
        counts=0;

    QTime myTimer;
    myTimer.start();

    while (Password!=attempt){
        attempt.clear();
        for (int i = 0; i < Length; i++){
            if (symb[i] > Power){
                symb[i+1]++;
                symb[i] = 0;
            }
            attempt.append(alphabet[symb[i]]);
        }
        symb[0]++; counts++;
     }

     ui->Cracks->setText(attempt);
     ui->Timer->setText(QString::number(double(myTimer.elapsed())/1000));

     //Вывод строки "Попытки" вида (_attempts_/_combinations_)
     ui->Attempts->setText(QString::number(counts)
                           .append("/")
                           .append(QString::number(long (pow(Power,Length)))));
}


void MainWindow::on_LengthSlider_valueChanged(int value)
{
    ui->Length->setText(QString::number(value));
}

void MainWindow::on_PowerSlider_valueChanged(int value)
{
    ui->Power->setText(QString::number(value));

    QString allowed_symbols="\"";
    for(int i=0;i<value;i++)
        allowed_symbols.append(alphabet[i+1]);

    ui->Alph->setText(allowed_symbols.append("\""));
}