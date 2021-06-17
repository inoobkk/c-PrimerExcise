
#include<iostream>
using namespace std;

int main()
{
	//const int buf;			// const变量未赋初值 
	int cnt = 0;
	const int sz = cnt;			//正确 
	++cnt;
	//++sz; 					// sz是常量，不能改变值 
	return 0;
 } 
