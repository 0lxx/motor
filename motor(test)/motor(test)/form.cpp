#include "form.h"
#include "ui_form.h"
#include <QDebug>
#include <QTimer>
#include <QObject>
#include <QMessageBox>
#include <QCloseEvent>
#include <QMap>
#include <QList>
#include <QDateTime>
#include "gtest/gtest.h"


form::form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::form)
{
    ui->setupUi(this);
    ui->set_Widget->setCurrentIndex(0);//默认点动模式
    //速度，距离文本框输入内容只能为数字、点、负号
    ui->dian_Vel->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->dian_Acc->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->dian_Dec->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));//点动
    ui->x_Vel->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->x_Acc->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->x_Dec->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->x_Move->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));//相对运动
    ui->j_Vel->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->j_Acc->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->j_Dec->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));
    ui->j_Move->setValidator(new QRegExpValidator(QRegExp("^-?[0-9.0-9]*")));//绝对运动

}

form::~form()
{
    delete ui;
}

int Model[100],i;

double d_Vel;
int i_TestVel;
int result_xnet;
int result_power;
bool set_xnet;
bool set_power;
int err50;
int err100;
int err150;


//建立通信
bool form::on_set_XNet_triggered()
{
    SetXNetClient(ServiceIp);

    //判断通信结果
    QTimer *timer_result = new QTimer;
    connect(timer_result,&QTimer::timeout,[=](){
        Write_Bool(XNet_M,50,1,true);
        //int result_xnet;
        Read_Int(XNet_D,10,2,&result_xnet);
    //通信成功
        if(result_xnet == 1)
        {
            QMessageBox success_net;
            success_net.setText("通信成功");
            success_net.setStandardButtons(QMessageBox::Ok);
            success_net.setDefaultButton(QMessageBox::Ok);
            success_net.exec();
            timer_result->stop();
            return set_xnet = true;
        }
        else//通信失败
        {
            QMessageBox fail_net;
            fail_net.setText("通信失败");
            fail_net.setInformativeText("请检查PLC状态并重新连接");
            fail_net.setStandardButtons(QMessageBox::Ok);
            fail_net.setDefaultButton(QMessageBox::Ok);
            fail_net.exec();
            timer_result->stop();
        }
    });
    timer_result->start(1000);

//QTimer每隔一秒读入一次数据到lcdNumber
    QTimer *timer_StateError = new QTimer;
    QTimer *timer_LocationVel = new QTimer;
    connect(timer_StateError,&QTimer::timeout,[=](){
        int num_State,num_Error;
        Read_Int(XNet_D,20000,2,&num_State);//读取伺服的状态
        Read_Int(XNet_D,20001,2,&num_Error);//读取错误码
        ui->stateNumber->display(num_State);
        ui->errorNumber->display(num_Error);

        //数字对应的具体状态
        switch (num_State) {
        case 0:
            ui->lineEdit->setText("轴未使能");
            break;
        case 1:
            ui->lineEdit->setText("轴使能、未运动");
            break;
        case 2:
            ui->lineEdit->setText("轴运动中");
            break;
        case 3:
            ui->lineEdit->setText("轴持续运动中");
            break;
        case 4:
            ui->lineEdit->setText("轴同步运动中");
            break;
        case 5:
            ui->lineEdit->setText("轴回原点中");
            break;
        case 6:
            ui->lineEdit->setText("轴减速停止中");
            break;
        case 7:
            ui->lineEdit->setText("轴有错误");
            break;
        case 8:
            ui->lineEdit->setText("轴处于轴组运动中");
            break;
        default:
            break;
                }

    });
    timer_StateError->start(1000);//一秒触发一次

    connect(timer_LocationVel,&QTimer::timeout,[=](){
        double num_Location,num_Vel;
        Read_Double(XNet_D,20044,4,&num_Location);//读取实际位置
        Read_Double(XNet_D,20048,4,&num_Vel);//读取实际速度
        ui->locationNumber->display(num_Location);
        ui->velNumber->display(num_Vel);
        double num1,num2;
        num1 = ui->locationNumber->value();
        num2 = ui->velNumber->value();

    });
    timer_LocationVel->start(100);

//写入
//    QTimer *timer_Enter = new QTimer;
//    connect(timer_Enter,&QTimer::timeout,[=]()
//    {
//        QString dVel = ui->dian_Vel->text();
//        double d_Vel =dVel.toDouble();
//        Write_Double(XNet_HD,50,4,d_Vel);//电动模式下写入速度
//        QString dAcc = ui->dian_Acc->text();
//        double d_Acc =dAcc.toDouble();
//        Write_Double(XNet_HD,54,4,d_Acc);//点动模式下写入加速度
//        QString dDec = ui->dian_Dec->text();
//        double d_Dec =dDec.toDouble();
//        Write_Double(XNet_HD,58,4,d_Dec);//点动模式下写入减速度

//        QString xVel = ui->x_Vel->text();
//        double x_Vel =xVel.toDouble();
//        Write_Double(XNet_HD,104,4,x_Vel);//相对模式下写入速度
//        QString xAcc = ui->x_Acc->text();
//        double x_Acc =xAcc.toDouble();
//        Write_Double(XNet_HD,108,4,x_Acc);//相对模式下写入加速度
//        QString xDec = ui->x_Dec->text();
//        double x_Dec =xDec.toDouble();
//        Write_Double(XNet_HD,112,4,x_Dec);//相对模式下写入减速度
//        QString xMove = ui->x_Move->text();
//        double x_Move =xMove.toDouble();
//        Write_Double(XNet_HD,100,4,x_Move);//相对模式下写入目标位置

//        QString jVel = ui->j_Vel->text();
//        double j_Vel =jVel.toDouble();
//        Write_Double(XNet_HD,154,4,j_Vel);//绝对模式下写入速度
//        QString jAcc = ui->j_Acc->text();
//        double j_Acc =jAcc.toDouble();
//        Write_Double(XNet_HD,158,4,j_Acc);//绝对模式下写入加速度
//        QString jDec = ui->j_Dec->text();
//        double j_Dec =jDec.toDouble();
//        Write_Double(XNet_HD,162,4,j_Dec);//绝对模式下写入减速度
//        QString jMove = ui->j_Move->text();
//        double j_Move =jMove.toDouble();
//        Write_Double(XNet_HD,150,4,j_Move);//绝对模式下写入目标位置

//    });
//    timer_Enter->start(1000);

}
//结束通信
void form::on_stop_XNet_triggered()
{
    CloseXNetClient();
    Write_Bool(XNet_M,50,1,false);
    Write_Int(XNet_D,10,2,0);
}
//使能
void form::on_powerButton_clicked()
{

    power(true);

}
int form::power(bool data)
{
    Write_Bool(XNet_M,100,1,data);
    if(data)
    {

        return 1;
    }

}
//结束使能
void form::on_powerStopButton_clicked()
{
    power(false);
}
//点动运行按下
void form::on_dian_start_pressed()
{
    dian(true);

    Write_Bool(XNet_M,3,1,false);

}
int form::dian(bool data)
{

    Write_Bool(XNet_M,1,1,data);//将点动模式运行置true
    Write_Bool(XNet_M,3,1,!data);

    Read_Int(XNet_D,50,2,&err50);
    return err50;

}
//点动按钮释放
int form::on_dian_start_released()
{
    dian(false);


}


//相对运动运行
void form::on_x_start_clicked()
{


    x_start(true);

    QTimer *timer_xDialog = new QTimer;
    connect(timer_xDialog,&QTimer::timeout,[=](){
        bool m130;
        Read_Bool(XNet_M,130,1,&m130);
        if(m130)//相对运动完成后，跳出对话框选择是否继续
        {
            QMessageBox x_Continue;
            x_Continue.setText("目标移动量已完成");
            x_Continue.setInformativeText("是否需要继续运行");
            x_Continue.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
            x_Continue.setDefaultButton(QMessageBox::Yes);
            int ret1 = x_Continue.exec();
            switch(ret1){
            case QMessageBox::Yes :
                Write_Bool(XNet_M,10,1,false);
                timer_xDialog->stop();
                break;
            case QMessageBox::No :
                Write_Bool(XNet_M,100,1,false);
                close();
                break;
            }
        }

    });
    timer_xDialog->start(1000);

}
int form::x_start(bool data)
{
    Write_Bool(XNet_M,10,1,data);

    while(ReadBusy(131));

    Read_Int(XNet_D,100,2,&err100);
    return err100;

}
//绝对运动运行
void form::on_j_start_clicked()
{



    j_start(true);


    QTimer *timer_jDialog = new QTimer;
    connect(timer_jDialog,&QTimer::timeout,[=](){
        bool m140;
        Read_Bool(XNet_M,140,1,&m140);
        if(m140)//绝对运动结束后，跳出对话框选择是否继续
        {
            QMessageBox j_Continue;
            j_Continue.setText("已到达目标位置");
            j_Continue.setInformativeText("是否需要继续运行\n（继续运行请更改目标位置）");
            j_Continue.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
            j_Continue.setDefaultButton(QMessageBox::Yes);
            int ret2 = j_Continue.exec();
            switch(ret2){
            case QMessageBox::Yes :
                Write_Bool(XNet_M,20,1,false);//Yes重新开始运行
                Write_Bool(XNet_M,140,1,false);
                timer_jDialog->stop();
                break;
            case QMessageBox::No ://No结束程序
                Write_Bool(XNet_M,100,1,false);
                close();
                break;
            }
        }

    });
    timer_jDialog->start(1000);

}
int form::j_start(bool data)
{
    Write_Bool(XNet_M,20,1,data);
    while(ReadBusy(141));

    Read_Int(XNet_D,150,2,&err150);
    return err150;

}
//停止
void form::on_stopButton_pressed()
{
    Write_Bool(XNet_M,2,1,true);
    Write_Bool(XNet_M,10,1,false);
    Write_Bool(XNet_M,20,1,false);
}

void form::on_stopButton_released()
{
    Write_Bool(XNet_M,2,1,false);
}
//退出控制按键
void form::on_quitButton_clicked()
{
    close();
    Write_Bool(XNet_M,50,1,false);
    Write_Int(XNet_D,10,2,0);
    Write_Bool(XNet_M,100,1,false);

}
//将当前位置清零
void form::on_pushButton_clicked()
{
    Write_Bool(XNet_M,40,1,true);

    bool m160;
    Read_Bool(XNet_M,160,1,&m160);
    if(m160)
    {
        Write_Bool(XNet_M,40,1,false);
    }
}

//设置速度、加速度、减速度最大范围
//点动
void form::on_dian_Vel_textEdited(const QString &arg1)//速度
{
    //QString dianvel = ui->dian_Vel->text();
    int dianvel1 =arg1.toInt();
    if(dianvel1<-10000||dianvel1>10000)
    {
        QMessageBox d_VelBox;
        d_VelBox.setText("速度超出最大范围,请重新输入");
        d_VelBox.setInformativeText("（最大速度10000）");
        d_VelBox.setStandardButtons(QMessageBox::Ok);
        d_VelBox.exec();
    }
}
void form::on_dian_Acc_textEdited(const QString &arg1)//加速度
{
    //QString dianacc = ui->dian_Acc->text();
    int dianacc1 =arg1.toInt();
    if(dianacc1<-10000||dianacc1>10000)
    {
        QMessageBox d_AccBox;
        d_AccBox.setText("加速度超出最大范围，请重新输入");
        d_AccBox.setInformativeText("（最大加速度10000）");
        d_AccBox.setStandardButtons(QMessageBox::Ok);
        d_AccBox.exec();
    }
}
void form::on_dian_Dec_textEdited(const QString &arg1)//减速度
{
    //QString diandec = ui->dian_Dec->text();
    int diandec1 =arg1.toInt();
    if(diandec1<-10000||diandec1>10000)
    {
        QMessageBox d_DecBox;
        d_DecBox.setText("减速度超出最大范围，请重新输入");
        d_DecBox.setInformativeText("（最大减速度10000）");
        d_DecBox.setStandardButtons(QMessageBox::Ok);
        d_DecBox.exec();
    }
}
//相对运动
void form::on_x_Vel_textEdited(const QString &arg1)//速度
{
    //QString xiangvel = ui->x_Vel->text();
    int xiangvel1 =arg1.toInt();
    if(xiangvel1<-10000||xiangvel1>10000)
    {
        QMessageBox x_VelBox;
        x_VelBox.setText("速度超出最大范围，请重新输入");
        x_VelBox.setInformativeText("（最大速度10000）");
        x_VelBox.setStandardButtons(QMessageBox::Ok);
        x_VelBox.exec();
    }
}
void form::on_x_Acc_textEdited(const QString &arg1)//加速度
{
    //QString xiangacc = ui->x_Acc->text();
    int xiangacc1 =arg1.toInt();
    if(xiangacc1<-10000||xiangacc1>10000)
    {
        QMessageBox x_AccBox;
        x_AccBox.setText("加速度超出最大范围，请重新输入");
        x_AccBox.setInformativeText("（最大加速度10000）");
        x_AccBox.setStandardButtons(QMessageBox::Ok);
        x_AccBox.exec();
    }
}
void form::on_x_Dec_textEdited(const QString &arg1)//减速度
{
    //QString xiangdec = ui->x_Dec->text();
    int xiangdec1 =arg1.toInt();
    if(xiangdec1<-10000||xiangdec1>10000)
    {
        QMessageBox x_DecBox;
        x_DecBox.setText("减速度超出最大范围，请重新输入");
        x_DecBox.setInformativeText("（最大减速度10000）");
        x_DecBox.setStandardButtons(QMessageBox::Ok);
        x_DecBox.exec();
    }
}
//绝对运动
void form::on_j_Vel_textEdited(const QString &arg1)//速度
{
    //QString juevel = ui->j_Vel->text();
    int juevel1 =arg1.toInt();
    if(juevel1<-10000||juevel1>10000)
    {
        QMessageBox j_VelBox;
        j_VelBox.setText("速度超出最大范围，请重新输入");
        j_VelBox.setInformativeText("（最大速度10000）");
        j_VelBox.setStandardButtons(QMessageBox::Ok);
        j_VelBox.exec();
    }
}
void form::on_j_Acc_textEdited(const QString &arg1)//加速度
{
    //QString jueacc = ui->j_Acc->text();
    int jueacc1 =arg1.toInt();
    if(jueacc1<-10000||jueacc1>10000)
    {
        QMessageBox j_AccBox;
        j_AccBox.setText("加速度超出最大范围，请重新输入");
        j_AccBox.setInformativeText("（最大加速度10000）");
        j_AccBox.setStandardButtons(QMessageBox::Ok);
        j_AccBox.exec();
    }
}
void form::on_j_Dec_textEdited(const QString &arg1)//减速度
{
    //QString juedec = ui->j_Dec->text();
    int juedec1 =arg1.toInt();
    if(juedec1<-10000||juedec1>10000)
    {
        QMessageBox j_DecBox;
        j_DecBox.setText("减速度超出最大范围，请重新输入");
        j_DecBox.setInformativeText("（最大减速度10000）");
        j_DecBox.setStandardButtons(QMessageBox::Ok);
        j_DecBox.exec();
    }
}

void form::on_set_Widget_tabBarClicked(int index)
{

    Model[i] = index;
    QString str =QString("Model[%1]=%2").arg(QString::number(i)).arg(QString::number(index));
    qDebug() << str;
    int state_Model;
    Read_Int(XNet_D,20000,2,&state_Model);
    if(state_Model==2||state_Model==3||state_Model==4||state_Model==5||state_Model==6)
    {
//        ui->set_Widget->setCurrentIndex(Model[i]);
//        QMessageBox qie;
//        qie.setText("正在运行中，请勿切换模式");
//        qie.setStandardButtons(QMessageBox::Ok);
//        qie.exec();
        if(QMessageBox::Ok == QMessageBox::warning(this,"警告","正在运行中，请勿运行其他模式"),QMessageBox::Ok)
        {
            //ui->set_Widget->setCurrentIndex(Model[i]);

        }

    }
    i=i+1;

}

//按“×”退出
void form::closeEvent(QCloseEvent *e)
{
    //窗口关闭时弹出的提示窗口
    QMessageBox msgBox;
    msgBox.setText("提示");
    msgBox.setInformativeText("确认退出?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
    if(ret == QMessageBox::Ok){
        //若用户点击确认，则接收这个事件,当前窗口会关闭
        e->accept();
    }else{
        //若用户点击取消，则忽略这个事件，当前窗口不会关闭
        e->ignore();
    }
    Write_Bool(XNet_M,50,1,false);
    Write_Int(XNet_D,10,2,0);
    Write_Bool(XNet_M,100,1,false);
}

bool form::ReadBusy(int num)
{
    bool busy;
    Read_Bool(XNet_M,num,1,&busy);
    return busy;
}
void form::on_testButton_2_clicked()
{
    QString dVel = ui->dian_Vel->text();
    double d_Vel =dVel.toDouble();
    Write_Double(XNet_HD,50,4,d_Vel);//电动模式下写入速度
    QString dAcc = ui->dian_Acc->text();
    double d_Acc =dAcc.toDouble();
    Write_Double(XNet_HD,54,4,d_Acc);//点动模式下写入加速度
    QString dDec = ui->dian_Dec->text();
    double d_Dec =dDec.toDouble();
    Write_Double(XNet_HD,58,4,d_Dec);//点动模式下写入减速度

    QString xVel = ui->x_Vel->text();
    double x_Vel =xVel.toDouble();
    Write_Double(XNet_HD,104,4,x_Vel);//相对模式下写入速度
    QString xAcc = ui->x_Acc->text();
    double x_Acc =xAcc.toDouble();
    Write_Double(XNet_HD,108,4,x_Acc);//相对模式下写入加速度
    QString xDec = ui->x_Dec->text();
    double x_Dec =xDec.toDouble();
    Write_Double(XNet_HD,112,4,x_Dec);//相对模式下写入减速度
    QString xMove = ui->x_Move->text();
    double x_Move =xMove.toDouble();
    Write_Double(XNet_HD,100,4,x_Move);//相对模式下写入目标位置

    QString jVel = ui->j_Vel->text();
    double j_Vel =jVel.toDouble();
    Write_Double(XNet_HD,154,4,j_Vel);//绝对模式下写入速度
    QString jAcc = ui->j_Acc->text();
    double j_Acc =jAcc.toDouble();
    Write_Double(XNet_HD,158,4,j_Acc);//绝对模式下写入加速度
    QString jDec = ui->j_Dec->text();
    double j_Dec =jDec.toDouble();
    Write_Double(XNet_HD,162,4,j_Dec);//绝对模式下写入减速度
    QString jMove = ui->j_Move->text();
    double j_Move =jMove.toDouble();
    Write_Double(XNet_HD,150,4,j_Move);//绝对模式下写入目标位置

    RUN_ALL_TESTS();
}
