#include<iostream>

using namespace std;

class shape
{
	protected:
	int a,b;
	public:
	void getdata()
	{
		cout<<"\n enter the value A,B :  \n";
		cin>>a>>b;
	}
	void area()
	{
		cout<<"\n ::computation not possible::";
	}
};

class rectangle:public shape
{
	public:
	void area()
	{
		cout<<"\n rectangular area : "<<a*b;
	} 	
};

class triangle:public shape
{
	public:
	void area()
	{
		cout<<"\n rectangular area : "<<(1*a*b)/2;
	}
};

int main()
{
	shape  s,*prt;
	rectangle r,;
	triangle t;
	r.getdata();
	t.getdata();
	r.area();
	prt=&s;
	prt->area();
	prt=&r;
	prt->area();
	prt=&t;
	prt->area();
	return 0;
}
