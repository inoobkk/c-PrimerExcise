#include<iostream>
using namespace std;

int main()
{
	int* p;
	if(p)
	 {
		cout<<"p is not null!"<<endl;
	 } 
	 else
	 {
	 	cout<<"p is null!"<<endl;
	 }
	 p = nullptr;
	 if(p)
	 {
		cout<<"p is not null!"<<endl;
	 } 
	 else
	 {
	 	cout<<"p is null!"<<endl;
	 }
	 int i = 0;
	 p = &i;
	 if(p)
	{
		cout<<"p is not null!"<<endl;
	 } 
	 else
	 {
	 	cout<<"p is null!"<<endl;
	 }
	 if(*p)
	{
		cout<<"*p is not 0!"<<endl;
	 } 
	 else
	 {
	 	cout<<"p is 0!"<<endl;
	 }
	return 0;
 } 
