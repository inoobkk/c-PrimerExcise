#include<iostream>
using namespace std;

int main()
{
	int ival = 1.01;
	//int	&rval1 = 1.01;		// 错误：rval1是非常量引用
	const int &rval = 1.01; 	// 正确
	cout<<rval<<endl;			// 输出1 
	int &rval2 = ival;
	//int &rval3; 				// 引用需要初始化 
	int &rval3 = rval2;
	cout<<rval3<<endl; 			// 这里是不是一个引用的引用？ 
	return 0;
 } 
