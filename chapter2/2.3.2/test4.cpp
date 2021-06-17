#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	//double* dp = &i;			// can't convert int* to double*. 表明&i是int*类型
	double* dp;
	cout<< sizeof(dp)<<endl;
	cout<< sizeof(&i)<<endl;	// int* 和double*都是8字节的，为什么不能转？ 
	//int* ip = i;				// can't convert int to int*
	int* p = &i; 
	return 0;
 } 
