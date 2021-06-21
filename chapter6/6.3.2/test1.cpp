#include<iostream>
#include<string>
#include<vector>
using namespace std;
// 没什么问题, 但是由于a[10]没有初始化，可能还是会出一些问题 
// 比如用get(a, idx)为某个int变量赋初值 
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



