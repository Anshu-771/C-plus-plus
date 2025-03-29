#include<iostream>
using namespace std;


int main()
{
	int a,s,f;
	a=1;
	f=0;
	do{
		s=a*a;
		cout<<"\n square of "<<a<< " : "<<s;
		f=s+f;
		a=a+1;
	}while(a<=10);
	cout<<"square of 1 to 10 : "<<f;
	return 0;	
}









