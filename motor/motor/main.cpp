#include "mainwindow.h"
#include <QApplication>
#include "gtest/gtest.h"
#include "form.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //设置背景大小
    w.setFixedSize(600,400);
    //设置标题
    w.setWindowTitle("电机控制系统");

    w.show();
    //开始测试

    testing::InitGoogleTest(&argc,argv);
    //RUN_ALL_TESTS();

    return a.exec();
}
