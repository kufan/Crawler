#include<string>


using namespace std;


class Http
{
public:
	Http();
	~Http();

	//公共接口
	
	int parseHead(void* buf /*out*/);   //解析http头，参数：下载的全部数据
	int creatHead();

	int getContent( void* buf );  //得到下载的内容 传入一个缓冲区地址，需要预先申请
	int getUrl(URL* url); //

	int init(); //初始化
	int reinit();  //重新初始化
	int updateUrl(URL* url);  /*把从http头中获得的信息进行更新*/
private:
	URL m_url;
	void* buf;
}
