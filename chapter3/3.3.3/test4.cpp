#include<iostream>
#include<vector> 
#include<string>
using namespace std;
int main()
{	
	vector<int> a(10, 42);
	vector<int> b{10, 42};
	// ����һ�����б��ʼ����
	vector<int> c{2,2};
	vector<int> d = {2,2};	// ��ֵ���캯�� 
	
	cout<<b.size()<<endl; 
	return 0;
 } 
