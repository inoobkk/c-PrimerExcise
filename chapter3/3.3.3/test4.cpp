#include<iostream>
#include<vector> 
#include<string>
using namespace std;
int main()
{	
	vector<int> a(10, 42);
	vector<int> b{10, 42};
	// 还有一种是列表初始化？
	vector<int> c{2,2};
	vector<int> d = {2,2};	// 赋值构造函数 
	
	cout<<b.size()<<endl; 
	return 0;
 } 
