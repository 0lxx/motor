#include "form.h"
#include "gtest/gtest.h"
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QList>



////其他
////lineEdit
//TEST(lineEdit,lineEdit_Test0)
//{
//    double dVel;
//    Read_Double(XNet_HD,50,4,&dVel);
//    EXPECT_FLOAT_EQ(dVel,map_write["d_Vel"]);

//}
//TEST(lineEdit,lineEdit_Test1)
//{
//    double dAcc;
//    Read_Double(XNet_HD,54,4,&dAcc);
//    EXPECT_FLOAT_EQ(dAcc,map_write["d_Acc"]);

//}
//TEST(lineEdit,lineEdit_Test2)
//{
//    double dDec;
//    Read_Double(XNet_HD,58,4,&dDec);
//    EXPECT_FLOAT_EQ(dDec,map_write["d_Dec"]);

//}
//TEST(lineEdit,lineEdit_Test3)
//{
//    double xVel;
//    Read_Double(XNet_HD,104,4,&xVel);
//    EXPECT_FLOAT_EQ(xVel,map_write["x_Vel"]);

//}
//TEST(lineEdit,lineEdit_Test4)
//{
//    double xAcc;
//    Read_Double(XNet_HD,108,4,&xAcc);
//    EXPECT_FLOAT_EQ(xAcc,map_write["x_Acc"]);

//}
//TEST(lineEdit,lineEdit_Test5)
//{
//    double xDec;
//    Read_Double(XNet_HD,112,4,&xDec);
//    EXPECT_FLOAT_EQ(xDec,map_write["x_Dec"]);

//}
//TEST(lineEdit,lineEdit_Test6)
//{
//    double xMove;
//    Read_Double(XNet_HD,100,4,&xMove);
//    EXPECT_FLOAT_EQ(xMove,map_write["x_Move"]);

//}
//TEST(lineEdit,lineEdit_Test7)
//{
//    double jVel;
//    Read_Double(XNet_HD,154,4,&jVel);
//    EXPECT_FLOAT_EQ(jVel,map_write["j_Vel"]);

//}
//TEST(lineEdit,lineEdit_Test8)
//{
//    double jAcc;
//    Read_Double(XNet_HD,158,4,&jAcc);
//    EXPECT_FLOAT_EQ(jAcc,map_write["j_Acc"]);

//}
//TEST(lineEdit,lineEdit_Test9)
//{
//    double jDec;
//    Read_Double(XNet_HD,162,4,&jDec);
//    EXPECT_FLOAT_EQ(jDec,map_write["j_Dec"]);

//}
//TEST(lineEdit,lineEdit_Test10)
//{
//    double jMove;
//    Read_Double(XNet_HD,150,4,&jMove);
//    EXPECT_FLOAT_EQ(jMove,map_write["j_Move"]);

//}
////通信成功
//TEST(xnet,xnet_Test)
//{

//    EXPECT_EQ(result_xnet,1);

//}

////状态
//TEST(statetest,state_Test)
//{
//    EXPECT_EQ(state,0);
//}
//TEST(State,test_Power)
//{
//    form a;
//    a.power(true);
//    QDateTime n2=QDateTime::currentDateTime();
//    QDateTime now;
//    do{

//        now=QDateTime::currentDateTime();
//    } while(n2.secsTo(now)<=1);
//    int num_State;
//    Read_Int(XNet_D,20000,2,&num_State);
//    EXPECT_EQ(num_State,1);

//}
//TEST(State,test_dian)
//{
//    form a;
//    Write_Double(XNet_HD,50,4,2000);
//    a.dian(true);

//    int num_State;
//    Read_Int(XNet_D,20000,2,&num_State);
//    EXPECT_EQ(num_State,3);
//    QDateTime n2=QDateTime::currentDateTime();
//    QDateTime now;
//    do{

//        now=QDateTime::currentDateTime();
//    } while(n2.secsTo(now)<=2);
//    a.dian(false);
//}
////输入参数错误
//TEST(Error,test_xdui)
//{
//    form a;
//    EXPECT_EQ(a.x_start(true),1009);

//}
//TEST(Error,test_jdui)
//{
//    form a;
//    EXPECT_EQ(a.j_start(true),1009);

//}
//TEST(Error,test_0)
//{
//    form a;
//    a.power(false);
//    EXPECT_EQ( a.dian(true),1001);
//}
//性能
//加速度
TEST(vel,vel_Test1)
{
//    int acc = (vellist.at(0)-vellist.at(1))/0.1;
    qDebug() << map_write["d_Vel"];
    qDebug() << map_write["d_Acc"];
    double x =(map_write["d_Vel"]/map_write["d_Acc"])*10;
    EXPECT_TRUE((vellist.at(0)-x)<=3);
    qDebug() << x;
//    EXPECT_TRUE(qAbs(map_write["d_Acc"]-qAbs(acc))<200) << "result" <<map_write["d_Acc"]-acc <<"d_Acc"<<map_write["d_Acc"]<<"acc"<< acc ;
//    qDebug() << vellist.at(0);
//    qDebug() << vellist.at(1);
}
//减速度
TEST(vel,vel_Test2)
{
    int dec = (vellist2.at(0)-vellist2.at(1))/0.001;
    EXPECT_TRUE(map_write["d_Acc"]-qAbs(dec)<200) << "result" <<map_write["d_Dec"]-dec <<"d_Dec"<<map_write["d_Dec"]<<"dec"<< dec ;

}
////功能
////使能
//TEST(power,power_Test)
//{
//    form a;
//    EXPECT_EQ(0,a.power(false));
//    EXPECT_EQ(1,a.power(true));
//    qDebug() <<"power="<<1;

//}
////原点
//TEST(home,home_Test)
//{
//    form a;
//    EXPECT_TRUE(qAbs(a.home(true)-0)<5);
//    bool m160;
//    Read_Bool(XNet_M,160,1,&m160);
//    if(m160)
//    {
//        Write_Bool(XNet_M,40,1,false);
//    }
//}
////点动
//class dian : public::testing::TestWithParam<int>
//{
//};
//TEST_P(dian,dian_Test)
//{
//    int dvel =  GetParam();
//    form a;

//    Write_Double(XNet_HD,50,4,dvel);


//    EXPECT_EQ(0,a.dian(true));
//    QDateTime n2=QDateTime::currentDateTime();
//      QDateTime now;
//      do{

//          now=QDateTime::currentDateTime();
//      } while(n2.secsTo(now)<=2);
//    a.dian(false);
//    qDebug() << "dvel="<<dvel;

//}
//INSTANTIATE_TEST_CASE_P(TrueReturn, dian, testing::Values(1000,2000,3000,4000));
////相对
//class xdui : public::testing::TestWithParam<int>
//{
//};
//TEST_P(xdui,xdui_Test)
//{
//    int xvel =  GetParam();
//    int xmove = xvel*10;
//    form a;


//    Write_Double(XNet_HD,104,4,xvel);

//    Write_Double(XNet_HD,108,4,xvel);

//    Write_Double(XNet_HD,112,4,xvel);

//    Write_Double(XNet_HD,100,4,xmove);

//    EXPECT_EQ(0,a.x_start(true));
//    qDebug() << "xvel="<<xvel;
//    Write_Bool(XNet_M,10,1,false);

//}
//INSTANTIATE_TEST_CASE_P(TrueReturn, xdui, testing::Values(1000,2000,3000,4000));

////绝对
//class jdui : public::testing::TestWithParam<int>
//{
//};
//TEST_P(jdui,jdui_Test)
//{
//    int jvel =  GetParam();
//    int jmove = jvel*10;
//    form a;
//    Write_Bool(XNet_M,40,1,true);

//    Write_Double(XNet_HD,154,4,jvel);

//    Write_Double(XNet_HD,158,4,jvel);

//    Write_Double(XNet_HD,162,4,jvel);

//    Write_Double(XNet_HD,150,4,jmove);


//    EXPECT_EQ(0,a.j_start(true));
//    qDebug() << "jvel="<<jvel;
//    Write_Bool(XNet_M,20,1,false);

//}
//INSTANTIATE_TEST_CASE_P(TrueReturn, jdui, testing::Values(1000,2000,3000,4000));


