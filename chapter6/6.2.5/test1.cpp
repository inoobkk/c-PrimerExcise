#include<iostream>
#include<string>
#include<vector>
using namespace std;

// ��Ҫ�������������л����ò��� 
int main(int argc, char **argv)
{
	if(argc < 2)
	{
		cout<<"please input some value"<<endl;
		return 0;
	}
	string program_name = argv[0];
	cout<<"program_name:"<<program_name<<endl;
	string args;
	for(int i = 1; i < argc; i++)
	{
		args += argv[i];	// string���� '+' char * 
	}
	cout<<"args:"<<args<<endl;
	return 0;
}



