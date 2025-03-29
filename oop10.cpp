#include<iostream>
using namespace std;


int main()
{
	int i,arr[10];
	int odd=0;
	int even=0;
	int a,b;
	a=0;
	b=0;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter the digit := ";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			a=a+arr[i];
			even++;
		}
		else
		{
			b=b+arr[i];
			odd++;
		}
	}
	cout<<"\n odd number are: "<<odd<<"\n even number are: "<<even;
	cout<<"\n odd number SUM: "<<b<<"\n even number SUM: "<<a;
	return 0;	
}
