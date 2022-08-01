#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include <QCloseEvent>
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

    void closeEvent(QCloseEvent *);

private slots:
    void on_set_XNet_triggered();

    void on_stop_XNet_triggered();

    void on_powerButton_clicked();

    void on_powerStopButton_clicked();

    void on_quitButton_clicked();

    void on_x_start_clicked();

    void on_j_start_clicked();

    void on_dian_start_pressed();

    void on_dian_start_released();

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

    //void on_set_Widget_tabBarClicked(int index);

    void on_stopButton_pressed();

    void on_stopButton_released();



private:
    Ui::form *ui;
};

#endif // FORM_H
