#include<iostream>

using namespace std;

int main()
{
	int i; double d; const string* cps = NULL; char* pc; void* pv; string* ps;
	//a
	//pv = (void*)cps; 		// 正确，强制类型转换 
	//ps = (string*)cps;	// 正确，使用强制类型转换 
	//ps = cps;				// 错误，试图（隐式的）去掉底层const属性 
	//pv = const_cast<void*>(cps);	//const_const只能调节基础属性，不能用于类型转换
	//pv = static_cast<void*>(cps);	// 错误，static_cast不能用于去掉底层const属性 
	pv = static_cast<void*>(const_cast<string*>(cps));	//正确，先使用const_cast去掉底层const属性，再用static_cast进行类型转换
	//b
	i = int(*pc); 
	i = static_cast<int>(*pc);
	//c
	pv = &d;
	pv = static_cast<void*>(&d);
	//d
	pc = (char*)pv;
	pc = static_cast<char*>(pv);
	return 0;
}
