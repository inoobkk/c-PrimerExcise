#include<iostream>
#include<string>
using namespace std;
int main()
{
	const string s = "Keep";
	for(auto &c: s)
	{
		//c = 'a';  // ����, c�ǳ�������, ����const char& c��˵
					// c���õĶ�����һ�����������ڵײ�const��auto
					// auto������Եײ�const����
		const char& c = 'c';
		const char& b = 'b';	// ���ð���ɾ��޷��󶨵������ط��� 
		const char a = 'a';
							 
	}
	return 0;
 } 
