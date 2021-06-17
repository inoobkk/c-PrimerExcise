
// important 
// decltype推断时是否会忽略顶层const属性？ 
#include<iostream>
using namespace std;
int main()
{
	const int a = 2;
	auto b = a;			// b是int类型 
	decltype(a) c = 5;	// c是const int类型 
 	b = 8;
	//c = 9;			// 错误 assignment of read-only variable 'c' 
 	
	return 0;
 } 
