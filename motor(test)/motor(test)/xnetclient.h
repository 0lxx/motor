#pragma once

namespace XINJE
{
    //类型定义
    typedef unsigned char  Byte;
    typedef unsigned short UInt16;

    //XNet服务端口
    #define 	ServicePort	2323
    #define     ServiceIp "192.168.6.6"

    //操作结果（仅告知操作是否成功）
    #define		XNetCommResult		   int
    #define		XNetCommResult_Err		-1
    #define		XNetCommResult_Success	 0

    //XNet设备类型
    typedef enum
    {
        PLC_XD = 0,
        PLC_XE,
        TouchWin,
        WBox,
        _4GBox,
        COBox,
        ABox
    }XNetDevice;

    //线圈类型
    typedef	enum
    {
        XNet_X = 1,
        XNet_Y = 2,
        XNet_M = 3,
        XNet_S = 4,
        XNet_T = 5,
        XNet_C = 6,
        XNet_ET = 7,
        XNet_HM = 8,
        XNet_HS = 9,
        XNet_HT = 10,
        XNet_HC = 11,
        XNet_HSC = 12,
        XNet_SM = 13,
        XNet_SSM = 14,
        XNet_TG = 15,
        XNet_HTG = 16,
        XNet_PF = 17,
        XNet_SEM = 18,
        XNet_STG = 19,//add 2016.4.8
        XNet_HSTG = 20,
    }CoilType;

    //寄存器类型
    typedef	enum
    {
        XNet_D = 128,
        XNet_TD = 129,
        XNet_CD = 130,
        XNet_SD = 131,
        XNet_ETD = 133,
        XNet_ID = 134,
        XNet_QD = 135,
        XNet_HD = 136,
        XNet_HTD = 137,
        XNet_HCD = 138,
        XNet_HSCD = 139,
        XNet_HSD = 140,
        XNet_FD = 141,
        XNet_SFD = 142,
        XNet_SSFD = 143,
        XNet_SSD = 144,
        XNet_FS = 145,
    }RegType;

    //通信对象
    //每一个和每一个设备的连接都建议创建一个此对象，以避免不必要的线程同步
    class XNetClient
    {
    private:
        int      Sock;
        unsigned short     Net;
        unsigned short     Station;
        unsigned char Com;
        Byte     Type;
        Byte     Serial;
        Byte     Model;
        void LibXNetRegsToBuf(short* _regs, unsigned char* _buf, int _num);
        void LibXNetBufToRegs(unsigned char* _buf, unsigned short* _regs, int _num);
        void LibXNetCoilsToBuf(short* _coils, unsigned char* _buf, int _num);
        void LibXNetBufToCoils(char* _buf, short* _coils, Byte _startBit, int _num);
        unsigned short Byte2Word(Byte high, Byte low);
    public:
        //初始化WindowsSocket
//        XNetClient(char *ttyNo);
        static XNetCommResult WinSockInit();

        //启动XNet服务
        static XNetCommResult StartXNetWindows();
        static XNetCommResult CloseXNetWindows();

        //和XNet服务建立连接
        XNetCommResult XNetCommunication();

        //打开串口（网口也需配置一次，网口_com填129）
        XNetCommResult SetComPort(Byte _com);

        //关闭串口
        XNetCommResult ReleaseComPort(Byte _com);

        //直接指定设备地址
        void AdderLink(const char* _ipStr);
        void AdderLink(UInt16 _net, UInt16 _station);

        //对指定端口或网口查找设备，使本对象自动获取到设备地址
        XNetCommResult FindDevice(Byte _comPort, Byte _type, Byte _serial, Byte _model);
        XNetCommResult FindDevice(Byte _comPort, XNetDevice _dev);
        XNetCommResult FindDevice(Byte _comPort, const char* _id);

        //读写寄存器（用户提供一个short数组缓存，用于传入或获取XNet16位寄存器的值）
        XNetCommResult WriteRegs(Byte _regType, int _offSet, int _num, short* _writeRegs);
        XNetCommResult ReadRegs(Byte _regType, int _offSet, int _num, short* _readRegs);

        //读写线圈（用户提供一个short数组缓存，用于传入或获取XNet线圈状态，0为off，1为on）
        XNetCommResult WriteCoils(Byte _coilType, int _offSet, int _num, short* _writeCoils);
        XNetCommResult ReadCoils(Byte _coilType, int _offSet, int _num, short* _readCoil);

//        ~XNetClient();
    };
}

