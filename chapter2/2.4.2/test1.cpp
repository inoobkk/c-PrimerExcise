
#include<iostream>
using namespace std;

int main()
{
	//int i = -1, &r = 0;					// 不能将非常量引用绑定到常量上 
	int i2 = 0;
	//int* const p2 = &i2;
	
	//const int i = -1, &r = 0;				// 正确，这里r是const的引用 
	//const int* const p3 = &i2;			// 正确 
	//*p3 = 2;								// 错误，不能通过p3修改i2的值
	
	//int* const p3 = &i2;
	//*p3 = 2;								// 正确，不能修改指针本身，但是可以通过指针修改其指向的对象 
	
	//const int* p1 = &i2;
	const int &const r2 = 10;				// ??? 当const被用作声明引用时，只有底层const，没有顶层const 
	
	//int i = 0;
	//const int i3 = i, &r= i;
	return 0;
 } 
