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
	string bad[buf_size]; //	Ϊʲô����de���嶼�ǶԵ�, vs�²���ͨ������ 
	// b
	int ib[4 * 7 - 14];
	
	// c
	int ic[f()]; 
	return 0;
 } 
