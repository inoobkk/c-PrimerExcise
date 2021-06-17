#include<iostream>
using namespace std;

int main()
{
	// 以下赋值操作都正确 
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	r2 = r1;
	i = r2;
	r1 = d; 
	return 0;
 } 
