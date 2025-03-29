#include<iostream>

using namespace std;

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
	
	friend class sample1;
};

class sample1
{
	private:
	int b,c;
	
	public:
	void getdata()
	{
		cout<<"enter the value of b: ";
		cin>>b;
	}
	void compute(sample o)
	{
		c=o.a+b;
		cout<<"SUM = "<<c;
	}
};

int main()
{
	sample o;
	sample1 p;
	o.getdata();
	p.getdata();
	p.compute(o);
	return 0;
}
