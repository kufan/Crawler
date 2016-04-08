#include<stdio.h>
#include<list>
#include<map>
#include<string>

using namespace std;

class UrlManager
{
public:
	int addUrl(string urlStr);                   //添加一个全新的URL 加入到list and quque中，同时生存索引
	int addUrlList(list<string> urlStrs);        //批量添加
	URL* getUrlForQuque();                       //取一个未处理的URL对象指针
	int setUrlState(URL* url);                   //设置URL处理状态
	//setUrlValue();

private:
	URL* findUrl(string urlStr);
	int removeUrlForQuque(string urlStr);
		
private:
	list< Url> m_urls;                           //所有的url
	map<string, m_url*> UrlMap;                  //所有URL的索引
	quque<Url*> m_urlquque;                      //维护等待抓取的URL
};
