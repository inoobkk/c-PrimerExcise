#include<iostream>
#include<vector> 
#include<string>
using namespace std;
// important��vs2017�е���������һ�� 
int main()
{
	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
	cout<<sizeof(ca)<<endl;
	//char ca2[] = { 'h', 'e', 'l', 'l', 'o' };
	const char* cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
		if (*cp == '\0')
		{
			cout << "----------------------" << endl;
		}
	}
	return 0;
}
