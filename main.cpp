#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>
#include <QTimer>
#include <QStyle>
#include <QScreen>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/maths.png"));
    splash->show();
    MainWindow w;

    w.setFixedSize(800, 700);
    w.setWindowTitle("Subtracting Game");

    QTimer::singleShot(2500, splash, SLOT(close()));
    QTimer::singleShot(2500, &w, SLOT(show()));

    return a.exec();
}
