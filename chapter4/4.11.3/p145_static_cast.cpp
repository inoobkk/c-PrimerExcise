#include<iostream>

using namespace std;

int main()
{
	double a = 3.14;
	//int b = a;
	int c = static_cast<int>(a);
	const char* cp;
	//char* p = cp;	// ����invalid conversion from 'const char*' to 'char*'
	// �������һ�д�����ͼȥ��const���ԣ�ʹ�ÿ���ͨ��*p�Զ�������޸ģ����ǲ��е�
	// char *const cpp = NULL;
	// char *pp = cpp; // ��������������������� 
	char* p = const_cast<char*>(cp);	// ��ȷ 
	return 0;
}
