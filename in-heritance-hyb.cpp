#include<iostream>

using namespace std;

class base
{
	public:
	int a;
};

class sub1:public virtual base
{
	public: 
	int b;	
};

class sub2:public virtual base
{
	public: 
	int c;	
};

class derived:public sub1,public sub2
{
	public: 
	int s;	
};

int main()
{
	derived obj;
	obj.a=10;
	obj.b=20;
	obj.c=30;
	obj.s=obj.a+obj.b+obj.c;
	cout<<"\n sum of a,b,c is : "<<obj.s;
	return 0;
}
