#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b=2)                         //function defination
{
	int c=pow(a,b);
	return c;
}

int main()
{
	
	int a,c;
	
	cout<<"enter the value of base : ";
	cin>>a;
	
	c=power(a);                            //function calling
	
	cout<<"power of a^b  : "<<c;
	
	return 0;
}


