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
	if(initArgv(argc, argv));

	Confparser::instance()->loader(CONF_PATH );
	
	if(isDeamon == 1)
	{
		this->deamon();
	}	
}

int SpiderApp::run()
{
}
