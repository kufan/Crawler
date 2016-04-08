#include<stdio.h>

class SaveBase
{
public:
	int setFilePathName();
	virtual int save() = 0;
	int setFileData(void* data);

};



