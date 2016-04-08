#include<epoll.h>

class EpollManager
{
public:
	EpollManager(int num);   //构造函数 初始化Epoll，得到句柄
	~EpollManager();  //释放句柄

	//注册socket句柄
	int registHandle(int handle);
	int unregistHandle(int handle);  //注销句柄

private:
	int m_epollHandle;	
	int m_tasknum;   //字符维护抓取的最大任务数

};

