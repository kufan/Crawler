#include<socket.h>


class Socket()
{
public: //公共接口
	Socket();
	~Socket();

	int request(URL *url);  //发送请求
	int respounce();//接受反馈
	int setSocket(); //设置socket
	int connect();  //链接操作
	int disconnect();//断开链接操作
	void* getData();
private:  //内部接口

private:
	int m_socketHandle;  //socket句柄
	char* buf;
};


