#include<iostream>
using namespace std;

int factor(int a)                          //function defination
{
	int fac;
	if(a==0)
	{
		return 1;
	}
	else
	{
		fac=a*factor(a-1);
		return fac;
	}
}

int main()
{
	
	int n,f;
	
	cout<<"enter the number to find a factorial : ";
	cin>>n;
	
	f=factor(n);                            //function calling
	
	cout<<"factorial of number "<<n<<" are : "<<f;
	
	return 0;
}


