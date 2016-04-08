#include <string>

using namespace std;

typedef strut stru_url
{
	string url;
	string protocal;
	string Sitename;
	string Path;
	string Filename;
	int state;
	int deep;
	string Filetype;
} URL;

class Url
{
	public:
		Url(string url_str);  //构造函数，
		int parseUrl();  //解析url，并填充内部URL结构
		struct stru_url* getUrlData();  //获得URL数据描述结构
	private:

		struct stru_url m_url;
}
