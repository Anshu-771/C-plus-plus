#include<iostream>
using namespace std;

float area(int r)
{
	return(r*r*r);
}

float area(int a,int b,int c)
{
	return(a*b*c);
}

float area(int a,int b)
{
	return(3.14*a*a*b);
}

int main()
{
	int a,b,c,opt;
	float ar;
	cout<<"main menu";
	cout<<"\n1. volumn of cube ";
	cout<<"\n2. volumn of cuboid";
	cout<<"\n3. volumn of cylinder";
	cout<<"\nselect :: ";
	cin>>opt;
	switch(opt)
	{
		case 1:cout<<"enter the cube side : ";
			   cin>>a;
			   ar=area(a);
			   cout<<"volumn of cube : "<<ar;
			   break;
		case 2:cout<<"enter the length and breath and wrieth : ";
			   cin>>a>>b>>c;
			   ar=area(a,b,c);
			   cout<<"volumn of cuboid : "<<ar;
			   break;
		case 3:cout<<"enter the redius and height of cylinder : ";
			   cin>>a>>b;
			   ar=area(a,b);
			   cout<<"volumn of cylinder : "<<ar;
			   break;
		default:cout<<"wrong choice select";
			   break;
	}
	return 0;
}
