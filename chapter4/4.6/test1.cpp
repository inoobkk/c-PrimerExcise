#include<iostream>
#include<vector> 
#include<string.h>
// important 
using namespace std;
int main()
{
	vector<string> strs;
	strs.push_back("aaaa");
	strs.push_back("bbbb");
	strs.push_back("cccc");
	strs.push_back("dddd");
	vector<string>::iterator iter = strs.begin();
	//cout<<*iter++<<endl;	// ++ �����ȼ�����*
	// (*iter)++;				// ����
	//*it.empty();  				// ���󣬳�Ա���ʷ����ȼ�����*
	iter->empty();
	//++*iter; 				// ����
	iter++->empty();		// ���ΪʲôҲû�д� 
	return 0;
}
