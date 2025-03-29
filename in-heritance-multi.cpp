#include<iostream>

using namespace std;

class parenta										//class A storing variable A.
{
	private:
		int a;
	public:
		parenta()
		{
		cout<<"enter the value of A : ";
		cin>>a;
		}
		int parenta_value()
		{
			return(a);
		}
		void display_a()
		{
			cout<<"value 'A' is : "<<a;
		}
};

class parentb										//class B storing variable B.
{
	private:
		int b;
	public:
		parentb()
		{
		cout<<"enter the value of B : ";
		cin>>b;
		}
		int parentb_value()
		{
			return(b);
		}
		void display_b()
		{
			cout<<"value 'B' is : "<<b;
		}
};

class parentc										//class C storing variable C.
{
	private:
		int c;
	public:
		parentc()
		{
		cout<<"enter the value of C : ";
		cin>>c;
		}
		int parentc_value()
		{
			return(c);
		}
		void display_c()
		{
			cout<<"value 'C' is : "<<c;
		}
};

class derived : public parenta ,public parentb ,public parentc
{
	private:
		int total;
	public:
		void compute()
		{
			int x,y,z;
			x=parenta_value();
			y=parentb_value();
			z=parentc_value();
			total=x+y+z;
		}
		void display()
		{
			cout<<"total sum is : "<<total;
		}
};

int main()
{	
	derived obj;
	
	obj.compute();
	obj.display();
	
	return 0;
}
