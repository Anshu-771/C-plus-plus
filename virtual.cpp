#include<iostream>

using namespace std;

class shape
{
	protected:
	int a,b;
	public:
	void area(int x,int y)
	{
		cout<<"\n ::computation not possible::";
	}
};

class rectangle:public shape
{
	public:
	void area(int x,int y)
	{
		cout<<"\n rectangular area : "<<x*y;
	} 	
};

class triangle:public shape
{
	public:
	void area(int x,int y)
	{
		cout<<"\n rectangular area : "<<(1*x*y)/2;
	}
};

int main()
{
	shape  s,*prt;
	rectangle r;
	triangle t;
	prt=&s;
	prt->area(2,3);
	prt=&r;
	prt->area(2,3);
	prt=&t;
	prt->area(2,3);
	return 0;
}
