
// important 
// decltype�ƶ�ʱ�Ƿ����Զ���const���ԣ� 
#include<iostream>
using namespace std;
int main()
{
	const int a = 2;
	auto b = a;			// b��int���� 
	decltype(a) c = 5;	// c��const int���� 
 	b = 8;
	//c = 9;			// ���� assignment of read-only variable 'c' 
 	
	return 0;
 } 
