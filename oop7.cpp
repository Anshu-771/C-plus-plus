#include<iostream>
using namespace std;


int main()
{
	int n,f;
	cout<<"enter the value of a: ";
	cin>>n;
	f=1;
	while(n>=1)
	{
		f=f*n;
		n=n-1;
	}
	cout<<"factorial = "<<f;
	return 0;	
}
