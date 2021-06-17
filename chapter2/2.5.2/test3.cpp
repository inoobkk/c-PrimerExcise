
#include<iostream>
using namespace std;
int main()
{
	const int i = 42;
	auto j = i;
	j = 1;
	cout<<j<<endl;				// auto一般会忽略顶层const 
	const auto &k = i;			// 明确指定为顶层const 
	//k = 1; 					// k是const引用 
	auto *p = &i;				// p的类型是const int*
	//int* pp = &i;				// invalid conversion from const int* to int*
	//*pp = 1; 
	p = 0;						
	*p = 1; 					
	 
	const auto j2 = i, &k2 = i;	// 同上 
	return 0;
 } 
