
#include<iostream>
using namespace std;

int main()
{
	const int ic = 0;
	int* p1;
	//p1 = &ic; 			// ����const int*���Ͳ���ת����int*���� 
	// ������ûʲô
	int i = 100;
	int &ri= i;
	int* p = &ri; 
	cout<<*p<<endl;
	return 0;
 } 
