
// important
#include<iostream>
using namespace std;
int main()
{
	/*
	1.我认为的答案：
		c int类型 ++c后c=4
	 	d const int类型
	答案错误 
	*/
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;	// d是int& 类型 
	c = 9;
	++d;
	cout<<c<<endl;
	cout<<d<<endl; 
	cout<<a<<endl;
	return 0;
 } 
