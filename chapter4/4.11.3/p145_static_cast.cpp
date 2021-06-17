#include<iostream>

using namespace std;

int main()
{
	double a = 3.14;
	//int b = a;
	int c = static_cast<int>(a);
	const char* cp;
	//char* p = cp;	// 错误，invalid conversion from 'const char*' to 'char*'
	// 上面的这一行代码试图去掉const属性，使得可以通过*p对对象进行修改，这是不行的
	// char *const cpp = NULL;
	// char *pp = cpp; // 将常量赋给变量是允许的 
	char* p = const_cast<char*>(cp);	// 正确 
	return 0;
}
