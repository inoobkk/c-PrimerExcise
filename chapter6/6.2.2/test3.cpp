#include<iostream>
using namespace std;
void f(int)
{
	cout<<"f(int)"<<endl;
}
void f(&int)	// 这是什么操作？编译通不过。。。应该是印刷错误 
{
	cout<<"f(&int)"<<endl;
}
int main()
{
	
	return 0;
}


