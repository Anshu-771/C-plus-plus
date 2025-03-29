#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int *x=&a;
	int *y=&b;
	int c;
	
	cout<<"\n";
	cout<<"value of a: "<<a<<"  value of b: "<<b;
	
	c=*x;
	a=*y;
	b=c;
	
	cout<<"\n";
	cout<<"value of a: "<<a<<"  value of b: "<<b;
	
	return 0;
}
