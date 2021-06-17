#include<iostream>
using namespace std;

int main()
{
	int* p;
	int i = 1;
	p = &i;
	cout<<"value of p:"<<p<<endl;
	cout<<"value of *p:"<<*p<<endl;
	*p = 2;
	cout<<"value of i:"<<i<<endl;
	p = 0;
	cout<<"value of p:"<<p<<endl;
	cout<<"value of *p:"<<*p<<endl;
	return 0;
 } 
