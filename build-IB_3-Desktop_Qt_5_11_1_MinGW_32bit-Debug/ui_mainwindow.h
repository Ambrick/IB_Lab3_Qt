/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Password;
    QLabel *LabelPower;
    QLabel *LabelLength;
    QLabel *Timer;
    QLabel *LabelTimer;
    QLabel *Cracks;
    QLabel *Attempts;
    QLabel *LabelAttempts;
    QPushButton *Generate;
    QPushButton *Hack;
    QSlider *LengthSlider;
    QSlider *PowerSlider;
    QLabel *Length;
    QLabel *Power;
    QLabel *Alph;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(399, 174);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Password = new QLabel(centralWidget);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(160, 90, 231, 21));
        QFont font;
        font.setPointSize(9);
        Password->setFont(font);
        LabelPower = new QLabel(centralWidget);
        LabelPower->setObjectName(QStringLiteral("LabelPower"));
        LabelPower->setGeometry(QRect(10, 40, 41, 21));
        LabelPower->setFont(font);
        LabelLength = new QLabel(centralWidget);
        LabelLength->setObjectName(QStringLiteral("LabelLength"));
        LabelLength->setGeometry(QRect(10, 10, 41, 21));
        LabelLength->setFont(font);
        Timer = new QLabel(centralWidget);
        Timer->setObjectName(QStringLiteral("Timer"));
        Timer->setGeometry(QRect(50, 150, 91, 21));
        Timer->setFont(font);
        LabelTimer = new QLabel(centralWidget);
        LabelTimer->setObjectName(QStringLiteral("LabelTimer"));
        LabelTimer->setGeometry(QRect(10, 150, 41, 21));
        LabelTimer->setFont(font);
        Cracks = new QLabel(centralWidget);
        Cracks->setObjectName(QStringLiteral("Cracks"));
        Cracks->setGeometry(QRect(160, 120, 231, 21));
        Cracks->setFont(font);
        Attempts = new QLabel(centralWidget);
        Attempts->setObjectName(QStringLiteral("Attempts"));
        Attempts->setGeometry(QRect(210, 150, 181, 21));
        Attempts->setFont(font);
        LabelAttempts = new QLabel(centralWidget);
        LabelAttempts->setObjectName(QStringLiteral("LabelAttempts"));
        LabelAttempts->setGeometry(QRect(150, 150, 61, 21));
        LabelAttempts->setFont(font);
        Generate = new QPushButton(centralWidget);
        Generate->setObjectName(QStringLiteral("Generate"));
        Generate->setGeometry(QRect(10, 90, 141, 23));
        Hack = new QPushButton(centralWidget);
        Hack->setObjectName(QStringLiteral("Hack"));
        Hack->setGeometry(QRect(10, 120, 141, 23));
        LengthSlider = new QSlider(centralWidget);
        LengthSlider->setObjectName(QStringLiteral("LengthSlider"));
        LengthSlider->setGeometry(QRect(60, 10, 301, 22));
        LengthSlider->setMinimum(2);
        LengthSlider->setMaximum(20);
        LengthSlider->setPageStep(1);
        LengthSlider->setOrientation(Qt::Horizontal);
        PowerSlider = new QSlider(centralWidget);
        PowerSlider->setObjectName(QStringLiteral("PowerSlider"));
        PowerSlider->setGeometry(QRect(60, 40, 301, 22));
        PowerSlider->setMinimum(1);
        PowerSlider->setMaximum(59);
        PowerSlider->setPageStep(1);
        PowerSlider->setOrientation(Qt::Horizontal);
        Length = new QLabel(centralWidget);
        Length->setObjectName(QStringLiteral("Length"));
        Length->setGeometry(QRect(370, 10, 21, 21));
        Length->setFont(font);
        Power = new QLabel(centralWidget);
        Power->setObjectName(QStringLiteral("Power"));
        Power->setGeometry(QRect(370, 40, 21, 21));
        Power->setFont(font);
        Alph = new QLabel(centralWidget);
        Alph->setObjectName(QStringLiteral("Alph"));
        Alph->setGeometry(QRect(0, 70, 401, 16));
        Alph->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\260 \321\202\321\200\321\203 \321\205\320\260\321\206\320\272\320\265\321\200\320\260", nullptr));
        Password->setText(QString());
        LabelPower->setText(QApplication::translate("MainWindow", "Power:", nullptr));
        LabelLength->setText(QApplication::translate("MainWindow", "Length:", nullptr));
        Timer->setText(QApplication::translate("MainWindow", "0", nullptr));
        LabelTimer->setText(QApplication::translate("MainWindow", "Timer:", nullptr));
        Cracks->setText(QString());
        Attempts->setText(QString());
        LabelAttempts->setText(QApplication::translate("MainWindow", "Attempts:", nullptr));
        Generate->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        Hack->setText(QApplication::translate("MainWindow", "Hack", nullptr));
        Length->setText(QApplication::translate("MainWindow", "2", nullptr));
        Power->setText(QApplication::translate("MainWindow", "1", nullptr));
        Alph->setText(QApplication::translate("MainWindow", "\"A\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
