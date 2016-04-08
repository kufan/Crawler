#include <string>

using namespace std;

class HrmlParser
{
public:
	HtmlParser();
	~HtmlParser();

	//公共接口
	list<string> getUrls(string page);  //如果处理失败，那么返回的list元素为0
private:


}


