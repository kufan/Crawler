#include<>

#define CONF_PATH "spider.conf"
class SpiderApp
{
	public:
		SpiderApp();
		~SpiderApp();

	public:
		//初始化环境
		//返回值：1 成功 0 失败
		int initApp(int argc, char* argv[]);

		//返回值：1 正常结束  0  异常结束
		int run();

		//将程序按照守护进程模式运行
		int deamon();

	private:
		int initArgv(int argc, char* argv[]);

private: 
	int isDeamon;
};
