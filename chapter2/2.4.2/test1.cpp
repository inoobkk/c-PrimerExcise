
#include<iostream>
using namespace std;

int main()
{
	//int i = -1, &r = 0;					// ���ܽ��ǳ������ð󶨵������� 
	int i2 = 0;
	//int* const p2 = &i2;
	
	//const int i = -1, &r = 0;				// ��ȷ������r��const������ 
	//const int* const p3 = &i2;			// ��ȷ 
	//*p3 = 2;								// ���󣬲���ͨ��p3�޸�i2��ֵ
	
	//int* const p3 = &i2;
	//*p3 = 2;								// ��ȷ�������޸�ָ�뱾�����ǿ���ͨ��ָ���޸���ָ��Ķ��� 
	
	//const int* p1 = &i2;
	const int &const r2 = 10;				// ??? ��const��������������ʱ��ֻ�еײ�const��û�ж���const 
	
	//int i = 0;
	//const int i3 = i, &r= i;
	return 0;
 } 
