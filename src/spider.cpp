/*程序主函数*/
#include "spiderApp.h"
#include "spider.h"

int main(int argc, char * argv[])
{
	/*对程序进行初始化*/
	SpiderApp app;

	/*初始化*/
	if (app.initApp(argc, argv) == 0)
	{
		SPIDER_LOG(SPIDER_LEVEL_ERROR,"app init is failed!, app has exit!");
		return 1;
	}

	/*开使主业务流程*/
	if( app.run() == 0 )
	{
		SPIDER_LOG_ERROR(SPIDER_LEVEL_ERROR, "main app han exception!");
		return 1;
	}
	
	return 0;
}
