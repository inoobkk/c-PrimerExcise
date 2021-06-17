#include<iostream>
#include<string>
using namespace std;
int main()
{
	const string s = "Keep";
	for(auto &c: s)
	{
		//c = 'a';  // 错误, c是常量引用, 对于const char& c来说
					// c引用的对象是一个常量，属于底层const，auto
					// auto不会忽略底层const属性
		const char& c = 'c';
		const char& b = 'b';	// 引用绑定完成就无法绑定到其他地方了 
		const char a = 'a';
							 
	}
	return 0;
 } 
