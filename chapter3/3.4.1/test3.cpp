#include<iostream>
#include<vector> 
#include<string>
using namespace std;
int main()
{	
	vector<int> a(10, 1); 
	vector<int>::iterator it;
	for(it = a.begin(); it != a.end(); it++)
	{
		*it = *it * 2;
	}
	for(it = a.begin(); it != a.end(); it++)
	{
		cout<<*it<<endl;
	}
	return 0;
 } 
