#include<iostream>
using namespace std;
void f(int)
{
	cout<<"f(int)"<<endl;
}
void f(&int)	// ����ʲô����������ͨ����������Ӧ����ӡˢ���� 
{
	cout<<"f(&int)"<<endl;
}
int main()
{
	
	return 0;
}


