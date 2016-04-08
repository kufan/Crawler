#include "spiderApp.h"
#include "spider.h"
#include "confparser.h"
SpiderApp::SpiderApp()
{

}

SpiderApp::~SpiderApp()
{


}

int SpiderApp::initApp(int argc, char* argv[])
{
	/*处理参数*/
	if(initArgv(argc, argv));

	/*读取配置文件*/
	Confparser::instance()->loader(CONF_PATH );
	
	/*处理是否以守护进程运行逻辑*/
	if( isDeamon == 1)
	{
		this->deamon();
	}

	/*载入所有的模块*/
	//等待完成
	
	
}

int SpiderApp::run()
{
	//等待相关管理类完成

}


