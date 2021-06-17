#include<iostream>
#include<vector> 
#include<string.h>
// important 
using namespace std;
int main()
{
	vector<string> strs;
	strs.push_back("aaaa");
	strs.push_back("bbbb");
	strs.push_back("cccc");
	strs.push_back("dddd");
	vector<string>::iterator iter = strs.begin();
	//cout<<*iter++<<endl;	// ++ 的优先级大于*
	// (*iter)++;				// 错误
	//*it.empty();  				// 错误，成员访问符优先级高于*
	iter->empty();
	//++*iter; 				// 错误
	iter++->empty();		// 这个为什么也没有错 
	return 0;
}
