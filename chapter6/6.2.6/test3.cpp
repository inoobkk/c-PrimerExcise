#include<iostream>
#include<string>
#include<vector>
using namespace std;
int sum(initializer_list<int>& li)
{
	int res = 0;
	for(auto &it : li)	// auto &��auto��ûʲôë����auto &�����ٵ���һ��copy constructor 
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



