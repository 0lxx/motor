#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <ActiveQt/QAxObject>
#include <Windows.h>
#include <QFile>
#include <QStringList>
#include <QString>
#include <QFileDialog>
#include <QList>

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

//点击电源跳转到主界面
void MainWindow::on_pushButton_clicked()
{
    form *form1 = new form;
    form1->setFixedSize(1350,800);
    this->hide();//隐藏自身界面
    form1->show();
    form1->setWindowTitle("电机参数设置");
}
void MainWindow::closeEvent(QCloseEvent *d)
{
    //窗口关闭时弹出的提示窗口
    QMessageBox msgBox1;
    msgBox1.setText("提示");
    msgBox1.setInformativeText("确认退出?");
    msgBox1.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox1.setDefaultButton(QMessageBox::Ok);
    int n = msgBox1.exec();
    if(n == QMessageBox::Ok){
        //若用户点击确认，则接收这个事件,当前窗口会关闭
        d->accept();
    }else{
        //若用户点击取消，则忽略这个事件，当前窗口不会关闭
        d->ignore();
    }
}


