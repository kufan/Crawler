#include<>

#define CONF_PATH "spider.conf"
class SpiderApp
{
	public://for class
		SpiderApp();
		~SpiderApp();  //释放全部资源
	public://业务成员函数
		//初始化环境
		//返回值：1 成功 0 失败
		int initApp(int argc, char* argv[]);
		//主处理流程
		//返回值：1 正常结束  0  异常结束
		int run();

		//将程序按照守护进程模式运行
		int deamon();

	private: //内部接口，以私有成员函数出现，不能被主业务流程之外的模块调用
	/*处理参数*/
		int initArgv(int argc, char* argv[]);
private: //类私有成员变量
	int isDeamon; //是否以守护进程模式运行
};
