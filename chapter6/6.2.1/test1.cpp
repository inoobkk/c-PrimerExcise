#include<iostream>
/*
1.�βΣ���ֵ���ⲿ���ݸ���
2.�ֲ���������ֵ���ڲ�����
3.�ֲ���̬������������Ϊ�������������ڼ䣬���Զ�α����� 

*/
using namespace std;
void mySwap(int* pi1, int* pi2);
int main()
{
	int a = 10, b = 20;
	mySwap(&a, &b);
	cout<<"a:"<<a<<" b:"<<b<<endl;
	return 0;
}
void mySwap(int* pi1, int* pi2)
{
	int tmp = *pi1;
	*pi1 = *pi2;
	*pi2 = tmp;
}
