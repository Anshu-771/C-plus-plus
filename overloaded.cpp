#include<iostream>
#include<cmath>

using namespace std;

float area(int a)
{
	return(3.14*a*a);
}

float area(int a,int b)
{
	return(a*b);
}

float area(int a,int b,int c)
{
	float s;
	s=(a+b+c)/2.0;
	s=sqrt(s*(s-a)*(s-b)*(s-c));
	return(s);
}

int main()
{
	int a,b,c,opt;
	cout<<"\n main menu ";
	cout<<"\n area of circle ";
	cout<<"\n area of rectangular";
	cout<<"\n area of triangle";
	cin>>opt;
	switch(opt)
	{
		case 1:cout<<"\n enter the radius: ";
			   cin>>a;
			   cout<<"\n area of circle : "<<area(a);
			   break;
		case 2:cout<<"\n enter the lenght and breath : ";
			   cin>>a>>b;
			   cout<<"\n area of reatangle : "<<area(a,b);
			   break;
		case 3:cout<<"\n enter the sides of /_\ : ";
			   cin>>a>>b>>c;
			   cout<<"\n area of triangle : "<<area(a,b,c);
			   break;
		default:cout<<"\n wrong choice select ";
			   break;
	}
}
