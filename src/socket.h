#include<socket.h>

class Socket()
{
public:
	Socket();
	~Socket();

	int request(URL *url);
	int respounce();
	int setSocket();
	int connect();
	int disconnect();
	void* getData();

private:

private:
	int m_socketHandle;
	char* buf;
};
