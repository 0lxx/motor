#include "form.h"
#include "gtest/gtest.h"
#include <QDebug>
#include <QTimer>
#include <QDateTime>

//通信成功
TEST(xnet,xnet_Test)
{

    EXPECT_EQ(result_xnet,1);
    qDebug() <<"xnet="<<1;

}
//使能
TEST(power,power_Test)
{
    form a;
    EXPECT_EQ(0,a.power(false));
    EXPECT_EQ(1,a.power(true));
    qDebug() <<"power="<<1;

}

//点动
class dian : public::testing::TestWithParam<int>
{
};
TEST_P(dian,dian_Test)
{
    int dvel =  GetParam();
    form a;

    Write_Double(XNet_HD,50,4,dvel);


    EXPECT_EQ(0,a.dian(true));
    QDateTime n2=QDateTime::currentDateTime();
      QDateTime now;
      do{

          now=QDateTime::currentDateTime();
      } while(n2.secsTo(now)<=2);
    a.dian(false);
    qDebug() << "dvel="<<dvel;

}
INSTANTIATE_TEST_CASE_P(TrueReturn, dian, testing::Values(1000,2000,3000,4000));
//相对
class xdui : public::testing::TestWithParam<int>
{
};
TEST_P(xdui,xdui_Test)
{
    int xvel =  GetParam();
    int xmove = xvel*10;
    form a;


    Write_Double(XNet_HD,104,4,xvel);

    Write_Double(XNet_HD,108,4,xvel);

    Write_Double(XNet_HD,112,4,xvel);

    Write_Double(XNet_HD,100,4,xmove);

    EXPECT_EQ(0,a.x_start(true));
    qDebug() << "xvel="<<xvel;
    Write_Bool(XNet_M,10,1,false);

}
INSTANTIATE_TEST_CASE_P(TrueReturn, xdui, testing::Values(1000,2000,3000,4000));
//绝对
class jdui : public::testing::TestWithParam<int>
{
};
TEST_P(jdui,jdui_Test)
{
    int jvel =  GetParam();
    int jmove = jvel*10;
    form a;
    Write_Bool(XNet_M,40,1,true);

    Write_Double(XNet_HD,154,4,jvel);

    Write_Double(XNet_HD,158,4,jvel);

    Write_Double(XNet_HD,162,4,jvel);

    Write_Double(XNet_HD,150,4,jmove);


    EXPECT_EQ(0,a.j_start(true));
    qDebug() << "jvel="<<jvel;
    Write_Bool(XNet_M,20,1,false);

}
INSTANTIATE_TEST_CASE_P(TrueReturn, jdui, testing::Values(1000,2000,3000,4000));


