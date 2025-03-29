#include<iostream>
using namespace std;


int main()
{
	
	int n,f;
	int factor(int);                          //function prototype
	
	cout<<"enter the number to find a factorial : ";
	cin>>n;
	
	f=factor(n);                            //function calling
	
	cout<<"factorial of number "<<n<<" are : "<<f;
	
	return 0;
}

int factor(int a)                          //function defination
{
	int fac=1;
	if(a==0)
	{
		return(fac);
	}

	while(a>=1)
	{
		fac=fac*a;
		a=a-1;	
	}		
}
