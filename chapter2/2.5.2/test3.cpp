
#include<iostream>
using namespace std;
int main()
{
	const int i = 42;
	auto j = i;
	j = 1;
	cout<<j<<endl;				// autoһ�����Զ���const 
	const auto &k = i;			// ��ȷָ��Ϊ����const 
	//k = 1; 					// k��const���� 
	auto *p = &i;				// p��������const int*
	//int* pp = &i;				// invalid conversion from const int* to int*
	//*pp = 1; 
	p = 0;						
	*p = 1; 					
	 
	const auto j2 = i, &k2 = i;	// ͬ�� 
	return 0;
 } 
