#include<iostream>
/*
1.�βΣ���ֵ���ⲿ���ݸ���
2.�ֲ���������ֵ���ڲ�����
3.�ֲ���̬������������Ϊ�������������ڼ䣬���Զ�α����� 

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
	f();	// �ڶ��ε���fʱ�����ٴζ���ֲ���̬����a 
	return 0;
}
