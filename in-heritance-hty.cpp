#include<iostream>

using namespace std;

class parent
{
	public:
	int a,b,c,d;	
};

class comp:public parent
{
	public:
	void enter()
	{
		cout<<"enter the value of a,b,c : \n";
		cin>>a>>b>>c;
	}
	void compute()
	{
		d=a+b+c;
	}
};
class disp:public parent 
{
	public:
	void display(parent &obj)
	{
		cout<<"display sum = "<<obj.d;
	}
};
int main()
{
	comp obj;
	obj.enter();
	obj.compute();
	disp obj1; 
	obj1.display(obj);
	return 0;
}
