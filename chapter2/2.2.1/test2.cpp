#include<iostream>
#include<string>
using namespace std;
// �������κκ���֮��ı�������ʼ��Ϊ0 
string g_string;
int g_int;
int main()
{
	cout<<g_string<<endl;	// g_string = "". default constructor.
	cout<<g_int<<endl;		// g_int = 0. default initialization.
	int k;
	cout<<k<<endl;			// k = 0. why?
	return 0;
 } 
