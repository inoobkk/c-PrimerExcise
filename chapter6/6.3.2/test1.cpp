#include<iostream>
#include<string>
#include<vector>
using namespace std;
// ûʲô����, ��������a[10]û�г�ʼ�������ܻ��ǻ��һЩ���� 
// ������get(a, idx)Ϊĳ��int��������ֵ 
int &get(int* arr, int idx)
{
	return arr[idx];
}
int main()
{
	int a[10];
	for(int i = 0; i != 10; i++)
	{
		get(a, i) = i;
	}
	for(int i = 0; i != 10; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}



