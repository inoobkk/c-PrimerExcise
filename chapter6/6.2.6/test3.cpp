#include<iostream>
#include<string>
#include<vector>
using namespace std;
int sum(initializer_list<int>& li)
{
	int res = 0;
	for(auto &it : li)	// auto &和auto都没什么毛病，auto &可能少调用一次copy constructor 
	{
		res += it;
	}
	return res;
}
int main()
{
	initializer_list<int> li{1,2,3,4,5};
	cout<<sum(li)<<endl;
	return 0;
}



