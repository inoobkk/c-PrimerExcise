#include<iostream>
#include<string>
#include<vector>
using namespace std;

void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
	{
		cout<<ia[i]<<endl;	
	}	
} 
int main()
{
	int a[3] = {1,2,3};
	print(a);	// ������������Ҫ��ʵ�Σ����飩�ĳ��ȴ���10�������������Խ������� 
	return 0;
}



