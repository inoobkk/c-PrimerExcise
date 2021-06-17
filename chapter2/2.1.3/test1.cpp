#include<iostream>
using namespace std;
int main()
{
	cout<<"a--------------------"<<endl;
	cout<<sizeof('a')<<endl;	// char
	cout<<sizeof(L'a')<<endl;	// wchar_t
	//cout<<sizeof('a'L)<<endl;	错误
	cout<<sizeof("a")<<endl;	// string
	cout<<sizeof(L"a")<<endl;	//每个字符为wchar_t类型，包括'\0'
	cout<<"b--------------------"<<endl;
	// 4 bytes
	cout<<sizeof(10)<<endl; 
	cout<<sizeof(10u)<<endl;	// unsigned 
	//cout<<sizeof(u10)<<endl;	// u10未定义 
	//int 2a = 0; 				// 变量定义不能以数字开头
	//int 2_a = 0;				// 错误
	cout<<sizeof(10L)<<endl;	// long
	cout<<sizeof(012)<<endl;	// 8进制 
	cout<<sizeof(0xC)<<endl;
	cout<<"c--------------------"<<endl;
	cout<<sizeof(3.14)<<endl;	// double, 8 bytes
	cout<<sizeof(3.14f)<<endl;	// float, 4 bytes
	cout<<sizeof(3.14L)<<endl;	// long double, 16 bytes
	cout<<"d--------------------"<<endl;
	cout<<sizeof(10)<<endl;		// int
	cout<<sizeof(10u)<<endl;	// unsigned int
	cout<<sizeof(10.)<<endl;	// double, 8 bytes
	cout<<sizeof(10e-2)<<endl;	// double, 8bytes
	return 0;
 } 
