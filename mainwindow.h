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
    ~MainWindow();


private slots:
    void on_start1_clicked();
//  int randInt(int, int);
    int rndm(int, int);

    void on_textEdit_textChanged();

    void on_row1_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_cell1_6_clicked();

    void on_cell1_clicked();

    void on_cell1_2_clicked();

    void on_cell1_3_clicked();

    void on_cell1_4_clicked();

    void on_cell1_5_clicked();

    void on_cell1_9_clicked();

    void on_cell1_10_clicked();

    void on_cell1_11_clicked();

    void on_cell1_7_clicked();

    void on_cell1_8_clicked();

    void on_cell1_12_clicked();

    void on_cell1_15_clicked();

    void on_cell1_17_clicked();

    void on_cell1_16_clicked();

    void on_cell1_13_clicked();

    void on_cell1_14_clicked();

    void on_cell1_18_clicked();

    void on_cell1_24_clicked();

    void on_cell1_20_clicked();

    void on_cell1_19_clicked();

    void on_cell1_23_clicked();

    void on_cell1_22_clicked();

    void on_cell1_21_clicked();

    void on_cell1_27_clicked();

    void on_cell1_28_clicked();

    void on_cell1_29_clicked();

    void on_cell1_25_clicked();

    void on_cell1_26_clicked();

    void on_cell1_30_clicked();

    void on_cell1_36_clicked();

    void on_cell1_32_clicked();

    void on_cell1_31_clicked();

    void on_cell1_35_clicked();

    void on_cell1_34_clicked();

    void on_cell1_33_clicked();

    void on_cell1_39_clicked();

    void on_cell1_40_clicked();

    void on_cell1_41_clicked();

    void on_cell1_37_clicked();

    void on_cell1_38_clicked();

    void on_cell1_42_clicked();

    void on_cell1_48_clicked();

    void on_cell1_44_clicked();

    void on_cell1_43_clicked();

    void on_cell1_47_clicked();

    void on_cell1_46_clicked();

    void on_cell1_45_clicked();

    void on_cell1_51_clicked();

    void on_cell1_52_clicked();

    void on_cell1_53_clicked();

    void on_cell1_49_clicked();

    void on_cell1_50_clicked();

    void on_cell1_54_clicked();

    void on_cell1_60_clicked();

    void on_cell1_56_clicked();

    void on_cell1_55_clicked();

    void on_cell1_59_clicked();

    void on_cell1_58_clicked();

    void on_cell1_57_clicked();

    void on_pushButton_3_clicked();

    void on_textEdit_2_textChanged();

    void on_textEdit_3_copyAvailable(bool b);

    void on_textEdit_3_textChanged();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void reset();

    void resetgb();

    void levelinitializer();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_scoreboard_clicked();

    void on_pushButton_12_clicked();

    void setTable1();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_information_clicked();

    void on_pushButton_30_clicked();

    void update_score(int);

    void on_reset_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
