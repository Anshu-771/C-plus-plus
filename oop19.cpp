#include<iostream>
using namespace std;

int num(int a,int b)                          //function defination
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	
	int a,b,c;
	
	cout<<"enter the value of A : ";
	cin>>a;
	cout<<"enter the value of B : ";
	cin>>b;
	
	c=num(a,b);                          //function calling
	
	cout<<"smallest number is  : "<<c;
	
	return 0;
}


