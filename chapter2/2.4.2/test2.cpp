
#include<iostream>
using namespace std;

int main()
{
	//int i, *const cp; 			// 试图定义一个常量指针，但是没有初始化
	const int* p;  					// 正确，p不是常量，不用赋初值
	 
	return 0;
 } 
