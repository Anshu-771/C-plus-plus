#include<iostream>
#include<math.h>
using namespace std;

float area(int r)
{
	return(3.14*r*r);
}

float area(int a,int b)
{
	return(a*b);
}

float area(int a,int b,int c)
{
	float ar,s;
	s=(a+b+c)/2.0;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}

int main()
{
	int a,b,c,opt;
	float ar;
	cout<<"main menu";
	cout<<"\n1. AREA of circle ";
	cout<<"\n2. AREA of rectangular";
	cout<<"\n3. AREA of triangular";
	cout<<"\nselect :: ";
	cin>>opt;
	switch(opt)
	{
		case 1:cout<<"enter the radius : ";
			   cin>>a;
			   ar=area(a);
			   cout<<"area of circle : "<<ar;
			   break;
		case 2:cout<<"enter the length and breath : ";
			   cin>>a>>b;
			   ar=area(a,b);
			   cout<<"area of rectangular : "<<ar;
			   break;
		case 3:cout<<"enter the 3 sides of triangle : ";
			   cin>>a>>b>>c;
			   ar=area(a,b,c);
			   cout<<"area of triangle : "<<ar;
			   break;
		default:cout<<"wrong choice select";
			   break;
	}
	return 0;
}
