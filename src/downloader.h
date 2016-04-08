#include <string>

#include "http.h"
#include "socket.h"

using namespace std;

class Downloader
{
public:
	Downloader();
	~Downloader();
	int getResource(URL* url);   //下载资源内容 动作
	void* getResourceContent(); //得到下载的数据
	
	int init();  //初始化类
	int reinit();  //重新初始化类

	int getSockHandle();  //得到socket句柄

private:
	//私有变量
	//socket封装模块
	Socket m_sock;
	//http协议处理模块
	Http m_httpPaser;
	URL * mp_url;
};



