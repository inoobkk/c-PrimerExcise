//important 
#include<iostream>
using namespace std;
int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;		
	decltype(a = b) d = a;	// decltype������ʵ��ִ�б��ʽ 
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<a<<endl;			// ���ʽʵ����û�б�ִ�У�a��ֵû�з����仯 
	d = 1;
	cout<<a<<endl;			// d��a������ 
	cout<<d<<endl; 
	return 0;
 } 
