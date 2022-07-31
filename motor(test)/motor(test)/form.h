#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMap>
#include "x_net.h"
#include "xnetclient.h"


namespace Ui {
class form;
}

class form : public QMainWindow
{
    Q_OBJECT

public:
    explicit form(QWidget *parent = 0);
    ~form();

    int power(bool data);
    int dian(bool data);
    int x_start(bool data);
    int j_start(bool data);

    void closeEvent(QCloseEvent *);
    bool ReadBusy(int);
public slots :
    bool on_set_XNet_triggered();

private slots:


    void on_stop_XNet_triggered();

    void on_powerButton_clicked();

    void on_powerStopButton_clicked();

    void on_quitButton_clicked();

    void on_x_start_clicked();

    void on_j_start_clicked();

    void on_dian_start_pressed();

    int on_dian_start_released();

    void on_pushButton_clicked();

    void on_dian_Vel_textEdited(const QString &arg1);

    void on_dian_Acc_textEdited(const QString &arg1);

    void on_dian_Dec_textEdited(const QString &arg1);

    void on_x_Vel_textEdited(const QString &arg1);

    void on_x_Acc_textEdited(const QString &arg1);

    void on_x_Dec_textEdited(const QString &arg1);

    void on_j_Vel_textEdited(const QString &arg1);

    void on_j_Acc_textEdited(const QString &arg1);

    void on_j_Dec_textEdited(const QString &arg1);

    //void on_set_Widget_currentChanged(int index);

    void on_set_Widget_tabBarClicked(int index);

    void on_stopButton_pressed();

    void on_stopButton_released();


    void on_testButton_2_clicked();

private:
    Ui::form *ui;


};

extern int i_TestVel;
extern int result_xnet;
extern int result_power;
extern int err50;
extern int err100;
extern int err150;
#endif // FORM_H
