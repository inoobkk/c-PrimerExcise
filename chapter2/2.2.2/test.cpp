#include<iostream>
#include "test.h"
using namespace std;
// �������κκ���֮��ı�������ʼ��Ϊ0 
string g_string;
int g_int;
// int i;			// �ض���
extern int i;		// ok
int main()
{
	//int i = 1;		// ok. ��������������ͬ������ 
	//extern int i;		// ok. ��main��������������Ҳ�ǿ��Ե� 
	//extern int j = 1;	// ����	
	cout<<i;
	return 0;
 } 
