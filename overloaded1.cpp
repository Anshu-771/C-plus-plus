#include<iostream>
#include<cmath>

using namespace std;

class sample{
	
	public:
	void check(int a,int b)
	{
		if(a%b==0)
		{
			cout<<"\n yes divisible";
		}
		else
		{
			cout<<"\n not divisible";
		}
	}
	void check(int n)
	{
		if(n%2==0)
		{
			cout<<"\n its even";
		}
		else
		{
			cout<<"\n its odd";
		}
	}
};

int main()
{
	int opt,a,b;
	sample obj;
	cout<<"\nmain menu ";
	cout<<"\n1. check it's divisible: ";
	cout<<"\n2. check it's odd/even : ";
	cin>>opt;
	switch(opt)
	{
		case 1:cout<<"\n enter the 2 values : ";
			   cin>>a>>b;
			   obj.check(a,b);
			   break;
		case 2:cout<<"\n enter the 1 value : ";
			   cin>>a;
			   obj.check(a);
			   break;
		default:cout<<"\n wrong choice select ";
			   break;
	}
	return 0;
}
