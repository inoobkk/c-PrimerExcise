
// important
#include<iostream>
using namespace std;
int main()
{
	/*
	1.����Ϊ�Ĵ𰸣�
		c int���� ++c��c=4
	 	d const int����
	�𰸴��� 
	*/
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;	// d��int& ���� 
	c = 9;
	++d;
	cout<<c<<endl;
	cout<<d<<endl; 
	cout<<a<<endl;
	return 0;
 } 
