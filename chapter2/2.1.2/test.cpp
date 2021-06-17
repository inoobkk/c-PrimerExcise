#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// 当一个算术表达式中既有int也有unsigned int时int被转换成unsigned int 
	// int型数据为负时转换方法：2^32 + 该负数 
	unsigned u = 10, u2 = 42;	// unsigned int 可以缩写成unsigned 
	cout<<u2 - u<<endl;			// 32?
	cout<<u- u2<<endl;			// 转换成unsigned可以表示的最大值？ 
	int i = 10, i2 = 42;
	cout<<i2 - i<<endl;
	cout<<i - i2<<endl;
	cout<<i - u<<endl;
	cout<<u - i<<endl;
	u = - 1;					// unsigned的最大值是2^32 - 1, 转换成负数时 
	cout<<u<<endl;				// 是使用2^32 + 该负数 
	return 0;
 } 
