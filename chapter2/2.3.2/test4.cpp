#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	//double* dp = &i;			// can't convert int* to double*. ����&i��int*����
	double* dp;
	cout<< sizeof(dp)<<endl;
	cout<< sizeof(&i)<<endl;	// int* ��double*����8�ֽڵģ�Ϊʲô����ת�� 
	//int* ip = i;				// can't convert int to int*
	int* p = &i; 
	return 0;
 } 
