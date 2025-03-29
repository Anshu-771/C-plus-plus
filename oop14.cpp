#include<iostream>
#include<string.h>
using namespace std;
struct phone{
	int area;
	int exhange;
	int number;
}; 

int main()
{
	int i;
	phone my={212,653,5704};
	phone user;
	
	cout<<"\n";
	cout<<"enter user phone number : ";
	cin>>user.area>>user.exhange>>user.number;
	
	
	cout<<"\n";
	cout<<"phone(output)USER MOBILE : "<<user.area<<"-"<<user.exhange<<"-"<<user.number;
	
	cout<<"\n";
	cout<<"phone(output)  MY MOBILE : "<<my.area<<"-"<<my.exhange<<"-"<<my.number;
	
	return 0;
}
