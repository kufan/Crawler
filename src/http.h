#include<string>

using namespace std;

class Http
{
public:
	Http();
	~Http();

	int parseHead(void* buf /*out*/);   //解析http头，参数：下载的全部数据
	int creatHead();

	int getContent( void* buf );  //得到下载的内容 传入一个缓冲区地址，需要预先申请
	int getUrl(URL* url);

	int init();
	int reinit();
	int updateUrl(URL* url);  //把从http头中获得的信息进行更新

private:
	URL m_url;
	void* buf;
}
