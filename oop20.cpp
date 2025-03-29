#include<iostream>
using namespace std;

inline float num(int a,int b,int c)                          //function defination
{
	float cd;
	cd=(a+b+c)/3.0;
	return cd;
}

int main()
{
	
	int a,b,c;
	float avg;
	
	cout<<"enter the value of A : ";
	cin>>a;
	cout<<"enter the value of B : ";
	cin>>b;
	cout<<"enter the value of C : ";
	cin>>c;
	
	avg=num(a,b,c);                          //function calling
	
	cout<<" AVERAGE OF NUMBER IS  : "<<avg;
	
	return 0;
}


