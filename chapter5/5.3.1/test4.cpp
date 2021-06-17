#include<iostream>

using namespace std;

int main()
{
	int a = 2;
	if(a == 1)
		if(a > 0)
			a += 1;
	else a = 1;			// 垂悬else，其匹配规则为与最近的if进行匹配 
	cout<<a<<endl;
	return 0;
}
