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
	print(a);	// 编译器并不会要求实参（数组）的长度大于10，可能造成数组越界的问题 
	return 0;
}



