#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"s[0]:"<<s[0]<<endl;
	s[0] = 'a';
	cout<<"s[0]:"<<s[0]<<endl;
	s += '1';
	cout<<s<<endl;
	return 0;
 } 
