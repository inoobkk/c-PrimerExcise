//important 
#include<iostream>
using namespace std;
int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;		
	decltype(a = b) d = a;	// decltype并不会实际执行表达式 
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<a<<endl;			// 表达式实际上没有被执行，a的值没有发生变化 
	d = 1;
	cout<<a<<endl;			// d是a的引用 
	cout<<d<<endl; 
	return 0;
 } 
