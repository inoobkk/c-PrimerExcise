#include<iostream>

using namespace std;

int main()
{
	int i; double d; const string* cps = NULL; char* pc; void* pv; string* ps;
	//a
	//pv = (void*)cps; 		// ��ȷ��ǿ������ת�� 
	//ps = (string*)cps;	// ��ȷ��ʹ��ǿ������ת�� 
	//ps = cps;				// ������ͼ����ʽ�ģ�ȥ���ײ�const���� 
	//pv = const_cast<void*>(cps);	//const_constֻ�ܵ��ڻ������ԣ�������������ת��
	//pv = static_cast<void*>(cps);	// ����static_cast��������ȥ���ײ�const���� 
	pv = static_cast<void*>(const_cast<string*>(cps));	//��ȷ����ʹ��const_castȥ���ײ�const���ԣ�����static_cast��������ת��
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
