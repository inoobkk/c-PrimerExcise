#include<iostream>

using namespace std;

int main()
{
	int a = 2;
	if(a == 1)
		if(a > 0)
			a += 1;
	else a = 1;			// ����else����ƥ�����Ϊ�������if����ƥ�� 
	cout<<a<<endl;
	return 0;
}
