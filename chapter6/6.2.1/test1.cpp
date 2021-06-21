#include<iostream>
/*
1.形参，其值由外部传递给它
2.局部变量，其值由内部定义
3.局部静态变量，生存期为整个代码运行期间，可以多次被访问 

*/
using namespace std;
void mySwap(int* pi1, int* pi2);
int main()
{
	int a = 10, b = 20;
	mySwap(&a, &b);
	cout<<"a:"<<a<<" b:"<<b<<endl;
	return 0;
}
void mySwap(int* pi1, int* pi2)
{
	int tmp = *pi1;
	*pi1 = *pi2;
	*pi2 = tmp;
}
