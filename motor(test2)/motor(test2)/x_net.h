#ifndef X_NET_H
#define X_NET_H

//#include "x_net_global.h"
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;
#include "XNetClient.h"

#define XNet_X     1
#define XNet_Y     2
#define XNet_M     3
#define XNet_S     4
#define XNet_T     5
#define XNet_C     6
#define XNet_ET    7
#define XNet_HM    8
#define XNet_HS    9
#define XNet_HT    10
#define XNet_HC    11
#define XNet_HSC   12
#define XNet_SM    13
#define XNet_SSM   14
#define XNet_TG    15
#define XNet_HTG   16
#define XNet_PF    17
#define XNet_SEM   18
#define XNet_STG   19 //add 2016.4.8
#define XNet_HSTG  20

#define XNet_D     128
#define XNet_TD    129
#define XNet_CD    130
#define XNet_SD    131
#define XNet_ETD   133
#define XNet_ID    134
#define XNet_QD    135
#define XNet_HD    136
#define XNet_HTD   137
#define XNet_HCD   138
#define XNet_HSCD  139
#define XNet_HSD   140
#define XNet_FD    141
#define XNet_SFD   142
#define XNet_SSFD  143
#define XNet_SSD   144
#define XNet_FS    145

#define FLAG    200
#define LW      201
#define LB      202
#define BARCODE "BARCODE"

//为了和将来用到的程序中公用一个头文件，创建dll时用到的是__declspec(dllexport)，而使用dll时用到__declspec(dllimport)，完全可以各自写一下
#define X_NETSHARED_EXPORT __declspec(dllexport)
#ifdef X_NETSHARED_EXPORT
#else
#define X_NETSHARED_EXPORT __declspec(dllimport)
#endif


static XINJE::XNetClient device;

extern "C" X_NETSHARED_EXPORT void SetXNetClient(char *);

extern "C" X_NETSHARED_EXPORT void CloseXNetClient();

extern "C" X_NETSHARED_EXPORT void Write_Short(unsigned char regType, int start, int count,short value);

extern "C" X_NETSHARED_EXPORT void Write_Int(unsigned char regType, int start, int count, int value);

extern "C" X_NETSHARED_EXPORT void Write_Float(unsigned char regType, int start, int count, float value);

extern "C" X_NETSHARED_EXPORT void Write_Double(unsigned char regType, int start, int count, double value);

extern "C" X_NETSHARED_EXPORT void Write_Bool(unsigned char regType, int start, int count, bool value);

extern "C" X_NETSHARED_EXPORT void Read_Short(unsigned char regType, int start, int count, short* value);

extern "C" X_NETSHARED_EXPORT void Read_Int(unsigned char regType, int start, int count, int* value);

extern "C" X_NETSHARED_EXPORT void Read_Float(unsigned char regType, int start, int count, float* value);

extern "C" X_NETSHARED_EXPORT void Read_Double(unsigned char regType, int start, int count, double* value);

extern "C" X_NETSHARED_EXPORT void Read_Bool(unsigned char regType, int start, int count,bool* value);


#endif // X_NET_H
