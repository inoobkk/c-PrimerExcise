#include<iostream>
#include<vector> 
#include<string.h>

using namespace std;
int main()
{
	string s = "word";
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout<<p1<<endl;
	return 0;
}
