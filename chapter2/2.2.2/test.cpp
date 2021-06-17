#include<iostream>
#include "test.h"
using namespace std;
// 定义于任何函数之外的变量被初始化为0 
string g_string;
int g_int;
// int i;			// 重定义
extern int i;		// ok
int main()
{
	//int i = 1;		// ok. 屏蔽外层作用域的同名变量 
	//extern int i;		// ok. 在main函数中声明变量也是可以的 
	//extern int j = 1;	// 错误	
	cout<<i;
	return 0;
 } 
