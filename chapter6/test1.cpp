#include<iostream>
/*
1.形参，其值由外部传递给它
2.局部变量，其值由内部定义
3.局部静态变量，生存期为整个代码运行期间，可以多次被访问 

*/
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"ctr of A is called"<<endl;
	}	
}; 
class B 
{
	public:
	B()
	{
		cout<<"ctr of B is called"<<endl;
	}	
}; 
void f()
{
	static A a;
	B b;
}
int main()
{
	f();
	cout<<endl; 
	f();	// 第二次调用f时不会再次定义局部静态变量a 
	return 0;
}
