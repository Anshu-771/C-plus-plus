#include<iostream>               
using namespace std;


int max(int x,int y)
{
	return(x>y?x:y);
}

int max(int x,int y,int z)
{
	return(max(max(x,y),z));
}


int main()
{
	
	int a,b,c,d;
	cout<<"ENTER THE VALUE OF A : ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B : ";
	cin>>b;
	cout<<"ENTER THE VALUE OF C : ";
	cin>>c;
	
	cout<<"MAXIMUM OF "<<a<<" , "<<b<<" , "<<c<<" is : "<<max(a,b,c);
	
	d=max(a,b,c);
	
	if(d==a)
	{
		cout<<"\n a is greater";
	}
	else if(d==b)
	{
		cout<<"\n b is greater";
	}
	else
	{
		cout<<"\n c is greater";
	}
		
	return 0;
}
