#include<iostream>
using namespace std;

int main()
{
	int ival = 1.01;
	//int	&rval1 = 1.01;		// ����rval1�Ƿǳ�������
	const int &rval = 1.01; 	// ��ȷ
	cout<<rval<<endl;			// ���1 
	int &rval2 = ival;
	//int &rval3; 				// ������Ҫ��ʼ�� 
	int &rval3 = rval2;
	cout<<rval3<<endl; 			// �����ǲ���һ�����õ����ã� 
	return 0;
 } 
