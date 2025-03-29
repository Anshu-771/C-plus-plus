#include<iostream>
using namespace std;


int main()
{
	int a,b,n,fib;
	a=0;
	b=1;
	n=10;
	cout<<"fib : "<<a<<","<<b;
	for(int i=3;i<=n;i++)
	{
		fib=a+b;
		a=b;
		b=fib;
		cout<<","<<fib;
	}
	return 0;	
}
