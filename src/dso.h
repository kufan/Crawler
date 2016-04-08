#ifndef DSO_H
#define DSO_H 

#include <string>
#include <map>

using namespace std;

#define MODULE_OK  0
#define MODULE_ERR 1

#define MAGIC_MAJOR_NUMBER 1
#define MAGIC_MINOR_NUMBER 0

#define STANDARD_MODULE_STUFF MAGIC_MAJOR_NUMBER, \
                              MAGIC_MINOR_NUMBER, \
                              __FILE__
/* 模块描述结构 */
typedef struct Module{
    int          version;
    int          minor_version;
    const char  *name;
    void (*init)(Module *);
    int (*handle)(void *);
} MODULE;

class ModuleManager
{
public:
	ModuleManager();
	~ModuleManager();

	int load(string path, string name );   //从编译好的模块动态载入
	MODULE *getModule(string);             //从模块列表中找到需要的模块

private:
	map<string, MODULE*> m_modules;        //模块管理结构
};

struct htmlParserParam
{
	string url;  /*in*/
        list<string> urls;  /*out*/

};

#endif
