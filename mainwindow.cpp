#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>
#include <QMessageBox>


#include <QRandomGenerator>


int calc_boxes();
int calc_lvl5();

bool jchanged = false;


void reset();
void levelinitializer();
void setTable1();

bool whitept = false;

bool colorrow1 = false;
bool colorrow2 = false;
bool colorrow3 = false;
bool colorrow4 = false;
bool colorrow5 = false;
bool colorrow6 = false;

bool colorcol1 = false;
bool colorcol2 = false;
bool colorcol3 = false;
bool colorcol4 = false;
bool colorcol5 = false;
bool colorcol6 = false;
bool colorcol7 = false;
bool colorcol8 = false;
bool colorcol9 = false;
bool colorcol10= false;

bool cellcolor60 = true;
bool cellcolor59 = true;
bool cellcolor58 = true;
bool cellcolor57 = true;
bool cellcolor56 = true;
bool cellcolor55 = true;
bool cellcolor54 = true;
bool cellcolor53 = true;
bool cellcolor52 = true;
bool cellcolor51 = true;
bool cellcolor50 = true;
bool cellcolor49 = true;
bool cellcolor48 = true;
bool cellcolor47 = true;
bool cellcolor46 = true;
bool cellcolor45 = true;
bool cellcolor44 = true;
bool cellcolor43 = true;
bool cellcolor42 = true;
bool cellcolor41 = true;
bool cellcolor40 = true;
bool cellcolor39 = true;
bool cellcolor38 = true;
bool cellcolor37 = true;
bool cellcolor36 = true;
bool cellcolor35 = true;
bool cellcolor34 = true;
bool cellcolor33 = true;
bool cellcolor32 = true;
bool cellcolor31 = true;
bool cellcolor30 = true;
bool cellcolor29 = true;
bool cellcolor28 = true;
bool cellcolor27 = true;
bool cellcolor26 = true;
bool cellcolor25 = true;
bool cellcolor24 = true;
bool cellcolor23 = true;
bool cellcolor22 = true;
bool cellcolor21 = true;
bool cellcolor20 = true;
bool cellcolor19 = true;
bool cellcolor18 = true;
bool cellcolor17 = true;
bool cellcolor16 = true;
bool cellcolor15 = true;
bool cellcolor14 = true;
bool cellcolor13 = true;
bool cellcolor12 = true;
bool cellcolor11 = true;
bool cellcolor10 = true;
bool cellcolor9 = true;
bool cellcolor8 = true;
bool cellcolor7 = true;
bool cellcolor6 = true;
bool cellcolor5 = true;
bool cellcolor4 = true;
bool cellcolor3 = true;
bool cellcolor2 = true;
bool cellcolor1 = true;


bool ccellcolor60 = true;
bool ccellcolor59 = true;
bool ccellcolor58 = true;
bool ccellcolor57 = true;
bool ccellcolor56 = true;
bool ccellcolor55 = true;
bool ccellcolor54 = true;
bool ccellcolor53 = true;
bool ccellcolor52 = true;
bool ccellcolor51 = true;
bool ccellcolor50 = true;
bool ccellcolor49 = true;
bool ccellcolor48 = true;
bool ccellcolor47 = true;
bool ccellcolor46 = true;
bool ccellcolor45 = true;
bool ccellcolor44 = true;
bool ccellcolor43 = true;
bool ccellcolor42 = true;
bool ccellcolor41 = true;
bool ccellcolor40 = true;
bool ccellcolor39 = true;
bool ccellcolor38 = true;
bool ccellcolor37 = true;
bool ccellcolor36 = true;
bool ccellcolor35 = true;
bool ccellcolor34 = true;
bool ccellcolor33 = true;
bool ccellcolor32 = true;
bool ccellcolor31 = true;
bool ccellcolor30 = true;
bool ccellcolor29 = true;
bool ccellcolor28 = true;
bool ccellcolor27 = true;
bool ccellcolor26 = true;
bool ccellcolor25 = true;
bool ccellcolor24 = true;
bool ccellcolor23 = true;
bool ccellcolor22 = true;
bool ccellcolor21 = true;
bool ccellcolor20 = true;
bool ccellcolor19 = true;
bool ccellcolor18 = true;
bool ccellcolor17 = true;
bool ccellcolor16 = true;
bool ccellcolor15 = true;
bool ccellcolor14 = true;
bool ccellcolor13 = true;
bool ccellcolor12 = true;
bool ccellcolor11 = true;
bool ccellcolor10 = true;
bool ccellcolor9 = true;
bool ccellcolor8 = true;
bool ccellcolor7 = true;
bool ccellcolor6 = true;
bool ccellcolor5 = true;
bool ccellcolor4 = true;
bool ccellcolor3 = true;
bool ccellcolor2 = true;
bool ccellcolor1 = true;

bool score1 = false;
bool score2 = false;
bool score3 = false;
bool score4 = false;
bool score5 = false;
bool score6 = false;

bool flrst = false;

//default values
bool level1stage1 = false;
bool level1stage2 = false;
bool level1stage3 = false;

int hold1 = 0;

//default
int level = 1;
int roundcount = 1;

bool rsttbl = true;

bool lvl5rst = false;

// the random number given, just the global version
int rdm;
int rdm1;

bool bluept = false;
bool redpt = false;

int bluepoint = 0;
int whitepoint = 0;

// random for level 5



int rndm(int, int);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    move(screen()->geometry().center() - frameGeometry().center());


        ui->label_10->hide();

        ui->textBrowser_2->hide();
        ui->textBrowser_3->hide();
        ui->textBrowser_4->hide();



    reset();
    levelinitializer();

    ui->levels->setCurrentIndex(0);



    // ui->number_label->setText(("<html><head/><body><p><span style=' font-size:28pt; font-weight:600; color:#ffffff;'>" + QString::number(num) + "</span></p></body></html>"));

    if(!(level == 5)){
    QString questionlevel1 = "<html><head/><body><p><span style=' font-size:14pt; color:#f6f5f4;'>and the magic numbers are </span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'>60 </span><span style=' font-size:14pt; color:#f6f5f4;'>and</span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'> " + QString::number(rdm) + " </span><span style=' font-size:14pt; color:#f6f5f4;'>. Can you help him? </span></p></body></html>";
   ui->label_7->setText(questionlevel1);
    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
int MainWindow::randInt(int b1, int b2)
{
    // Random number between low and high
    return qrand() % ((high + 1) - low) + low;
}
for this method you should also declare another random number for the qrand since it will be pseudonymous
an instance with using the current time:

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

just needs to be declared at the beginning of the program
*/

// the most simple solution


int MainWindow::rndm(int b1, int b2){


    retry:

    int x = QRandomGenerator::global()->bounded(b1, b2);

    if(hold1 == x){
        goto retry;
    }
    else{
        hold1 = x;
    }


    return x;
}

void MainWindow::on_textEdit_textChanged()
{

    if(!level1stage2 && !(ui->textEdit->toPlainText() == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Bar Model to proceed");
        box.exec();

        ui->textEdit->setText("");

    }

}


// 10 IQ coding alert

void MainWindow::on_row1_clicked()
{

    if(level == 5 && colorrow1){
        colorrow1 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor6 = true;
            ccellcolor12 = true;
            ccellcolor18 = true;
            ccellcolor24 = true;
            ccellcolor30 = true;
            ccellcolor36 = true;
            ccellcolor42 = true;
            ccellcolor48 = true;
            ccellcolor54 = true;
            ccellcolor60 = true;

            cellcolor6 = true;
            cellcolor12 = true;
            cellcolor18 = true;
            cellcolor24 = true;
            cellcolor30 = true;
            cellcolor36 = true;
            cellcolor42 = true;
            cellcolor48 = true;
            cellcolor54 = true;
            cellcolor60 = true;

            return;
        }
        else if(bluept){

            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor6 = true;
            cellcolor12 = true;
            cellcolor18 = true;
            cellcolor24 = true;
            cellcolor30 = true;
            cellcolor36 = true;
            cellcolor42 = true;
            cellcolor48 = true;
            cellcolor54 = true;
            cellcolor60 = true;

            ccellcolor6 = false;
            ccellcolor12 = false;
            ccellcolor18 = false;
            ccellcolor24 = false;
            ccellcolor30 = false;
            ccellcolor36 = false;
            ccellcolor42 = false;
            ccellcolor48 = false;
            ccellcolor54 = false;
            ccellcolor60 = false;

            return;
        }


    }


if(colorrow1 == true){


    ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

    colorrow1 = false;

    cellcolor6 = true;
    cellcolor12 = true;
    cellcolor18 = true;
    cellcolor24 = true;
    cellcolor30 = true;
    cellcolor36 = true;
    cellcolor42 = true;
    cellcolor48 = true;
    cellcolor54 = true;
    cellcolor60 = true;


}
else{

    ui->cell1_6->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_12->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_18->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_24->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_30->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_36->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_42->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_48->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_54->setStyleSheet("border-image: url(:/red.jpg)");
    ui->cell1_60->setStyleSheet("border-image: url(:/red.jpg)");

    colorrow1 = true;

    cellcolor6 = false;
    cellcolor12 = false;
    cellcolor18 = false;
    cellcolor24 = false;
    cellcolor30 = false;
    cellcolor36 = false;
    cellcolor42 = false;
    cellcolor48 = false;
    cellcolor54 = false;
    cellcolor60 = false;
}

}


void MainWindow::on_pushButton_27_clicked()
{


    if(level == 5 && colorrow2){
        colorrow2 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor5 = true;
            ccellcolor8 = true;
            ccellcolor14 = true;
            ccellcolor20 = true;
            ccellcolor26 = true;
            ccellcolor32 = true;
            ccellcolor38 = true;
            ccellcolor44 = true;
            ccellcolor50 = true;
            ccellcolor56 = true;

            cellcolor5 = true;
            cellcolor8 = true;
            cellcolor14 = true;
            cellcolor20 = true;
            cellcolor26 = true;
            cellcolor32 = true;
            cellcolor38 = true;
            cellcolor44 = true;
            cellcolor50 = true;
            cellcolor56 = true;

            return;
        }
        else if(bluept){

            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor5 = true;
            cellcolor8 = true;
            cellcolor14 = true;
            cellcolor20 = true;
            cellcolor26 = true;
            cellcolor32 = true;
            cellcolor38 = true;
            cellcolor44 = true;
            cellcolor50 = true;
            cellcolor56 = true;

            ccellcolor5 = false;
            ccellcolor8 = false;
            ccellcolor14 = false;
            ccellcolor20 = false;
            ccellcolor26 = false;
            ccellcolor32 = false;
            ccellcolor38 = false;
            ccellcolor44 = false;
            ccellcolor50 = false;
            ccellcolor56 = false;

            return;
        }


    }



    if(colorrow2 == true){
        ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

        colorrow2 = false;

        cellcolor5 = true;
        cellcolor8 = true;
        cellcolor14 = true;
        cellcolor20 = true;
        cellcolor26 = true;
        cellcolor32 = true;
        cellcolor38 = true;
        cellcolor44 = true;
        cellcolor50 = true;
        cellcolor56 = true;

    }
    else{

        ui->cell1_5->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_8->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_14->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_20->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_26->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_32->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_38->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_44->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_50->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_56->setStyleSheet("border-image: url(:/red.jpg)");

        colorrow2 = true;

        cellcolor5 = false;
        cellcolor8 = false;
        cellcolor14 = false;
        cellcolor20 = false;
        cellcolor26 = false;
        cellcolor32 = false;
        cellcolor38 = false;
        cellcolor44 = false;
        cellcolor50 = false;
        cellcolor56 = false;

    }
}


void MainWindow::on_pushButton_23_clicked()
{

    if(level == 5 && colorrow3){
        colorrow3 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor4 = true;
            ccellcolor7 = true;
            ccellcolor13 = true;
            ccellcolor19 = true;
            ccellcolor25 = true;
            ccellcolor31 = true;
            ccellcolor37 = true;
            ccellcolor43 = true;
            ccellcolor49 = true;
            ccellcolor55 = true;

            cellcolor4 = true;
            cellcolor7 = true;
            cellcolor13 = true;
            cellcolor19 = true;
            cellcolor25 = true;
            cellcolor31 = true;
            cellcolor37 = true;
            cellcolor43 = true;
            cellcolor49 = true;
            cellcolor55 = true;

            return;
        }
        else if(bluept){

            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor4 = true;
            cellcolor7 = true;
            cellcolor13 = true;
            cellcolor19 = true;
            cellcolor25 = true;
            cellcolor31 = true;
            cellcolor37 = true;
            cellcolor43 = true;
            cellcolor49 = true;
            cellcolor55 = true;

            ccellcolor4 = false;
            ccellcolor7 = false;
            ccellcolor13 = false;
            ccellcolor19 = false;
            ccellcolor25 = false;
            ccellcolor31 = false;
            ccellcolor37 = false;
            ccellcolor43 = false;
            ccellcolor49 = false;
            ccellcolor55 = false;

            return;
        }


    }


    if(colorrow3 == true){
        ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

        colorrow3 = false;

        cellcolor4 = true;
        cellcolor7 = true;
        cellcolor13 = true;
        cellcolor19 = true;
        cellcolor25 = true;
        cellcolor31 = true;
        cellcolor37 = true;
        cellcolor43 = true;
        cellcolor49 = true;
        cellcolor55 = true;

    }
    else{

        ui->cell1_4->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_7->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_13->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_19->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_25->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_31->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_37->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_43->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_49->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_55->setStyleSheet("border-image: url(:/red.jpg)");

        colorrow3 = true;

        cellcolor4 = false;
        cellcolor7 = false;
        cellcolor13 = false;
        cellcolor19 = false;
        cellcolor25 = false;
        cellcolor31 = false;
        cellcolor37 = false;
        cellcolor43 = false;
        cellcolor49 = false;
        cellcolor55 = false;

    }
}


void MainWindow::on_pushButton_24_clicked()
{

    if(level == 5 && colorrow4){
        colorrow4 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor3 = true;
            ccellcolor11 = true;
            ccellcolor17 = true;
            ccellcolor23 = true;
            ccellcolor29 = true;
            ccellcolor35 = true;
            ccellcolor41 = true;
            ccellcolor47 = true;
            ccellcolor53 = true;
            ccellcolor59 = true;

            cellcolor3 = true;
            cellcolor11 = true;
            cellcolor17 = true;
            cellcolor23 = true;
            cellcolor29 = true;
            cellcolor35 = true;
            cellcolor41 = true;
            cellcolor47 = true;
            cellcolor53 = true;
            cellcolor59 = true;

            return;
        }
        else if(bluept){

            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor3 = true;
            cellcolor11 = true;
            cellcolor17 = true;
            cellcolor23 = true;
            cellcolor29 = true;
            cellcolor35 = true;
            cellcolor41 = true;
            cellcolor47 = true;
            cellcolor53 = true;
            cellcolor59 = true;

            ccellcolor3 = false;
            ccellcolor11 = false;
            ccellcolor17 = false;
            ccellcolor23 = false;
            ccellcolor29 = false;
            ccellcolor35 = false;
            ccellcolor41 = false;
            ccellcolor47 = false;
            ccellcolor53 = false;
            ccellcolor59 = false;

            return;
        }


    }


    if(colorrow4 == true){
        ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

        colorrow4 = false;

        cellcolor3 = true;
        cellcolor11 = true;
        cellcolor17 = true;
        cellcolor23 = true;
        cellcolor29 = true;
        cellcolor35 = true;
        cellcolor41 = true;
        cellcolor47 = true;
        cellcolor53 = true;
        cellcolor59 = true;

    }
    else{

        ui->cell1_3->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_11->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_17->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_23->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_29->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_35->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_41->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_47->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_53->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_59->setStyleSheet("border-image: url(:/red.jpg)");

        colorrow4 = true;

        cellcolor3 = false;
        cellcolor11 = false;
        cellcolor17 = false;
        cellcolor23 = false;
        cellcolor29 = false;
        cellcolor35 = false;
        cellcolor41 = false;
        cellcolor47 = false;
        cellcolor53 = false;
        cellcolor59 = false;

    }
}


void MainWindow::on_pushButton_25_clicked()
{


    if(level == 5 && colorrow5){
        colorrow5 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor2 = true;
            ccellcolor10 = true;
            ccellcolor16 = true;
            ccellcolor22 = true;
            ccellcolor28 = true;
            ccellcolor34 = true;
            ccellcolor40 = true;
            ccellcolor46 = true;
            ccellcolor52 = true;
            ccellcolor58 = true;

            cellcolor2 = true;
            cellcolor10 = true;
            cellcolor16 = true;
            cellcolor22 = true;
            cellcolor28 = true;
            cellcolor34 = true;
            cellcolor40 = true;
            cellcolor46 = true;
            cellcolor52 = true;
            cellcolor58 = true;

            return;
        }
        else if(bluept){

            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor2 = true;
            cellcolor10 = true;
            cellcolor16 = true;
            cellcolor22 = true;
            cellcolor28 = true;
            cellcolor34 = true;
            cellcolor40 = true;
            cellcolor46 = true;
            cellcolor52 = true;
            cellcolor58 = true;

            ccellcolor2 = false;
            ccellcolor10 = false;
            ccellcolor16 = false;
            ccellcolor22 = false;
            ccellcolor28 = false;
            ccellcolor34 = false;
            ccellcolor40 = false;
            ccellcolor46 = false;
            ccellcolor52 = false;
            ccellcolor58 = false;

            return;
        }


    }



    if(colorrow5 == true){
        ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

        colorrow5 = false;

        cellcolor2 = true;
        cellcolor10 = true;
        cellcolor16 = true;
        cellcolor22 = true;
        cellcolor28 = true;
        cellcolor34 = true;
        cellcolor40 = true;
        cellcolor46 = true;
        cellcolor52 = true;
        cellcolor58 = true;

    }
    else{

        ui->cell1_2->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_10->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_16->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_22->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_28->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_34->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_40->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_46->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_52->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_58->setStyleSheet("border-image: url(:/red.jpg)");

        colorrow5 = true;

        cellcolor2 = false;
        cellcolor10 = false;
        cellcolor16 = false;
        cellcolor22 = false;
        cellcolor28 = false;
        cellcolor34 = false;
        cellcolor40 = false;
        cellcolor46 = false;
        cellcolor52 = false;
        cellcolor58 = false;

    }
}


void MainWindow::on_pushButton_26_clicked()
{

    if(level == 5 && colorrow6){
        colorrow6 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor1 = true;
            ccellcolor9 = true;
            ccellcolor15 = true;
            ccellcolor21 = true;
            ccellcolor27 = true;
            ccellcolor33 = true;
            ccellcolor39 = true;
            ccellcolor45 = true;
            ccellcolor51 = true;
            ccellcolor57 = true;

            cellcolor1 = true;
            cellcolor9 = true;
            cellcolor15 = true;
            cellcolor21 = true;
            cellcolor27 = true;
            cellcolor33 = true;
            cellcolor39 = true;
            cellcolor45 = true;
            cellcolor51 = true;
            cellcolor57 = true;

            return;
        }
        else if(bluept){

            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor1 = true;
            cellcolor9 = true;
            cellcolor15 = true;
            cellcolor21 = true;
            cellcolor27 = true;
            cellcolor33 = true;
            cellcolor39 = true;
            cellcolor45 = true;
            cellcolor51 = true;
            cellcolor57 = true;

            ccellcolor1 = false;
            ccellcolor9 = false;
            ccellcolor15 = false;
            ccellcolor21 = false;
            ccellcolor27 = false;
            ccellcolor33 = false;
            ccellcolor39 = false;
            ccellcolor45 = false;
            ccellcolor51 = false;
            ccellcolor57 = false;

            return;
        }


    }

    if(colorrow6 == true){
        ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

        colorrow6 = false;

        cellcolor1 = true;
        cellcolor9 = true;
        cellcolor15 = true;
        cellcolor21 = true;
        cellcolor27 = true;
        cellcolor33 = true;
        cellcolor39 = true;
        cellcolor45 = true;
        cellcolor51 = true;
        cellcolor57 = true;

    }
    else{

        ui->cell1->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_9->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_15->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_21->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_27->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_33->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_39->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_45->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_51->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_57->setStyleSheet("border-image: url(:/red.jpg)");

        colorrow6 = true;

        cellcolor1 = false;
        cellcolor9 = false;
        cellcolor15 = false;
        cellcolor21 = false;
        cellcolor27 = false;
        cellcolor33 = false;
        cellcolor39 = false;
        cellcolor45 = false;
        cellcolor51 = false;
        cellcolor57 = false;

    }
}


void MainWindow::on_pushButton_4_clicked()
{

    if(level == 5 && colorcol1){
        colorcol1 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor1 = true;
            ccellcolor2 = true;
            ccellcolor3 = true;
            ccellcolor4 = true;
            ccellcolor5 = true;
            ccellcolor6 = true;

            cellcolor1 = true;
            cellcolor2 = true;
            cellcolor3 = true;
            cellcolor4 = true;
            cellcolor5 = true;
            cellcolor6 = true;

            return;
        }
        else if(bluept){

            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor1 = true;
            cellcolor2 = true;
            cellcolor3 = true;
            cellcolor4 = true;
            cellcolor5 = true;
            cellcolor6 = true;

            ccellcolor1 = false;
            ccellcolor2 = false;
            ccellcolor3 = false;
            ccellcolor4 = false;
            ccellcolor5 = false;
            ccellcolor6 = false;

            return;
        }


    }

    if(colorcol1 == true){
        ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol1 = false;

        cellcolor1 = true;
        cellcolor2 = true;
        cellcolor3 = true;
        cellcolor4 = true;
        cellcolor5 = true;
        cellcolor6 = true;



    }
    else{

        ui->cell1->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_2->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_3->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_4->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_5->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_6->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol1 = true;

        cellcolor1 = false;
        cellcolor2 = false;
        cellcolor3 = false;
        cellcolor4 = false;
        cellcolor5 = false;
        cellcolor6 = false;
    }
}


void MainWindow::on_pushButton_5_clicked()
{

    if(level == 5 && colorcol2){
        colorcol2 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor7 = true;
            ccellcolor8 = true;
            ccellcolor9 = true;
            ccellcolor10 = true;
            ccellcolor11 = true;
            ccellcolor12 = true;

            cellcolor7 = true;
            cellcolor8 = true;
            cellcolor9 = true;
            cellcolor10 = true;
            cellcolor11 = true;
            cellcolor12 = true;

            return;
        }
        else if(bluept){

            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor7 = true;
            cellcolor8 = true;
            cellcolor9 = true;
            cellcolor10 = true;
            cellcolor11 = true;
            cellcolor12 = true;

            ccellcolor7 = false;
            ccellcolor8 = false;
            ccellcolor9 = false;
            ccellcolor10 = false;
            ccellcolor11 = false;
            ccellcolor12 = false;

            return;
        }


    }


    if(colorcol2 == true){
        ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol2 = false;

        cellcolor7 = true;
        cellcolor8 = true;
        cellcolor9 = true;
        cellcolor10 = true;
        cellcolor11 = true;
        cellcolor12 = true;

    }
    else{

        ui->cell1_7->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_8->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_9->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_10->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_11->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_12->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol2 = true;

        cellcolor7 = false;
        cellcolor8 = false;
        cellcolor9 = false;
        cellcolor10 = false;
        cellcolor11 = false;
        cellcolor12 = false;

    }
}


void MainWindow::on_pushButton_6_clicked()
{

    if(level == 5 && colorcol3){
        colorcol3 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor18 = true;
            ccellcolor17 = true;
            ccellcolor16 = true;
            ccellcolor15 = true;
            ccellcolor14 = true;
            ccellcolor13 = true;

            cellcolor18 = true;
            cellcolor17 = true;
            cellcolor16 = true;
            cellcolor15 = true;
            cellcolor14 = true;
            cellcolor13 = true;

            return;
        }
        else if(bluept){

            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");

            cellcolor18 = true;
            cellcolor17 = true;
            cellcolor16 = true;
            cellcolor15 = true;
            cellcolor14 = true;
            cellcolor13 = true;


            ccellcolor18 = false;
            ccellcolor17 = false;
            ccellcolor16 = false;
            ccellcolor15 = false;
            ccellcolor14 = false;
            ccellcolor13 = false;

            return;
        }


    }

    if(colorcol3 == true){
        ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol3 = false;

        cellcolor18 = true;
        cellcolor17 = true;
        cellcolor16 = true;
        cellcolor15 = true;
        cellcolor14 = true;
        cellcolor13 = true;

    }
    else{

        ui->cell1_13->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_14->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_15->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_16->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_17->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_18->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol3 = true;

        cellcolor18 = false;
        cellcolor17 = false;
        cellcolor16 = false;
        cellcolor15 = false;
        cellcolor14 = false;
        cellcolor13 = false;

    }
}


void MainWindow::on_pushButton_7_clicked()
{

    if(level == 5 && colorcol4){
        colorcol4 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor24 = true;
            ccellcolor23 = true;
            ccellcolor22 = true;
            ccellcolor21 = true;
            ccellcolor20 = true;
            ccellcolor19 = true;

            cellcolor24 = true;
            cellcolor23 = true;
            cellcolor22 = true;
            cellcolor21 = true;
            cellcolor20 = true;
            cellcolor19 = true;

            return;
        }
        else if(bluept){

            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor24 = true;
            cellcolor23 = true;
            cellcolor22 = true;
            cellcolor21 = true;
            cellcolor20 = true;
            cellcolor19 = true;

            ccellcolor24 = false;
            ccellcolor23 = false;
            ccellcolor22 = false;
            ccellcolor21 = false;
            ccellcolor20 = false;
            ccellcolor19 = false;

            return;
        }


    }


    if(colorcol4 == true){
        ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol4 = false;

        cellcolor24 = true;
        cellcolor23 = true;
        cellcolor22 = true;
        cellcolor21 = true;
        cellcolor20 = true;
        cellcolor19 = true;

    }
    else{

        ui->cell1_19->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_20->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_21->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_22->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_23->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_24->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol4 = true;

        cellcolor24 = false;
        cellcolor23 = false;
        cellcolor22 = false;
        cellcolor21 = false;
        cellcolor20 = false;
        cellcolor19 = false;

    }
}


void MainWindow::on_pushButton_8_clicked()
{

    if(level == 5 && colorcol5){
        colorcol5 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor30 = true;
            ccellcolor29 = true;
            ccellcolor28 = true;
            ccellcolor27 = true;
            ccellcolor26 = true;
            ccellcolor25 = true;

            cellcolor30 = true;
            cellcolor29 = true;
            cellcolor28 = true;
            cellcolor27 = true;
            cellcolor26 = true;
            cellcolor25 = true;

            return;
        }
        else if(bluept){

            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor30 = true;
            cellcolor29 = true;
            cellcolor28 = true;
            cellcolor27 = true;
            cellcolor26 = true;
            cellcolor25 = true;

            ccellcolor30 = false;
            ccellcolor29 = false;
            ccellcolor28 = false;
            ccellcolor27 = false;
            ccellcolor26 = false;
            ccellcolor25 = false;

            return;
        }


    }

    if(colorcol5 == true){
        ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol5 = false;

        cellcolor30 = true;
        cellcolor29 = true;
        cellcolor28 = true;
        cellcolor27 = true;
        cellcolor26 = true;
        cellcolor25 = true;

    }
    else{

        ui->cell1_25->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_26->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_27->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_28->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_29->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_30->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol5 = true;

        cellcolor30 = false;
        cellcolor29 = false;
        cellcolor28 = false;
        cellcolor27 = false;
        cellcolor26 = false;
        cellcolor25 = false;

    }
}


void MainWindow::on_pushButton_9_clicked()
{

    if(level == 5 && colorcol6){
        colorcol6 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor36 = true;
            ccellcolor35 = true;
            ccellcolor34 = true;
            ccellcolor33 = true;
            ccellcolor32 = true;
            ccellcolor31 = true;

            cellcolor36 = true;
            cellcolor35 = true;
            cellcolor34 = true;
            cellcolor33 = true;
            cellcolor32 = true;
            cellcolor31 = true;

            return;
        }
        else if(bluept){

            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor36 = true;
            cellcolor35 = true;
            cellcolor34 = true;
            cellcolor33 = true;
            cellcolor32 = true;
            cellcolor31 = true;

            ccellcolor36 = false;
            ccellcolor35 = false;
            ccellcolor34 = false;
            ccellcolor33 = false;
            ccellcolor32 = false;
            ccellcolor31 = false;

            return;
        }


    }

    if(colorcol6 == true){
        ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol6 = false;

        cellcolor36 = true;
        cellcolor35 = true;
        cellcolor34 = true;
        cellcolor33 = true;
        cellcolor32 = true;
        cellcolor31 = true;

    }
    else{

        ui->cell1_31->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_32->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_33->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_34->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_35->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_36->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol6 = true;

        cellcolor36 = false;
        cellcolor35 = false;
        cellcolor34 = false;
        cellcolor33 = false;
        cellcolor32 = false;
        cellcolor31 = false;

    }
}


void MainWindow::on_pushButton_22_clicked()
{

    if(level == 5 && colorcol7){
        colorcol7 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor42 = true;
            ccellcolor41 = true;
            ccellcolor40 = true;
            ccellcolor39 = true;
            ccellcolor38 = true;
            ccellcolor37 = true;

            cellcolor42 = true;
            cellcolor41 = true;
            cellcolor40 = true;
            cellcolor39 = true;
            cellcolor38 = true;
            cellcolor37 = true;

            return;
        }
        else if(bluept){

            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor42 = true;
            cellcolor41 = true;
            cellcolor40 = true;
            cellcolor39 = true;
            cellcolor38 = true;
            cellcolor37 = true;

            ccellcolor42 = false;
            ccellcolor41 = false;
            ccellcolor40 = false;
            ccellcolor39 = false;
            ccellcolor38 = false;
            ccellcolor37 = false;

            return;
        }


    }


    if(colorcol7 == true){
        ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol7 = false;

        cellcolor42 = true;
        cellcolor41 = true;
        cellcolor40 = true;
        cellcolor39 = true;
        cellcolor38 = true;
        cellcolor37 = true;

    }
    else{

        ui->cell1_37->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_38->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_39->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_40->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_41->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_42->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol7 = true;

        cellcolor42 = false;
        cellcolor41 = false;
        cellcolor40 = false;
        cellcolor39 = false;
        cellcolor38 = false;
        cellcolor37 = false;

    }
}


void MainWindow::on_pushButton_20_clicked()
{

    if(level == 5 && colorcol8){
        colorcol8 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor48 = true;
            ccellcolor47 = true;
            ccellcolor46 = true;
            ccellcolor45 = true;
            ccellcolor44 = true;
            ccellcolor43 = true;

            cellcolor48 = true;
            cellcolor47 = true;
            cellcolor46 = true;
            cellcolor45 = true;
            cellcolor44 = true;
            cellcolor43 = true;

            return;
        }
        else if(bluept){

            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor48 = true;
            cellcolor47 = true;
            cellcolor46 = true;
            cellcolor45 = true;
            cellcolor44 = true;
            cellcolor43 = true;

            ccellcolor48 = false;
            ccellcolor47 = false;
            ccellcolor46 = false;
            ccellcolor45 = false;
            ccellcolor44 = false;
            ccellcolor43 = false;

            return;
        }


    }


    if(colorcol8 == true){
        ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol8 = false;

        cellcolor48 = true;
        cellcolor47 = true;
        cellcolor46 = true;
        cellcolor45 = true;
        cellcolor44 = true;
        cellcolor43 = true;

    }
    else{

        ui->cell1_43->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_44->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_45->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_46->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_47->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_48->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol8 = true;

        cellcolor48 = false;
        cellcolor47 = false;
        cellcolor46 = false;
        cellcolor45 = false;
        cellcolor44 = false;
        cellcolor43 = false;

    }
}


void MainWindow::on_pushButton_19_clicked()
{

    if(level == 5 && colorcol9){
        colorcol9 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor54 = true;
            ccellcolor53 = true;
            ccellcolor52 = true;
            ccellcolor51 = true;
            ccellcolor50 = true;
            ccellcolor49 = true;

            cellcolor54 = true;
            cellcolor53 = true;
            cellcolor52 = true;
            cellcolor51 = true;
            cellcolor50 = true;
            cellcolor49 = true;

            return;
        }
        else if(bluept){

            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor54 = true;
            cellcolor53 = true;
            cellcolor52 = true;
            cellcolor51 = true;
            cellcolor50 = true;
            cellcolor49 = true;


            ccellcolor54 = false;
            ccellcolor53 = false;
            ccellcolor52 = false;
            ccellcolor51 = false;
            ccellcolor50 = false;
            ccellcolor49 = false;
            return;
        }


    }


    if(colorcol9 == true){
        ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol9 = false;

        cellcolor54 = true;
        cellcolor53 = true;
        cellcolor52 = true;
        cellcolor51 = true;
        cellcolor50 = true;
        cellcolor49 = true;

    }
    else{

        ui->cell1_49->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_50->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_51->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_52->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_53->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_54->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol9 = true;

        cellcolor54 = false;
        cellcolor53 = false;
        cellcolor52 = false;
        cellcolor51 = false;
        cellcolor50 = false;
        cellcolor49 = false;

    }
}


void MainWindow::on_pushButton_21_clicked()
{

    if(level == 5 && colorcol10){
        colorcol10 = false;
    }

    if(level == 5 && !redpt){

        if(whitept){

            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");

            ccellcolor55 = true;
            ccellcolor56 = true;
            ccellcolor57 = true;
            ccellcolor58 = true;
            ccellcolor59 = true;
            ccellcolor60 = true;

            cellcolor55 = true;
            cellcolor56 = true;
            cellcolor57 = true;
            cellcolor58 = true;
            cellcolor59 = true;
            cellcolor60 = true;

            return;
        }
        else if(bluept){

            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


            cellcolor55 = true;
            cellcolor56 = true;
            cellcolor57 = true;
            cellcolor58 = true;
            cellcolor59 = true;
            cellcolor60 = true;

            ccellcolor55 = false;
            ccellcolor56 = false;
            ccellcolor57 = false;
            ccellcolor58 = false;
            ccellcolor59 = false;
            ccellcolor60 = false;
            return;
        }


    }

    if(colorcol10 == true){
        ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");


        colorcol10 = false;

        cellcolor55 = true;
        cellcolor56 = true;
        cellcolor57 = true;
        cellcolor58 = true;
        cellcolor59 = true;
        cellcolor60 = true;
    }
    else{

        ui->cell1_55->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_56->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_57->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_58->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_59->setStyleSheet("border-image: url(:/red.jpg)");
        ui->cell1_60->setStyleSheet("border-image: url(:/red.jpg)");


        colorcol10 = true;

        cellcolor55 = false;
        cellcolor56 = false;
        cellcolor57 = false;
        cellcolor58 = false;
        cellcolor59 = false;
        cellcolor60 = false;

    }
}



void MainWindow::on_cell1_6_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor6 = true;
            cellcolor6 = true;
        }
        else if(bluept){
            ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor6 = true;
            ccellcolor6 = false;

        }
        else if(redpt){
            ui->cell1_6->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor6 = false;
        }

        return;
    }

    if(cellcolor6 == true){
        ui->cell1_6->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor6 = false;
    }
    else{
        ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor6 = true;
    }
}



void MainWindow::on_cell1_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor1 = true;
            cellcolor1 = true;

        }
        else if(bluept){
            ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor1 = true;
            ccellcolor1 = false;

        }
        else if(redpt){
            ui->cell1->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor1 = false;
        }

        return;
    }

    if(cellcolor1 == true){
        ui->cell1->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor1 = false;
    }
    else{
        ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor1 = true;
    }
}


void MainWindow::on_cell1_2_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor2 = true;
            cellcolor2 = true;
        }
        else if(bluept){
            ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor2 = true;
            ccellcolor2 = false;

        }
        else if(redpt){
            ui->cell1_2->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor2 = false;
        }

        return;
    }

    if(cellcolor2 == true){
        ui->cell1_2->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor2 = false;
    }
    else{
        ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor2 = true;
    }
}


void MainWindow::on_cell1_3_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor3 = true;
            cellcolor3 = true;
        }
        else if(bluept){
            ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor3 = true;
            ccellcolor3 = false;

        }
        else if(redpt){
            ui->cell1_3->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor3 = false;
        }

        return;
    }

    if(cellcolor3 == true){
        ui->cell1_3->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor3 = false;
    }
    else{
        ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor3 = true;
    }
}


void MainWindow::on_cell1_4_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor4 = true;
            cellcolor4 = true;
        }
        else if(bluept){
            ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor4 = true;
            ccellcolor4 = false;

        }
        else if(redpt){
            ui->cell1_4->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor4 = false;
        }

        return;
    }

    if(cellcolor4 == true){
        ui->cell1_4->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor4 = false;
    }
    else{
        ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor4 = true;
    }
}


void MainWindow::on_cell1_5_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor5 = true;
            cellcolor5 = true;
        }
        else if(bluept){
            ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor5 = true;
            ccellcolor5 = false;

        }
        else if(redpt){
            ui->cell1_5->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor5 = false;
        }

        return;
    }

    if(cellcolor5 == true){
        ui->cell1_5->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor5 = false;
    }
    else{
        ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor5 = true;
    }
}


void MainWindow::on_cell1_9_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor9 = true;
            cellcolor9 = true;
        }
        else if(bluept){
            ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor9 = true;
            ccellcolor9 = false;

        }
        else if(redpt){
            ui->cell1_9->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor9 = false;

        }

        return;
    }

    if(cellcolor9 == true){
        ui->cell1_9->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor9 = false;
    }
    else{
        ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor9 = true;
    }
}


void MainWindow::on_cell1_10_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor10 = true;
            cellcolor10 = true;
        }
        else if(bluept){
            ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor10 = true;
            ccellcolor10 = false;

        }
        else if(redpt){
            ui->cell1_10->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor10 = false;
        }

        return;
    }

    if(cellcolor10 == true){
        ui->cell1_10->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor10 = false;
    }
    else{
        ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor10 = true;
    }
}


void MainWindow::on_cell1_11_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor11 = true;
            cellcolor11 = true;
        }
        else if(bluept){
            ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor11 = true;
            ccellcolor11 = false;

        }
        else if(redpt){
            ui->cell1_11->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor11 = false;
        }

        return;
    }

    if(cellcolor11 == true){
        ui->cell1_11->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor11 = false;
    }
    else{
        ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor11 = true;
    }
}


void MainWindow::on_cell1_7_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor7 = true;
            cellcolor7 = true;
        }
        else if(bluept){
            ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor7 = true;
            ccellcolor7 = false;

        }
        else if(redpt){
            ui->cell1_7->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor7 = false;
        }

        return;
    }

    if(cellcolor7 == true){
        ui->cell1_7->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor7 = false;
    }
    else{
        ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor7 = true;
    }
}


void MainWindow::on_cell1_8_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor8 = true;
            cellcolor8 = true;
        }
        else if(bluept){
            ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor8 = true;
            ccellcolor8 = false;

        }
        else if(redpt){
            ui->cell1_8->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor8 = false;
        }

        return;
    }

    if(cellcolor8 == true){
        ui->cell1_8->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor8 = false;
    }
    else{
        ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor8 = true;
    }
}


void MainWindow::on_cell1_12_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor12 = true;
            cellcolor12 = true;
        }
        else if(bluept){
            ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor12 = true;
            ccellcolor12 = false;

        }
        else if(redpt){
            ui->cell1_12->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor12 = false;
        }

        return;
    }

    if(cellcolor12 == true){
        ui->cell1_12->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor12 = false;
    }
    else{
        ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor12 = true;
    }
}


void MainWindow::on_cell1_15_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor15 = true;
            cellcolor15 = true;
        }
        else if(bluept){
            ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor15 = true;
            ccellcolor15 = false;

        }
        else if(redpt){
            ui->cell1_15->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor15 = false;
        }

        return;
    }

    if(cellcolor15 == true){
        ui->cell1_15->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor15 = false;
    }
    else{
        ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor15 = true;
    }
}


void MainWindow::on_cell1_17_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor17 = true;
            cellcolor17 = true;
        }
        else if(bluept){
            ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor17 = true;
            ccellcolor17 = false;

        }
        else if(redpt){
            ui->cell1_17->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor17 = false;
        }

        return;
    }

    if(cellcolor17 == true){
        ui->cell1_17->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor17 = false;
    }
    else{
        ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor17 = true;
    }
}


void MainWindow::on_cell1_16_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor16 = true;
            cellcolor16 = true;
        }
        else if(bluept){
            ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor16 = true;
            ccellcolor16 = false;

        }
        else if(redpt){
            ui->cell1_16->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor16 = false;
        }

        return;
    }

    if(cellcolor16 == true){
        ui->cell1_16->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor16 = false;
    }
    else{
        ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor16 = true;
    }
}


void MainWindow::on_cell1_13_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor13 = true;
            cellcolor13 = true;
        }
        else if(bluept){
            ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor13 = true;
            ccellcolor13 = false;

        }
        else if(redpt){
            ui->cell1_13->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor13 = false;
        }

        return;
    }

    if(cellcolor13 == true){
        ui->cell1_13->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor13 = false;
    }
    else{
        ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor13 = true;
    }
}


void MainWindow::on_cell1_14_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor14 = true;
            cellcolor14 = true;
        }
        else if(bluept){
            ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor14 = true;
            ccellcolor14 = false;

        }
        else if(redpt){
            ui->cell1_14->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor14 = false;
        }

        return;
    }

    if(cellcolor14 == true){
        ui->cell1_14->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor14 = false;
    }
    else{
        ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor14 = true;
    }
}


void MainWindow::on_cell1_18_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor18 = true;
            cellcolor18 = true;
        }
        else if(bluept){
            ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor18 = true;
            ccellcolor18 = false;

        }
        else if(redpt){
            ui->cell1_18->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor18 = false;
        }

        return;
    }

    if(cellcolor18 == true){
        ui->cell1_18->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor18 = false;
    }
    else{
        ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor18 = true;
    }
}


void MainWindow::on_cell1_24_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor24 = true;
            cellcolor24 = true;
        }
        else if(bluept){
            ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor24 = true;
            ccellcolor24 = false;

        }
        else if(redpt){
            ui->cell1_24->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor24 = false;
        }

        return;
    }

    if(cellcolor24 == true){
        ui->cell1_24->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor24 = false;
    }
    else{
        ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor24 = true;
    }
}


void MainWindow::on_cell1_20_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor20 = true;
            cellcolor20 = true;
        }
        else if(bluept){
            ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor20 = true;
            ccellcolor20 = false;

        }
        else if(redpt){
            ui->cell1_20->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor20 = false;
        }

        return;
    }

    if(cellcolor20 == true){
        ui->cell1_20->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor20 = false;
    }
    else{
        ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor20 = true;
    }
}


void MainWindow::on_cell1_19_clicked()
{


    if(level == 5){

        if(whitept){
            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor19 = true;
            cellcolor19 = true;
        }
        else if(bluept){
            ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor19 = true;
            ccellcolor19 = false;

        }
        else if(redpt){
            ui->cell1_19->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor19 = false;
        }

        return;
    }

    if(cellcolor19 == true){
        ui->cell1_19->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor19 = false;
    }
    else{
        ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor19 = true;
    }
}


void MainWindow::on_cell1_23_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor23 = true;
            cellcolor23 = true;
        }
        else if(bluept){
            ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor23 = true;
            ccellcolor23 = false;

        }
        else if(redpt){
            ui->cell1_23->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor23 = false;
        }

        return;
    }

    if(cellcolor23 == true){
        ui->cell1_23->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor23 = false;
    }
    else{
        ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor23 = true;
    }
}


void MainWindow::on_cell1_22_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor22 = true;
            cellcolor22 = true;
        }
        else if(bluept){
            ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor22 = true;
            ccellcolor22 = false;

        }
        else if(redpt){
            ui->cell1_22->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor22 = false;
        }

        return;
    }

    if(cellcolor22 == true){
        ui->cell1_22->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor22 = false;
    }
    else{
        ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor22 = true;
    }
}


void MainWindow::on_cell1_21_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor21 = true;
            cellcolor21 = true;
        }
        else if(bluept){
            ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor21 = true;
            ccellcolor21 = false;

        }
        else if(redpt){
            ui->cell1_21->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor21 = false;
        }

        return;
    }

    if(cellcolor21 == true){
        ui->cell1_21->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor21 = false;
    }
    else{
        ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor21 = true;
    }
}


void MainWindow::on_cell1_27_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor27 = true;
            cellcolor27 = true;
        }
        else if(bluept){
            ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor27 = true;
            ccellcolor27 = false;

        }
        else if(redpt){
            ui->cell1_27->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor27 = false;
        }

        return;
    }

    if(cellcolor27 == true){
        ui->cell1_27->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor27 = false;
    }
    else{
        ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor27 = true;
    }
}


void MainWindow::on_cell1_28_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor28 = true;
            cellcolor28 = true;
        }
        else if(bluept){
            ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor28 = true;
            ccellcolor28 = false;

        }
        else if(redpt){
            ui->cell1_28->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor28 = false;
        }

        return;
    }

    if(cellcolor28 == true){
        ui->cell1_28->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor28 = false;
    }
    else{
        ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor28 = true;
    }
}


void MainWindow::on_cell1_29_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor29 = true;
            cellcolor29 = true;
        }
        else if(bluept){
            ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor29 = true;
            ccellcolor29 = false;

        }
        else if(redpt){
            ui->cell1_29->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor29 = false;
        }

        return;
    }

    if(cellcolor29 == true){
        ui->cell1_29->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor29 = false;
    }
    else{
        ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor29 = true;
    }
}


void MainWindow::on_cell1_25_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor25 = true;
            cellcolor25 = true;
        }
        else if(bluept){
            ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor25 = true;
            ccellcolor25 = false;

        }
        else if(redpt){
            ui->cell1_25->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor25 = false;
        }

        return;
    }

    if(cellcolor25 == true){
        ui->cell1_25->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor25 = false;
    }
    else{
        ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor25 = true;
    }
}


void MainWindow::on_cell1_26_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor26 = true;
            cellcolor26 = true;
        }
        else if(bluept){
            ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor26 = true;
            ccellcolor26 = false;

        }
        else if(redpt){
            ui->cell1_26->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor26 = false;
        }

        return;
    }

    if(cellcolor26 == true){
        ui->cell1_26->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor26 = false;
    }
    else{
        ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor26 = true;
    }
}


void MainWindow::on_cell1_30_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor30 = true;
            cellcolor30 = true;
        }
        else if(bluept){
            ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor30 = true;
            ccellcolor30 = false;

        }
        else if(redpt){
            ui->cell1_30->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor30 = false;
        }

        return;
    }

    if(cellcolor30 == true){
        ui->cell1_30->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor30 = false;
    }
    else{
        ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor30 = true;
    }
}


void MainWindow::on_cell1_36_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor36 = true;
            cellcolor36 = true;
        }
        else if(bluept){
            ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor36 = true;
            ccellcolor36 = false;

        }
        else if(redpt){
            ui->cell1_36->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor36 = false;
        }

        return;
    }

    if(cellcolor36 == true){
        ui->cell1_36->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor36 = false;
    }
    else{
        ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor36 = true;
    }
}


void MainWindow::on_cell1_32_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor32 = true;
            cellcolor32 = true;
        }
        else if(bluept){
            ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor32 = true;
            ccellcolor32 = false;
        }
        else if(redpt){
            ui->cell1_32->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor32 = false;
        }

        return;
    }

    if(cellcolor32 == true){
        ui->cell1_32->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor32 = false;
    }
    else{
        ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor32 = true;
    }
}


void MainWindow::on_cell1_31_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor31 = true;
            cellcolor31 = true;
        }
        else if(bluept){
            ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor31 = true;
            ccellcolor31 = false;

        }
        else if(redpt){
            ui->cell1_31->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor31 = false;
        }

        return;
    }

    if(cellcolor31 == true){
        ui->cell1_31->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor31 = false;
    }
    else{
        ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor31 = true;
    }
}


void MainWindow::on_cell1_35_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor35 = true;
            cellcolor35 = true;
        }
        else if(bluept){
            ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor35 = true;
            ccellcolor35 = false;

        }
        else if(redpt){
            ui->cell1_35->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor35 = false;
        }

        return;
    }

    if(cellcolor35 == true){
        ui->cell1_35->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor35 = false;
    }
    else{
        ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor35 = true;
    }
}


void MainWindow::on_cell1_34_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor34 = true;
            cellcolor34 = true;
        }
        else if(bluept){
            ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor34 = true;
            ccellcolor34 = false;

        }
        else if(redpt){
            ui->cell1_34->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor34 = false;
        }

        return;
    }

    if(cellcolor34 == true){
        ui->cell1_34->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor34 = false;
    }
    else{
        ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor34 = true;
    }
}


void MainWindow::on_cell1_33_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor33 = true;
            cellcolor33 = true;
        }
        else if(bluept){
            ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor33 = true;
            ccellcolor33 = false;

        }
        else if(redpt){
            ui->cell1_33->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor33 = false;
        }

        return;
    }

    if(cellcolor33 == true){
        ui->cell1_33->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor33 = false;
    }
    else{
        ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor33 = true;
    }
}


void MainWindow::on_cell1_39_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor39 = true;
            cellcolor39 = true;
        }
        else if(bluept){
            ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor39 = true;
            ccellcolor39 = false;

        }
        else if(redpt){
            ui->cell1_39->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor39 = false;
        }

        return;
    }

    if(cellcolor39 == true){
        ui->cell1_39->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor39 = false;
    }
    else{
        ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor39 = true;
    }
}


void MainWindow::on_cell1_40_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor40 = true;
            cellcolor40 = true;
        }
        else if(bluept){
            ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor40 = true;
            ccellcolor40 = false;

        }
        else if(redpt){
            ui->cell1_40->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor40 = false;
        }

        return;
    }

    if(cellcolor40 == true){
        ui->cell1_40->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor40 = false;
    }
    else{
        ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor40 = true;
    }
}


void MainWindow::on_cell1_41_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor41 = true;
            cellcolor41 = true;
        }
        else if(bluept){
            ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor41 = true;
            ccellcolor41 = false;

        }
        else if(redpt){
            ui->cell1_41->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor41 = false;
        }

        return;
    }

    if(cellcolor41 == true){
        ui->cell1_41->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor41 = false;
    }
    else{
        ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor41 = true;
    }
}


void MainWindow::on_cell1_37_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor37 = true;
            cellcolor37 = true;
        }
        else if(bluept){
            ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor37 = true;
            ccellcolor37 = false;

        }
        else if(redpt){
            ui->cell1_37->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor37 = false;
        }

        return;
    }

    if(cellcolor37 == true){
        ui->cell1_37->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor37 = false;
    }
    else{
        ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor37 = true;
    }
}


void MainWindow::on_cell1_38_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor38 = true;
            cellcolor38 = true;
        }
        else if(bluept){
            ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor38 = true;
            ccellcolor38 = false;

        }
        else if(redpt){
            ui->cell1_38->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor38 = false;
        }

        return;
    }

    if(cellcolor38 == true){
        ui->cell1_38->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor38 = false;
    }
    else{
        ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor38 = true;
    }
}


void MainWindow::on_cell1_42_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor42 = true;
            cellcolor42 = true;
        }
        else if(bluept){
            ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor42 = true;
            ccellcolor42 = false;

        }
        else if(redpt){
            ui->cell1_42->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor42 = false;
        }

        return;
    }

    if(cellcolor42 == true){
        ui->cell1_42->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor42 = false;
    }
    else{
        ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor42 = true;
    }
}


void MainWindow::on_cell1_48_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor48 = true;
            cellcolor48 = true;
        }
        else if(bluept){
            ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor48 = true;
            ccellcolor48 = false;

        }
        else if(redpt){
            ui->cell1_48->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor48 = false;
        }

        return;
    }

    if(cellcolor48 == true){
        ui->cell1_48->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor48 = false;
    }
    else{
        ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor48 = true;
    }
}


void MainWindow::on_cell1_44_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor44 = true;
            cellcolor44 = true;
        }
        else if(bluept){
            ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor44 = true;
            ccellcolor44 = false;

        }
        else if(redpt){
            ui->cell1_44->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor44 = false;
        }

        return;
    }

    if(cellcolor44 == true){
        ui->cell1_44->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor44 = false;
    }
    else{
        ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor44 = true;
    }
}


void MainWindow::on_cell1_43_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor43 = true;
            cellcolor43 = true;
        }
        else if(bluept){
            ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor43 = true;
            ccellcolor43 = false;

        }
        else if(redpt){
            ui->cell1_43->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor43 = false;
        }

        return;
    }

    if(cellcolor43 == true){
        ui->cell1_43->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor43 = false;
    }
    else{
        ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor43 = true;
    }
}


void MainWindow::on_cell1_47_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor47 = true;
            cellcolor47 = true;
        }
        else if(bluept){
            ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor47 = true;
            ccellcolor47 = false;

        }
        else if(redpt){
            ui->cell1_47->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor47 = false;
        }

        return;
    }

    if(cellcolor47 == true){
        ui->cell1_47->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor47 = false;
    }
    else{
        ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor47 = true;
    }
}


void MainWindow::on_cell1_46_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor46 = true;
            cellcolor46 = true;
        }
        else if(bluept){
            ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor46 = true;
            ccellcolor46 = false;

        }
        else if(redpt){
            ui->cell1_46->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor46 = false;
        }

        return;
    }

    if(cellcolor46 == true){
        ui->cell1_46->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor46 = false;
    }
    else{
        ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor46 = true;
    }
}


void MainWindow::on_cell1_45_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor45 = true;
            cellcolor45 = true;
        }
        else if(bluept){
            ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor45 = true;
            ccellcolor45 = false;

        }
        else if(redpt){
            ui->cell1_45->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor45 = false;
        }

        return;
    }

    if(cellcolor45 == true){
        ui->cell1_45->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor45 = false;
    }
    else{
        ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor45 = true;
    }
}


void MainWindow::on_cell1_51_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor51 = true;
            cellcolor51 = true;
        }
        else if(bluept){
            ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor51 = true;
            ccellcolor51 = false;

        }
        else if(redpt){
            ui->cell1_51->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor51 = false;
        }

        return;
    }

    if(cellcolor51 == true){
        ui->cell1_51->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor51 = false;
    }
    else{
        ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor51 = true;
    }
}


void MainWindow::on_cell1_52_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor52 = true;
            cellcolor52 = true;
        }
        else if(bluept){
            ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor52 = true;
            ccellcolor52 = false;

        }
        else if(redpt){
            ui->cell1_52->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor52 = false;
        }

        return;
    }

    if(cellcolor52 == true){
        ui->cell1_52->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor52 = false;
    }
    else{
        ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor52 = true;
    }
}


void MainWindow::on_cell1_53_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor53 = true;
            cellcolor53 = true;
        }
        else if(bluept){
            ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor53 = true;
            ccellcolor53 = false;

        }
        else if(redpt){
            ui->cell1_53->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor53 = false;
        }

        return;
    }

    if(cellcolor53 == true){
        ui->cell1_53->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor53 = false;
    }
    else{
        ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor53 = true;
    }
}


void MainWindow::on_cell1_49_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor49 = true;
            cellcolor49 = true;
        }
        else if(bluept){
            ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor49 = true;
            ccellcolor49 = false;

        }
        else if(redpt){
            ui->cell1_49->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor49 = false;
        }

        return;
    }

    if(cellcolor49 == true){
        ui->cell1_49->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor49 = false;
    }
    else{
        ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor49 = true;
    }
}


void MainWindow::on_cell1_50_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor50 = true;
            cellcolor50 = true;
        }
        else if(bluept){
            ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor50 = true;
            ccellcolor50 = false;

        }
        else if(redpt){
            ui->cell1_50->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor50 = false;
        }

        return;
    }

    if(cellcolor50 == true){
        ui->cell1_50->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor50 = false;
    }
    else{
        ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor50 = true;
    }
}


void MainWindow::on_cell1_54_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor54 = true;
            cellcolor54 = true;
        }
        else if(bluept){
            ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor54 = true;
            ccellcolor54 = false;

        }
        else if(redpt){
            ui->cell1_54->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor54 = false;
        }

        return;
    }

    if(cellcolor54 == true){
        ui->cell1_54->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor54 = false;
    }
    else{
        ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor54 = true;
    }
}


void MainWindow::on_cell1_60_clicked()
{


    if(level == 5){

        if(whitept){
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor60 = true;
            cellcolor60 = true;
        }
        else if(bluept){
            ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor60 = true;
            ccellcolor60 = false;

        }
        else if(redpt){
            ui->cell1_60->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor60 = false;
        }

        return;
    }

    if(cellcolor60 == true){
        ui->cell1_60->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor60 = false;
    }
    else{
        ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor60 = true;
    }
}


void MainWindow::on_cell1_56_clicked()
{


    if(level == 5){

        if(whitept){
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor56 = true;
            cellcolor56 = true;
        }
        else if(bluept){
            ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor56 = true;
            ccellcolor56 = false;

        }
        else if(redpt){
            ui->cell1_56->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor56 = false;
        }

        return;
    }

    if(cellcolor56 == true){
        ui->cell1_56->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor56 = false;
    }
    else{
        ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor56 = true;
    }
}


void MainWindow::on_cell1_55_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor55 = true;
            cellcolor55 = true;
        }
        else if(bluept){
            ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor55 = true;
            ccellcolor55 = false;

        }
        else if(redpt){
            ui->cell1_55->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor55 = false;
        }

        return;
    }

    if(cellcolor55 == true){
        ui->cell1_55->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor55 = false;
    }
    else{
        ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor55 = true;
    }
}


void MainWindow::on_cell1_59_clicked()
{
    if(level == 5){

        if(whitept){
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor59 = true;
            cellcolor59 = true;
        }
        else if(bluept){
            ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor59 = true;
            ccellcolor59 = false;

        }
        else if(redpt){
            ui->cell1_59->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor59 = false;
        }

        return;
    }

    if(cellcolor59 == true){
        ui->cell1_59->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor59 = false;
    }
    else{
        ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor59 = true;
    }
}


void MainWindow::on_cell1_58_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor58 = true;
            cellcolor58 = true;
        }
        else if(bluept){
            ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor58 = true;
            ccellcolor58 = false;

        }
        else if(redpt){
            ui->cell1_58->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor58 = false;
        }

        return;
    }

    if(cellcolor58 == true){
        ui->cell1_58->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor58 = false;
    }
    else{
        ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor58 = true;
    }
}


void MainWindow::on_cell1_57_clicked()
{

    if(level == 5){

        if(whitept){
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
            ccellcolor57 = true;
            cellcolor57 = true;
        }
        else if(bluept){
            ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
            cellcolor57 = true;
            ccellcolor57 = false;

        }
        else if(redpt){
            ui->cell1_57->setStyleSheet("border-image: url(:/red.jpg)");
            cellcolor57 = false;

        }

        return;
    }

    if(cellcolor57 == true){
        ui->cell1_57->setStyleSheet("border-image: url(:/red.jpg)");
        cellcolor57 = false;
    }
    else{
        ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
        cellcolor57 = true;
    }
}


void MainWindow::on_pushButton_3_clicked()
{

        int num = calc_boxes();
        int num5 = calc_lvl5();

        if(level == 1 || level == 2){
        if(rdm == num){
            ui->pushButton_3->setStyleSheet("border-image: url(:/star.png)");
            level1stage1 = true;
            setTable1();

        }
        else{
            QMessageBox oops;
            oops.setIcon(QMessageBox::Question);
            oops.setText("Ooops... Looks like your answer is wrong :( Maybe take a deep breath and try again?");
            oops.exec();
            }
        }
        if(level == 3 || level == 4){
        if(60 - rdm == num){
            ui->pushButton_3->setStyleSheet("border-image: url(:/star.png)");
            level1stage1 = true;
            setTable1();

        }
        else{
            QMessageBox oops;
            oops.setIcon(QMessageBox::Question);
            oops.setText("Ooops... Looks like your answer is wrong :( Maybe take a deep breath and try again?");
            oops.exec();
            }
        }
        if(level == 5){

            if(num == rdm1 && num5 == rdm){

                ui->pushButton_3->setStyleSheet("border-image: url(:/star.png)");
                level1stage1 = true;
                setTable1();

                bluepoint = 0;

            }
            else{
                QMessageBox oops;
                oops.setIcon(QMessageBox::Question);
                oops.setText("Ooops... Looks like your answer is wrong :( Maybe take a deep breath and try again?");
                oops.exec();
            }
        }

}

int calc_boxes(){

    int num = 0;
    if(cellcolor1 == false){
        num++;
    }
    if(cellcolor2 == false){
        num++;
    }    if(cellcolor3 == false){
        num++;
    }    if(cellcolor4 == false){
        num++;
    }    if(cellcolor5 == false){
        num++;
    }    if(cellcolor6 == false){
        num++;
    }    if(cellcolor7 == false){
        num++;
    }    if(cellcolor8 == false){
        num++;
    }    if(cellcolor9 == false){
        num++;
    }    if(cellcolor10 == false){
        num++;
    }    if(cellcolor11 == false){
        num++;
    }    if(cellcolor12 == false){
        num++;
    }    if(cellcolor13 == false){
        num++;
    }    if(cellcolor14 == false){
        num++;
    }    if(cellcolor15 == false){
        num++;
    }    if(cellcolor16 == false){
        num++;
    }    if(cellcolor17 == false){
        num++;
    }    if(cellcolor18 == false){
        num++;
    }    if(cellcolor19 == false){
        num++;
    }    if(cellcolor20 == false){
        num++;
    }    if(cellcolor21 == false){
        num++;
    }    if(cellcolor22 == false){
        num++;
    }    if(cellcolor23 == false){
        num++;
    }    if(cellcolor24 == false){
        num++;
    }    if(cellcolor25 == false){
        num++;
    }    if(cellcolor26 == false){
        num++;
    }    if(cellcolor27 == false){
        num++;
    }    if(cellcolor28 == false){
        num++;
    }    if(cellcolor29 == false){
        num++;
    }    if(cellcolor30 == false){
        num++;
    }    if(cellcolor31 == false){
        num++;
  }
    if(cellcolor32 == false){
        num++;
    }    if(cellcolor33 == false){
        num++;
    }    if(cellcolor34 == false){
        num++;
    }    if(cellcolor35 == false){
        num++;
    }    if(cellcolor36 == false){
        num++;
    }    if(cellcolor37 == false){
        num++;
    }    if(cellcolor38 == false){
        num++;
    }    if(cellcolor39 == false){
        num++;
    }    if(cellcolor40 == false){
        num++;
    }    if(cellcolor41 == false){
        num++;
    }    if(cellcolor42 == false){
        num++;
    }    if(cellcolor43 == false){
        num++;
    }    if(cellcolor44 == false){
        num++;
    }    if(cellcolor45 == false){
        num++;
    }    if(cellcolor46 == false){
        num++;
    }    if(cellcolor47 == false){
        num++;
    }    if(cellcolor48 == false){
        num++;
    }    if(cellcolor49 == false){
        num++;
    }    if(cellcolor50 == false){
        num++;
    }    if(cellcolor51 == false){
        num++;
    }    if(cellcolor52 == false){
        num++;
    }
    if(cellcolor53 == false){
        num++;
    }    if(cellcolor54 == false){
        num++;
    }    if(cellcolor55 == false){
        num++;
    }    if(cellcolor56 == false){
        num++;
    }    if(cellcolor57 == false){
        num++;
    }    if(cellcolor58 == false){
        num++;
    }    if(cellcolor59 == false){
        num++;
    }    if(cellcolor60 == false){
        num++;
    }

    return num;

}


void MainWindow::on_textEdit_2_textChanged()
{
    if(!level1stage2 && !(ui->textEdit_2->toPlainText() == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Bar Model to proceed");
        box.exec();

        ui->textEdit_2->setText("");

    }
}


void MainWindow::on_textEdit_3_textChanged()
{
    if(!level1stage2 && !(ui->textEdit_3->toPlainText() == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Bar Model to proceed");
        box.exec();

        ui->textEdit_3->setText("");

    }
}


void MainWindow::on_pushButton_clicked()
{    

    int x = ui->textEdit->toPlainText().toInt();
    int y = ui->textEdit_2->toPlainText().toInt();
    int z = ui->textEdit_3->toPlainText().toInt();

    QString l1 = ui->textEdit->toPlainText();

    QString l3 = ui->textEdit_3->toPlainText();
    QString l2 = ui->textEdit_2->toPlainText();

    if(level == 1 || level == 2){
    if((x - y) == (60 - rdm) && x == 60 && (l3 == "" || l3 == "?")){
        ui->pushButton->setStyleSheet("border-image: url(:/star.png)");
        level1stage3 = true;
        setTable1();

    }
    else{
    QMessageBox box;
    box.setIcon(QMessageBox::Question);
    box.setText("You should show the numbers which are in the problem on the boxes in the correct order. Try again, I beleive in you!");
    box.exec();
}

    }
    else if(level == 3 || level == 4){

        if((x - z) == (60 - rdm) && x == 60 && (l2 == "" || l2 == "?")){
            ui->pushButton->setStyleSheet("border-image: url(:/star.png)");
            level1stage3 = true;
            setTable1();

        }
        else{
        QMessageBox box;
        box.setIcon(QMessageBox::Question);
        box.setText("You should show the numbers, which are in the problem, on the boxes in the correct order. Try again, I beleive in you!");
        box.exec();
    }
    }
    else if(level == 5){

        if((l1 == "?" || l1 == "" || l1 == " ") && z == rdm && y == rdm1){

            ui->pushButton->setStyleSheet("border-image: url(:/star.png)");
            level1stage3 = true;
            setTable1();

        }
        else{
            QMessageBox box;
            box.setIcon(QMessageBox::Question);
            box.setText("You should show the numbers, which are in the problem, on the boxes in the correct order. Try again, I beleive in you!");
            box.exec();
        }


    }
}


void MainWindow::on_pushButton_2_clicked()
{

    int x = ui->lineEdit->text().toInt();
    int y = ui->lineEdit_2->text().toInt();
    int z = ui->lineEdit_3->text().toInt();
    QString l3 = ui->lineEdit_3->text();
    QString l2 = ui->lineEdit_2->text();
    QString l1 = ui->lineEdit->text();

if(level == 1 || level == 2){
    if((x - y) == (60 - rdm) && x == 60 && (l3 == "" || l3 == "?")){
        ui->pushButton_2->setStyleSheet("border-image: url(:/star.png)");
        level1stage2 = true;
        setTable1();

    }
    else{

        QMessageBox box;
        box.setIcon(QMessageBox::Question);
        box.setText("You should show the numbers which are in the problem on the Bar Model. The top bar is for the target number and the bottom-left bar is for the subtracting number. Try again, I beleive in you!");
        box.exec();

    }
}
else if(level == 3 || level == 4){

    if(x == 60 && z == (rdm) && (l2 == "" || l2 == "?")){
        ui->pushButton_2->setStyleSheet("border-image: url(:/star.png)");
        level1stage2 = true;
        setTable1();

    }
    else{
        QMessageBox box;
        box.setIcon(QMessageBox::Question);
        box.setText("You should show the numbers which are in the problem on the Bar Model. The top bar is for the target number and the bottom-left bar is for the subtracting number. Try again, I beleive in you!");
        box.exec();
    }
}
else if(level == 5){

    if((l1 == "?" || l1 == "" || l1 == " ") && z == rdm && y == rdm1){

        ui->pushButton_2->setStyleSheet("border-image: url(:/star.png)");
        level1stage2 = true;
        setTable1();

    }
    else{
        QMessageBox box;
        box.setIcon(QMessageBox::Question);
        box.setText("You should show the numbers which are in the problem on the Bar Model. The top bar is for the target number and the bottom-left bar is for the subtracting number. Try again, I beleive in you!");
        box.exec();
    }
}


}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{


    if(!level1stage1 && !(arg1 == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Game Board to proceed");
        box.exec();

        ui->lineEdit->setText("");

    }
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    if(!level1stage1 && !(arg1 == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Game Board to proceed");
        box.exec();

        ui->lineEdit_2->setText("");

    }
}


void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    if(!level1stage3 && !(arg1 == "")){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Number Sentence to proceed");
        box.exec();

        ui->lineEdit_4->setText("");

    }
}


void MainWindow::on_pushButton_10_clicked()
{
    int y = ui->lineEdit_4->text().toInt();

if(level == 1 || level == 2){
 if(!(60 - y == rdm)){
     QMessageBox box;
     box.setIcon(QMessageBox::Question);
     box.setText("Go for the result after the subtraction this time. You have completed the hard parts, this is nothing!");
     box.exec();
     return;
 }
}
if(level == 3 || level == 4){
 if(!(60 - y == rdm)){
     QMessageBox box;
     box.setIcon(QMessageBox::Question);
     box.setText("Go for the unknown this time. You have completed the hard parts, this is nothing!");
     box.exec();
     return;
 }
}
if(level == 5){

    if(!(y == rdm + rdm1)){
        QMessageBox box;
        box.setIcon(QMessageBox::Question);
        box.setText("Go for the unknown this time. You have completed the hard parts, this is nothing!");
        box.exec();
        return;
    }

}


        ui->pushButton_10->setStyleSheet("border-image: url(:/star.png)");

        level1stage1 = false;
        level1stage2 = false;
        level1stage3 = false;

        QString more = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>Complete This Level </span><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#1a5fb4;'>" + QString::number(6 - roundcount) + "</span><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'> More</span></p></body></html>";

        if(roundcount == 1){
        ui->line_6->hide();
        score1 = true;
        setTable1();
}
        else if(roundcount == 2){
        ui->line_2->hide();
        score2 = true;
        setTable1();

        }
        else if(roundcount == 3){
        ui->line_5->hide();
        score3 = true;
        setTable1();

        }
        else if(roundcount == 4){
        ui->line->hide();
        score4 = true;
        setTable1();

        }
        else if(roundcount == 5){
        ui->line_3->hide();
        score5 = true;
        setTable1();

        }
        else if(roundcount == 6){
        ui->line_4->hide();
        more = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>You have Completed Level " + QString::number(level) + "</span><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#1a5fb4;'></span><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'></span></p></body></html>";
        ui->label_9->hide();
        score6 = true;
        setTable1();

        if(level == 3){
            ui->label_10->show();
        }

        }


        ui->levels->setCurrentIndex(3);

        ui->label_8->setText(more);

}

void MainWindow::on_pushButton_11_clicked()
{


    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText("Complete");

    if(roundcount == 6){

        if(level == 1){
        level = 2;
        rdm = rndm(20, 40);
        ui->levels->setCurrentIndex(0);

        QString label9 = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>Time(s) To Unlock The Picture</span></p></body></html>";

        ui->label_9->setText(label9);
        ui->tableWidget_2->setItem(0, 0, item);

        reset();
        roundcount = 1;

        }
        else if(level == 2){
        level = 3;
        rdm = rndm(45, 60);
        ui->levels->setCurrentIndex(0);
        ui->label_9->show();

        QString label9 = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>Time(s) To Unlock The Picture</span></p></body></html>";
        ui->label_9->setText(label9);
        ui->tableWidget_2->setItem(0, 1, item);

        reset();
        roundcount = 1;

    }
        else if(level == 3){
        level = 4;
        rdm = rndm(20, 45);
        ui->levels->setCurrentIndex(0);
        ui->label_9->show();
        QString label9 = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>Time(s) To Unlock The Picture</span></p></body></html>";
        ui->label_9->setText(label9);
        ui->label_10->hide();

        ui->tableWidget_2->setItem(0, 2, item);

        reset();
        roundcount = 1;
    }
        else if(level == 4){
        level = 5;
        rdm = rndm(20, 30);
        rdm1 = rndm(20, 30);
        ui->levels->setCurrentIndex(0);
        ui->label_9->show();
        QString label9 = "<html><head/><body><p><span style=' font-size:36pt; font-weight:600; font-style:italic; color:#613583;'>Time(s) To Unlock The Picture</span></p></body></html>";
        ui->label_9->setText(label9);
        ui->tableWidget_2->setItem(0, 3, item);

        reset();
        roundcount = 1;
    }
        ui->line->show();
        ui->line_2->show();
        ui->line_3->show();
        ui->line_4->show();
        ui->line_5->show();
        ui->line_6->show();

    }
    else{

        if(level ==  1){

            rdm = rndm(1, 15);

            ui->levels->setCurrentIndex(0);

            reset();

            roundcount++;
        }
        if(level == 2){

            rdm = rndm(20, 40);

            ui->levels->setCurrentIndex(0);

            reset();

            roundcount++;
        }
        if(level == 3){

            rdm = rndm(45, 60);

            ui->levels->setCurrentIndex(0);

            reset();

            roundcount++;
        }
        if(level == 4){

            rdm = rndm(20, 45);

            ui->levels->setCurrentIndex(0);

            reset();

            roundcount++;
        }
        if(level == 5){

            rdm = rndm(20, 30);
            rdm1 = rndm(20, 30);

            ui->levels->setCurrentIndex(0);

            reset();

            roundcount++;


        }

    }
}

void MainWindow::reset(){




if(level == 1 || level == 2){

    if(roundcount == 6){
        ui->line->show();
        ui->line_2->show();
        ui->line_3->show();
        ui->line_4->show();
        ui->line_5->show();
        ui->line_6->show();

        if(level == 2)
            ui->textBrowser->setStyleSheet("background: none; border-image: url(:/owl.png)");

        score1 = false;
        score2 = false;
        score3 = false;
        score4 = false;
        score5 = false;
        score6 = false;

        level1stage1 = false;
        level1stage2 = false;
        level1stage3 = false;
        flrst = true;

        rsttbl = false;

        setTable1();
    }


    // bar model
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");


    // number sentence
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");


    // final answer
    ui->lineEdit_4->setText("");

    ui->pushButton->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_2->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_3->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_10->setStyleSheet("border-image: url(:/quiz.png)");

    // and for           2
    QString questionlevel1 = "<html><head/><body><p><span style=' font-size:14pt; color:#f6f5f4;'>and the magic numbers are </span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'>60 </span><span style=' font-size:14pt; color:#f6f5f4;'>and</span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'> " + QString::number(rdm) + " </span><span style=' font-size:14pt; color:#f6f5f4;'>. Can you help him? </span></p></body></html>";
    ui->label_7->setText(questionlevel1);

    resetgb();

    if(level == 2){
        ui->label_9->show();
    }
    lvl5rst = false;

}
if(level == 3 || level == 4){

    if(roundcount == 6){
        ui->line->show();
        ui->line_2->show();
        ui->line_3->show();
        ui->line_4->show();
        ui->line_5->show();
        ui->line_6->show();

        if(level == 3){
            ui->textBrowser->setStyleSheet("background: none; border-image: url(:/differentletter.jpg)");

        }
        if(level == 4){
            ui->textBrowser->setStyleSheet("background: none; border-image: url(:/panda.png)");
        }

        score1 = false;
        score2 = false;
        score3 = false;
        score4 = false;
        score5 = false;
        score6 = false;

        level1stage1 = false;
        level1stage2 = false;
        level1stage3 = false;
        flrst = true;
        rsttbl = false;

        setTable1();
            }

    // bar model
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");


    // number sentence
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");


    // final answer
    ui->lineEdit_4->setText("");

    ui->pushButton->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_2->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_3->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_10->setStyleSheet("border-image: url(:/quiz.png)");

    // and for           4
    QString questionlevel3 = "<html><head/><body><p><span style=' font-size:14pt; color:#f6f5f4;'>and the magic numbers are </span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'>60 </span><span style=' font-size:14pt; color:#f6f5f4;'>and</span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'> " + QString::number(rdm) + " </span><span style=' font-size:14pt; color:#f6f5f4;'>. Can you help him? </span></p></body></html>";
    ui->label_7->setText(questionlevel3);

    resetgb();

    if(level == 4){
        ui->label_9->show();
    }
lvl5rst = false;
}
if(level == 5){


    rdm1 = rndm(20, 30);
    rdm = rndm(20, 30);

    // bar model
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");


    // number sentence
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");


    // final answer
    ui->lineEdit_4->setText("");

    ui->pushButton->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_2->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_3->setStyleSheet("border-image: url(:/quiz.png)");
    ui->pushButton_10->setStyleSheet("border-image: url(:/quiz.png)");


    QString questionlevel5 = "<html><head/><body><p><span style=' font-size:14pt; color:#f6f5f4;'>and the magic numbers are </span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'>" + QString::number(rdm1) + " </span><span style=' font-size:14pt; color:#f6f5f4;'>and</span><span style=' font-size:14pt; font-weight:600; text-decoration: underline; color:#f6f5f4;'> " + QString::number(rdm) + " </span><span style=' font-size:14pt; color:#f6f5f4;'>. Can you help him? </span></p></body></html>";
    ui->label_7->setText(questionlevel5);

    ui->pushButton_13->show();
    ui->pushButton_14->show();
    ui->pushButton_15->show();

    ui->game3_2->show();

    lvl5rst = true;

    score1 = false;
    score2 = false;
    score3 = false;
    score4 = false;
    score5 = false;
    score6 = false;

    level1stage1 = false;
    level1stage2 = false;
    level1stage3 = false;
    flrst = true;
    rsttbl = false;

    setTable1();

    resetgb();
}

}

void MainWindow::resetgb(){


    ui->cell1->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor1 = true;
    ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor2 = true;
    ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor3 = true;
    ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor4 = true;
    ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor4 = true;
    ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor5 = true;
    ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor6 = true;
    ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor7 = true;
    ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor8 = true;
    ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor9 = true;
    ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor10 = true;
    ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor11 = true;
    ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor12 = true;
    ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor13 = true;
    ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor14 = true;
    ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor15 = true;
    ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor16 = true;
    ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor17 = true;
    ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor18 = true;
    ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor19 = true;
    ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor20 = true;
    ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor21 = true;
    ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor22 = true;
    ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor23 = true;
    ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor24 = true;
    ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor25 = true;
    ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor26 = true;
    ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor27 = true;
    ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor28 = true;
    ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor29 = true;
    ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor30 = true;
    ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor31 = true;
    ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor32 = true;
    ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor33 = true;
    ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor34 = true;
    ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor35 = true;
    ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor36 = true;
    ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor37 = true;
    ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor38 = true;
    ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor39 = true;
    ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor40 = true;
    ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor41 = true;
    ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor42 = true;
    ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor43 = true;
    ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor44 = true;
    ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor45 = true;
    ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor46 = true;
    ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor47 = true;
    ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor48 = true;
    ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor49 = true;
    ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor50 = true;
    ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor51 = true;
    ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor52 = true;
    ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor53 = true;
    ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor54 = true;
    ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor55 = true;
    ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor56 = true;
    ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor57 = true;
    ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor58 = true;
    ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor59 = true;
    ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(26, 95, 180)");
    cellcolor60 = true;

    colorrow1 = false;
    colorrow2 = false;
    colorrow3 = false;
    colorrow4 = false;
    colorrow5 = false;
    colorrow6 = false;

    colorcol1 = false;
    colorcol2 = false;
    colorcol3 = false;
    colorcol4 = false;
    colorcol5 = false;
    colorcol6 = false;
    colorcol7 = false;
    colorcol8 = false;
    colorcol9 = false;
    colorcol10= false;



    if(lvl5rst){

        ui->cell1->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_2->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_3->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_4->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_5->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_6->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_7->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_8->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_9->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_10->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_11->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_12->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_13->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_14->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_15->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_16->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_17->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_18->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_19->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_20->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_21->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_22->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_23->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_24->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_25->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_26->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_27->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_28->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_29->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_30->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_31->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_32->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_33->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_34->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_35->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_36->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_37->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_38->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_39->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_40->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_41->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_42->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_43->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_44->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_45->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_46->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_47->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_48->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_49->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_50->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_51->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_52->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_53->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_54->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_55->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_56->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_57->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_58->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_59->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");
        ui->cell1_60->setStyleSheet("border-image: none; background-color: rgb(255, 255, 255)");


        colorrow1 = false;
        colorrow2 = false;
        colorrow3 = false;
        colorrow4 = false;
        colorrow5 = false;
        colorrow6 = false;

        colorcol1 = false;
        colorcol2 = false;
        colorcol3 = false;
        colorcol4 = false;
        colorcol5 = false;
        colorcol6 = false;
        colorcol7 = false;
        colorcol8 = false;
        colorcol9 = false;
        colorcol10= false;


         ccellcolor60 = true;
         ccellcolor59 = true;
         ccellcolor58 = true;
         ccellcolor57 = true;
         ccellcolor56 = true;
         ccellcolor55 = true;
         ccellcolor54 = true;
         ccellcolor53 = true;
         ccellcolor52 = true;
         ccellcolor51 = true;
         ccellcolor50 = true;
         ccellcolor49 = true;
         ccellcolor48 = true;
         ccellcolor47 = true;
         ccellcolor46 = true;
         ccellcolor45 = true;
         ccellcolor44 = true;
         ccellcolor43 = true;
         ccellcolor42 = true;
         ccellcolor41 = true;
         ccellcolor40 = true;
         ccellcolor39 = true;
         ccellcolor38 = true;
         ccellcolor37 = true;
         ccellcolor36 = true;
         ccellcolor35 = true;
         ccellcolor34 = true;
         ccellcolor33 = true;
         ccellcolor32 = true;
         ccellcolor31 = true;
         ccellcolor30 = true;
         ccellcolor29 = true;
         ccellcolor28 = true;
         ccellcolor27 = true;
         ccellcolor26 = true;
         ccellcolor25 = true;
         ccellcolor24 = true;
         ccellcolor23 = true;
         ccellcolor22 = true;
         ccellcolor21 = true;
         ccellcolor20 = true;
         ccellcolor19 = true;
         ccellcolor18 = true;
         ccellcolor17 = true;
         ccellcolor16 = true;
         ccellcolor15 = true;
         ccellcolor14 = true;
         ccellcolor13 = true;
         ccellcolor12 = true;
         ccellcolor11 = true;
         ccellcolor10 = true;
         ccellcolor9 = true;
         ccellcolor8 = true;
         ccellcolor7 = true;
         ccellcolor6 = true;
         ccellcolor5 = true;
         ccellcolor4 = true;
         ccellcolor3 = true;
         ccellcolor2 = true;
         ccellcolor1 = true;

    }

}


void MainWindow::levelinitializer(){

    setTable1();


    ui->game3_2->hide();
    ui->pushButton_13->hide();
    ui->pushButton_14->hide();
    ui->pushButton_15->hide();

   switch(level){

    case 1: {
        rdm = rndm(1, 15);
        ui->textBrowser->setStyleSheet("background: none; border-image: url(:/gens.png)");

        lvl5rst = false;
        resetgb();

        ui->line->show();
        ui->line_2->show();
        ui->line_3->show();
        ui->line_4->show();
        ui->line_5->show();
        ui->line_6->show();

        ui->textBrowser_2->hide();
        ui->textBrowser_3->hide();
        ui->textBrowser_4->hide();
        break;

    }
    case 2: {

        rdm = rndm(20, 40);
        ui->textBrowser->setStyleSheet("background: none; border-image: url(:/owl.png)");

        lvl5rst = false;
        resetgb();

        ui->textBrowser_2->hide();
        ui->textBrowser_3->hide();
        ui->textBrowser_4->hide();


        ui->line->show();
        ui->line_2->show();
        ui->line_3->show();
        ui->line_4->show();
        ui->line_5->show();
        ui->line_6->show();

        break;

    }
    case 3: {

    rdm = rndm(45, 60);

    ui->textBrowser->setStyleSheet("background: none; border-image: url(:/differentletter.jpg)");


    QString styl2 = "border-image: none; background-color: rgb(222, 221, 218); font: 75 italic 30pt bold 'Cantarell'";
    ui->lineEdit_2->setStyleSheet(styl2);

    ui->lineEdit_3->setText("");
    ui->textBrowser_2->hide();
    ui->textBrowser_3->hide();
    ui->textBrowser_4->hide();
    lvl5rst = false;
    resetgb();
    break;

    }
    case 4: {

       rdm = rndm(20, 45);

       ui->textBrowser->setStyleSheet("background: none; border-image: url(:/wordgame.jpg)");

       ui->textBrowser_2->hide();
       ui->textBrowser_3->hide();
       ui->textBrowser_4->hide();
       QString styl2 = "border-image: none; background-color: rgb(222, 221, 218); font: 75 italic 30pt bold 'Cantarell'";
       ui->lineEdit_2->setStyleSheet(styl2);

       ui->lineEdit_3->setText("");
       lvl5rst = false;
       resetgb();

       ui->line->show();
       ui->line_2->show();
       ui->line_3->show();
       ui->line_4->show();
       ui->line_5->show();
       ui->line_6->show();


       break;

    }
    case 5: {

    ui->textBrowser->setStyleSheet("background: none; border-image: url(:/panda.png)");

    ui->textBrowser_3->show();

    ui->line->show();
    ui->line_2->show();
    ui->line_3->show();
    ui->line_4->show();
    ui->line_5->show();
    ui->line_6->show();

    redpt = true;

break;

    }
    default:
       // should be never reached
       qDebug("You shouldn't be seeing this, check out the level number while arriving at this point");
      break;

    }

   reset();
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
  //  if(level == 1 || level == 2)
  //      return;

    if(!level1stage1){
        QMessageBox box;
        box.setIcon(QMessageBox::Warning);
        box.setText("Please complete the Game Board before coming here!");
    }
}


void MainWindow::on_scoreboard_clicked()
{
    ui->levels->setCurrentIndex(2);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->levels->setCurrentIndex(0);
}


void MainWindow::setTable1(){

    QTableWidgetItem *itemPass = new QTableWidgetItem;
    itemPass->setText("Good Job");

    QTableWidgetItem *itemNot = new QTableWidgetItem;
    itemNot->setText("???");

    QTableWidgetItem *itemPass1 = new QTableWidgetItem;
    itemPass1->setText("Good Job");

    QTableWidgetItem *itemNot1 = new QTableWidgetItem;
    itemNot1->setText("???");

    QTableWidgetItem *itemPass2 = new QTableWidgetItem;
    itemPass2->setText("Good Job");

    QTableWidgetItem *itemNot2 = new QTableWidgetItem;
    itemNot2->setText("???");

    QTableWidgetItem *itemPass3 = new QTableWidgetItem;
    itemPass3->setText("Good Job");

    QTableWidgetItem *itemNot3 = new QTableWidgetItem;
    itemNot3->setText("???");

    QTableWidgetItem *itemPass4 = new QTableWidgetItem;
    itemPass4->setText("Good Job");

    QTableWidgetItem *itemNot4 = new QTableWidgetItem;
    itemNot4->setText("???");

    QTableWidgetItem *itemPass5 = new QTableWidgetItem;
    itemPass5->setText("Good Job");

    QTableWidgetItem *itemNot5 = new QTableWidgetItem;
    itemNot5->setText("???");

    QTableWidgetItem *itemPass6 = new QTableWidgetItem;
    itemPass6->setText("Good Job");

    QTableWidgetItem *itemNot6 = new QTableWidgetItem;
    itemNot6->setText("???");

    QTableWidgetItem *itemPass7 = new QTableWidgetItem;
    itemPass7->setText("Good Job");

    QTableWidgetItem *itemNot7 = new QTableWidgetItem;
    itemNot7->setText("???");

    QTableWidgetItem *itemPass8 = new QTableWidgetItem;
    itemPass8->setText("Good Job");

    QTableWidgetItem *itemNot8 = new QTableWidgetItem;
    itemNot8->setText("???");

    QTableWidgetItem *itemPass9 = new QTableWidgetItem;
    itemPass9->setText("Good Job");

    QTableWidgetItem *itemNot9 = new QTableWidgetItem;
    itemNot9->setText("???");

    QTableWidgetItem *itemPassa = new QTableWidgetItem;
    itemPassa->setText("Good Job");

    QTableWidgetItem *itemNota = new QTableWidgetItem;
    itemNota->setText("???");

    QTableWidgetItem *itemPassb = new QTableWidgetItem;
    itemPassb->setText("Good Job");

    QTableWidgetItem *itemNotb = new QTableWidgetItem;
    itemNotb->setText("???");

    QTableWidgetItem *itemPassc = new QTableWidgetItem;
    itemPassc->setText("Good Job");

    QTableWidgetItem *itemNotc = new QTableWidgetItem;
    itemNotc->setText("???");

    QTableWidgetItem *itemPassd = new QTableWidgetItem;
    itemPassd->setText("Good Job");

    QTableWidgetItem *itemNotd = new QTableWidgetItem;
    itemNotd->setText("???");

    QTableWidgetItem *itemPasse = new QTableWidgetItem;
    itemPasse->setText("Good Job");

    QTableWidgetItem *itemNote = new QTableWidgetItem;
    itemNote->setText("???");

    QTableWidgetItem *itemPassf = new QTableWidgetItem;
    itemPassf->setText("Good Job");

    QTableWidgetItem *itemNotf = new QTableWidgetItem;
    itemNotf->setText("???");

    QTableWidgetItem *itemPassg = new QTableWidgetItem;
    itemPassg->setText("Good Job");

    QTableWidgetItem *itemNotg = new QTableWidgetItem;
    itemNotg->setText("???");

    QTableWidgetItem *itemPassh = new QTableWidgetItem;
    itemPassh->setText("Good Job");

    QTableWidgetItem *itemNoth = new QTableWidgetItem;
    itemNoth->setText("???");

    QTableWidgetItem *itemPassi = new QTableWidgetItem;
    itemPassi->setText("Good Job");

    QTableWidgetItem *itemNoti = new QTableWidgetItem;
    itemNoti->setText("???");

    QTableWidgetItem *itemPassj = new QTableWidgetItem;
    itemPassj->setText("Good Job");

    QTableWidgetItem *itemNotj = new QTableWidgetItem;
    itemNotj->setText("???");

    QTableWidgetItem *itemPassk = new QTableWidgetItem;
    itemPassk->setText("Good Job");

    QTableWidgetItem *itemNotk = new QTableWidgetItem;
    itemNotk->setText("???");

    QTableWidgetItem *itemPassl = new QTableWidgetItem;
    itemPassl->setText("Good Job");

    QTableWidgetItem *itemNotl = new QTableWidgetItem;
    itemNotl->setText("???");

    QTableWidgetItem *itemPassm = new QTableWidgetItem;
    itemPassm->setText("Good Job");

    QTableWidgetItem *itemNotm = new QTableWidgetItem;
    itemNotm->setText("???");


    if((roundcount == 1 && !score1) || flrst){

    if(level1stage1){
        ui->tableWidget->setItem(0, 0, itemPass);
}
    else{
        ui->tableWidget->setItem(0, 0, itemNot);
    }

    if(level1stage2){
        ui->tableWidget->setItem(0, 1, itemPass1);
}
    else{
        ui->tableWidget->setItem(0, 1, itemNot1);
    }

    if(level1stage3){
        ui->tableWidget->setItem(0, 2, itemPass2);
}
    else{
        ui->tableWidget->setItem(0, 2, itemNot2);
    }
}

    if(((roundcount == 2 || score1) && !score2) || flrst){

        if(rsttbl){
        ui->tableWidget->setItem(0, 3, itemPass3);
}
        else{

            ui->tableWidget->setItem(0, 3, itemNot3);

        }


        if(level1stage1){
        ui->tableWidget->setItem(1, 0, itemPass4);
        }
        else{
        ui->tableWidget->setItem(1, 0, itemNot4);
    }

    if(level1stage2){
        ui->tableWidget->setItem(1, 1, itemPass5);
}
    else{
        ui->tableWidget->setItem(1, 1, itemNot5);
    }

    if(level1stage3){
        ui->tableWidget->setItem(1, 2, itemPass6);
}
    else{
        ui->tableWidget->setItem(1, 2, itemNot6);
    }
}

    if(((roundcount == 3 || score2) && !score3) || flrst){
if(rsttbl){
        ui->tableWidget->setItem(1, 3, itemPass7);
}
else{

    ui->tableWidget->setItem(1, 3, itemNot7);

}

        if(level1stage1){
        ui->tableWidget->setItem(2, 0, itemPass8);
        }
        else{
        ui->tableWidget->setItem(2, 0, itemNot8);
    }

    if(level1stage2){
        ui->tableWidget->setItem(2, 1, itemPass9);
}
    else{
        ui->tableWidget->setItem(2, 1, itemNot9);
    }

    if(level1stage3){
        ui->tableWidget->setItem(2, 2, itemPassa);
}
    else{
        ui->tableWidget->setItem(2, 2, itemNota);
    }
}

    if(((roundcount == 4 || score3) && !score4) || flrst){

        if(rsttbl){
        ui->tableWidget->setItem(2, 3, itemPassb);
}
        else{

            ui->tableWidget->setItem(2, 3, itemNotb);

        }


        if(level1stage1){
        ui->tableWidget->setItem(3, 0, itemPassc);
        }
        else{
        ui->tableWidget->setItem(3, 0, itemNotc);
    }

    if(level1stage2){
        ui->tableWidget->setItem(3, 1, itemPassd);
}
    else{
        ui->tableWidget->setItem(3, 1, itemNotd);
    }

    if(level1stage3){
        ui->tableWidget->setItem(3, 2, itemPasse);
}
    else{
        ui->tableWidget->setItem(3, 2, itemNote);
    }
}


    if(((roundcount == 5 || score4) && !score5) || flrst){

        if(rsttbl){
        ui->tableWidget->setItem(3, 3, itemPassf);
}
        else{

            ui->tableWidget->setItem(3, 3, itemNotf);

        }



        if(level1stage1){
        ui->tableWidget->setItem(4, 0, itemPassg);
        }
        else{
        ui->tableWidget->setItem(4, 0, itemNotg);
    }

    if(level1stage2){
        ui->tableWidget->setItem(4, 1, itemPassh);
}
    else{
        ui->tableWidget->setItem(4, 1, itemNoth);
    }

    if(level1stage3){
        ui->tableWidget->setItem(4, 2, itemPassi);
}
    else{
        ui->tableWidget->setItem(4, 2, itemNoti);
    }
}

    if(((roundcount == 6 || score5) && !score6) || flrst){

if(rsttbl){
        ui->tableWidget->setItem(4, 3, itemPassj);
}
else{

    ui->tableWidget->setItem(4, 3, itemNotj);

}
        if(level1stage1){
        ui->tableWidget->setItem(5, 0, itemPassk);
        }
        else{
        ui->tableWidget->setItem(5, 0, itemNotk);
    }

    if(level1stage2){
        ui->tableWidget->setItem(5, 1, itemPassl);
}
    else{
        ui->tableWidget->setItem(5, 1, itemNotl);
    }

    if(level1stage3){
        ui->tableWidget->setItem(5, 2, itemPassm);
}
    else{
        ui->tableWidget->setItem(5, 2, itemNotm);
    }
}


flrst = false;
rsttbl = true;
}

int calc_lvl5(){

    int bpt = 0;

    if(!ccellcolor1 && cellcolor1){
       bpt++;
    }
    if(!ccellcolor2 && cellcolor2){
       bpt++;
    }
    if(!ccellcolor3 && cellcolor3){
       bpt++;
    }
    if(!ccellcolor4 && cellcolor4){
       bpt++;
    }
    if(!ccellcolor5 && cellcolor5){
       bpt++;
    }
    if(!ccellcolor6 && cellcolor6){
       bpt++;
    }
    if(!ccellcolor7 && cellcolor7){
       bpt++;
    }
    if(!ccellcolor8 && cellcolor8){
       bpt++;
    }
    if(!ccellcolor9 && cellcolor9){
       bpt++;
    }
    if(!ccellcolor10 && cellcolor10){
       bpt++;
    }
    if(!ccellcolor11 && cellcolor11){
       bpt++;
    }
    if(!ccellcolor12 && cellcolor12){
       bpt++;
    }
    if(!ccellcolor13 && cellcolor13){
       bpt++;
    }
    if(!ccellcolor14 && cellcolor14){
       bpt++;
    }
    if(!ccellcolor15 && cellcolor15){
       bpt++;
    }
    if(!ccellcolor16 && cellcolor16){
       bpt++;
    }
    if(!ccellcolor17 && cellcolor17){
       bpt++;
    }
    if(!ccellcolor18 && cellcolor18){
       bpt++;
    }
    if(!ccellcolor19 && cellcolor19){
       bpt++;
    }
    if(!ccellcolor20 && cellcolor20){
       bpt++;
    }
    if(!ccellcolor21 && cellcolor21){
       bpt++;
    }
    if(!ccellcolor22 && cellcolor22){
       bpt++;
    }
    if(!ccellcolor23 && cellcolor23){
       bpt++;
    }
    if(!ccellcolor24 && cellcolor24){
       bpt++;
    }
    if(!ccellcolor25 && cellcolor25){
       bpt++;
    }
    if(!ccellcolor26 && cellcolor26){
       bpt++;
    }
    if(!ccellcolor27 && cellcolor27){
       bpt++;
    }
    if(!ccellcolor28 && cellcolor28){
       bpt++;
    }
    if(!ccellcolor29 && cellcolor29){
       bpt++;
    }
    if(!ccellcolor30 && cellcolor30){
       bpt++;
    }
    if(!ccellcolor31 && cellcolor31){
       bpt++;
    }
    if(!ccellcolor32 && cellcolor32){
       bpt++;
    }
    if(!ccellcolor33 && cellcolor33){
       bpt++;
    }
    if(!ccellcolor34 && cellcolor34){
       bpt++;
    }
    if(!ccellcolor35 && cellcolor35){
       bpt++;
    }
    if(!ccellcolor36 && cellcolor36){
       bpt++;
    }
    if(!ccellcolor37 && cellcolor37){
       bpt++;
    }
    if(!ccellcolor38 && cellcolor38){
       bpt++;
    }
    if(!ccellcolor39 && cellcolor39){
       bpt++;
    }
    if(!ccellcolor40 && cellcolor40){
       bpt++;
    }
    if(!ccellcolor41 && cellcolor41){
       bpt++;
    }
    if(!ccellcolor42 && cellcolor42){
       bpt++;
    }
    if(!ccellcolor43 && cellcolor43){
       bpt++;
    }
    if(!ccellcolor44 && cellcolor44){
       bpt++;
    }
    if(!ccellcolor45 && cellcolor45){
       bpt++;
    }
    if(!ccellcolor46 && cellcolor46){
       bpt++;
    }
    if(!ccellcolor47 && cellcolor47){
       bpt++;
    }
    if(!ccellcolor48 && cellcolor48){
       bpt++;
    }
    if(!ccellcolor49 && cellcolor49){
       bpt++;
    }
    if(!ccellcolor50 && cellcolor50){
       bpt++;
    }
    if(!ccellcolor51 && cellcolor51){
       bpt++;
    }
    if(!ccellcolor52 && cellcolor52){
       bpt++;
    }
    if(!ccellcolor53 && cellcolor53){
       bpt++;
    }
    if(!ccellcolor54 && cellcolor54){
       bpt++;
    }
    if(!ccellcolor55 && cellcolor55){
       bpt++;
    }
    if(!ccellcolor56 && cellcolor56){
       bpt++;
    }
    if(!ccellcolor57 && cellcolor57){
       bpt++;
    }
    if(!ccellcolor58 && cellcolor58){
       bpt++;
    }
    if(!ccellcolor59 && cellcolor59){
       bpt++;
    }
    if(!ccellcolor60 && cellcolor60){
       bpt++;
    }

    return bpt;

}

void MainWindow::on_pushButton_14_clicked()
{
bluept = true;
redpt = false;
whitept = false;

ui->textBrowser_4->show();
ui->textBrowser_3->hide();
ui->textBrowser_2->hide();

}


void MainWindow::on_pushButton_13_clicked()
{
    bluept = false;
    redpt = true;
    whitept = false;

    ui->textBrowser_3->show();
    ui->textBrowser_2->hide();
    ui->textBrowser_4->hide();


}


void MainWindow::on_pushButton_15_clicked()
{
    bluept = false;
    redpt = false;
    whitept = true;

    ui->textBrowser_2->show();
    ui->textBrowser_4->hide();
    ui->textBrowser_3->hide();


}


void MainWindow::on_pushButton_16_clicked()
{

    roundcount = 1;
    flrst = true;
    setTable1();
    rsttbl = false;

    level = 1;
    levelinitializer();
    ui->levels->setCurrentIndex(0);

}


void MainWindow::on_pushButton_17_clicked()
{
    roundcount = 1;

    flrst = true;
    rsttbl = false;
     setTable1();
    level = 2;
    levelinitializer();
    ui->levels->setCurrentIndex(0);

}


void MainWindow::on_pushButton_18_clicked()
{
    roundcount = 1;

    flrst = true;
     setTable1();
    level = 3;
    levelinitializer();
    ui->levels->setCurrentIndex(0);

}


void MainWindow::on_pushButton_28_clicked()
{

    roundcount = 1;
    rsttbl = false;

    flrst = true;
     setTable1();
    level = 4;
    levelinitializer();
    ui->levels->setCurrentIndex(0);

}


void MainWindow::on_pushButton_29_clicked()
{

    roundcount = 1;
    rsttbl = false;

    flrst = true;
     setTable1();
    level = 5;
    levelinitializer();
    ui->levels->setCurrentIndex(0);

}


void MainWindow::on_information_clicked()
{
    ui->levels->setCurrentIndex(1);
}


void MainWindow::on_pushButton_30_clicked()
{
    ui->levels->setCurrentIndex(0);
}

