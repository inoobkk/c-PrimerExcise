#include<iostream>
#include<vector> 
#include<string.h>
/*
���ʣ�������ĵ�ַȡ��ַ + 1����Ϊʲô��Խ��һ������ĳ��ȣ� 
*/
using namespace std;
int main()
{
	int x[10]; int *p = x;
	cout<<sizeof(x) / sizeof(*x)<<endl;
	cout<<sizeof(p) / sizeof(*p)<<endl;
	cout<<sizeof(p)<<endl;
	cout<<sizeof(x)<<endl;
	cout<<"--------------------"<<endl;
	cout<<x<<endl;
	cout<<x + 1<<endl;
	cout<<"--------------------"<<endl;
	cout<<p<<endl;
	cout<<p + 1<<endl;
	cout<<"--------------------"<<endl;
	cout<<&x<<endl;
	cout<<&x + 1<<endl;
	cout<<"--------------------"<<endl;
	cout<<sizeof(&x)<<endl;
	cout<<sizeof(&p)<<endl;
	cout<<"--------------------"<<endl;
	cout<<&p<<endl;
	cout<<&p + 1<<endl;
	return 0;
}
