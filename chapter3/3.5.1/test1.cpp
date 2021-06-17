#include<iostream>
#include<vector> 
#include<string>
using namespace std;
// important 
int f()
{
	return 5;
}
int main()
{	
	//a 
	unsigned buf_size = 1024;
	int size = 1;
	int ia[size];	
	int iaa[buf_size];		
	string bad[buf_size]; //	为什么以上de定义都是对的, vs下不能通过编译 
	// b
	int ib[4 * 7 - 14];
	
	// c
	int ic[f()]; 
	return 0;
 } 
