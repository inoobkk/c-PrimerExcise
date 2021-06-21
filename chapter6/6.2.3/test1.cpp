/*--------------------------------------------------------*/
// v1
/*
#include<iostream>
#include<string>
using namespace std;
bool is_empty(string& s)
{
	return s.empty();	// 局限性：不能传递一个常量字符串作为实参
	// 原因是不能把非常量引用绑定到常量上
}
bool is_empty(const string& s)
{
	return s.empty();
}

int main()
{
	const string s = "aaaa";
	bool res = is_empty(s);	// is_empty不明确？why
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
	bool res = isEmpty(cs);	// 现在ok了，似乎是is_empty()和已有的函数名冲突了？
	string s = "bbbb";
	isEmpty(s);				// 调用isEmpty(string& s)
	isEmpty("bbbbbb"); 		// 调用isEmpty(const string& s)
	return 0;
}



