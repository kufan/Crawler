#include "../src/dso.h"
#include "htmlParserMod.h"

void init(Module * module)
{

}

int handle(void *param)
{
	struct htmlParserParam* lparam = (struct htmlParserMod*)param;
	HtmlParser loParser;
	param->urls = loParser.getUrls(param->url);
	if(param->urls.count() == 0)
	{
		return MODULE_ERR;
	}
	return MODULE_OK;

}



