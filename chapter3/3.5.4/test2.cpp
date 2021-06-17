#include<iostream>
#include<vector> 
#include<string.h>

using namespace std;
int main()
{
	int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;	// result = 76? ´íÎó 
	cout<<a<<endl;
	int b = 12 / 3 * 4 + 5 * 15 + 24 % 5 / 2;
	cout<<b<<endl;
	return 0;
}
