#include<iostream>

using namespace std;

class sample1;
class sample
{
	private: 
	int a;
	
	public:
	void getdata()
	{
		cout<<"enter the value of a: ";
		cin>>a;
	}
	
	friend int compute(sample o,sample1 p);
};

class sample1 
{
	private:
	int b;
	
	public:
	void getdata()
	{
		cout<<"enter the value of b: ";
		cin>>b;
	}
	friend int compute(sample o,sample1 p);
};

int compute(sample o,sample1 p)
{
	int s=(o.a*o.a)+(p.b*p.b);
	return s;
}

int main()
{
	sample o;
	sample1 p;
	o.getdata();
	p.getdata();
	float f=compute(o,p);
	cout<<"\n sum and square = "<<f;
	return 0;
}
