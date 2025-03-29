#include<iostream>

using namespace std;

class sample
{
	private: 
	int a,b,c;
	
	public:
	void getdata()
	{
		cout<<"enter the value of a,b and c: ";
		cin>>a>>b>>c;
	}
	
	friend float average(sample o);
};

float average(sample o)
{
	float s=(o.a+o.b+o.c)/3.0;
	return s;
}

int main()
{
	sample o;
	o.getdata();
	float f=average(o);
	cout<<"\n average = "<<f;
	return 0;
}
