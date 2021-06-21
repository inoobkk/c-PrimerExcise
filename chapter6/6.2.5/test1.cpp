#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 需要在命令行下运行或设置参数 
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
		args += argv[i];	// string可以 '+' char * 
	}
	cout<<"args:"<<args<<endl;
	return 0;
}



