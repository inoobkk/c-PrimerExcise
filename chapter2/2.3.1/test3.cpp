#include<iostream>
using namespace std;

int main()
{
	// 
	int i = 0, &ri = i;
	i = 5; ri = 10;
	cout<<i<<" "<<ri<<endl;		// ���10 10 
	return 0;
 } 
