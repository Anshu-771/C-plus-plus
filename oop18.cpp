#include<iostream>
using namespace std;

int num(int a)                          //function defination
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		a=a+num(a-1);
		return a;
	}
}

int main()
{
	
	int a,c;
	
	cout<<"enter the value of A : ";
	cin>>a;
	
	c=num(a);                          //function calling
	
	cout<<"sum of given number  : "<<c;
	
	return 0;
}


