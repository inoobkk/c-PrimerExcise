
#include<iostream>
using namespace std;

int main()
{
	const int ic = 0;
	int* p1;
	//p1 = &ic; 			// 错误const int*类型不能转换成int*类型 
	// 其他的没什么
	int i = 100;
	int &ri= i;
	int* p = &ri; 
	cout<<*p<<endl;
	return 0;
 } 
