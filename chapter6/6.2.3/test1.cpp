/*--------------------------------------------------------*/
// v1
/*
#include<iostream>
#include<string>
using namespace std;
bool is_empty(string& s)
{
	return s.empty();	// �����ԣ����ܴ���һ�������ַ�����Ϊʵ��
	// ԭ���ǲ��ܰѷǳ������ð󶨵�������
}
bool is_empty(const string& s)
{
	return s.empty();
}

int main()
{
	const string s = "aaaa";
	bool res = is_empty(s);	// is_empty����ȷ��why
	return 0;
}
*/

/*---------------------------------------------------*/
//v2
#include<iostream>
#include<string>
using namespace std;
bool isEmpty(string& s)
{
	cout<<"isEmpty(string& s)"<<endl;
	return s.empty();
}
bool isEmpty(const string& s)
{
	cout<<"isEmpty(const string& s)"<<endl;
	return s.empty();
}

int main()
{
	const string cs = "aaaa";
	bool res = isEmpty(cs);	// ����ok�ˣ��ƺ���is_empty()�����еĺ�������ͻ�ˣ�
	string s = "bbbb";
	isEmpty(s);				// ����isEmpty(string& s)
	isEmpty("bbbbbb"); 		// ����isEmpty(const string& s)
	return 0;
}



