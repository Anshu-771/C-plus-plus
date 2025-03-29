#include<iostream>
using namespace std;

int power(int a,int b)                          //function defination
{
	int c=1;
	if(b==0)
	{
		return c; 
	}
	else
	{
		return(a*power(a,b-1));
	}
}

int main()
{
	
	int a,b,c;
	
	cout<<"enter the value of base : ";
	cin>>a;
	cout<<"enter the value of power : ";
	cin>>b;
	
	c=power(a,b);                            //function calling
	
	cout<<"power of a^b  : "<<c;
	
	return 0;
}


