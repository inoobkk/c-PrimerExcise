#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// ��һ���������ʽ�м���intҲ��unsigned intʱint��ת����unsigned int 
	// int������Ϊ��ʱת��������2^32 + �ø��� 
	unsigned u = 10, u2 = 42;	// unsigned int ������д��unsigned 
	cout<<u2 - u<<endl;			// 32?
	cout<<u- u2<<endl;			// ת����unsigned���Ա�ʾ�����ֵ�� 
	int i = 10, i2 = 42;
	cout<<i2 - i<<endl;
	cout<<i - i2<<endl;
	cout<<i - u<<endl;
	cout<<u - i<<endl;
	u = - 1;					// unsigned�����ֵ��2^32 - 1, ת���ɸ���ʱ 
	cout<<u<<endl;				// ��ʹ��2^32 + �ø��� 
	return 0;
 } 
