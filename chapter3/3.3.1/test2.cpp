#include<iostream>
#include<vector> 
#include<string>
using namespace std;
int main()
{	// (d)
	vector<int> v4{10};						
	cout<<v4.size()<<endl;
	// (e)
	vector<int> v5{10, 42};	
	cout<<v5.size()<<endl;	
	// (f)
	vector<string> v6{10};	// ��Ҫ����v6��ʼ��Ϊ10�����ַ��� 
	cout<<v6.size()<<endl;	
	cout<<v6[0]<<endl;
	// (g)
	vector<string> v7{10, "hi"};
	cout<<v7.size()<<endl;
	cout<<v7[0]<<endl;
	return 0;
 } 
