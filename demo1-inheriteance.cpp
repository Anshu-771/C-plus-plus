#include<iostream>

using namespace std;

class parenta
{
	private:
		int a;
	public:
		parenta(int n)
		{
			a=n;
		}
		int parenta_value(parenta &obj)
		{
			return(obj.a);
		}
		void display_a()
		{
			cout<<"value 'A' is : "<<a<<endl;
		}
};

class parentb
{
	private:
		int b;
	public:
		parentb(int n)
		{
			b=n;
		}
		int parentb_value(parentb &obj)
		{
			return(obj.b);
		}
		void display_b()
		{
			cout<<"value 'B' is : "<<b<<endl;
		}
};

class parentc
{
	private:
		int c;
	public:
		parentc(int n)
		{
			c=n;
		}
		int parentc_value(parentc &obj)
		{
			return(obj.c);
		}
		void display_c()
		{
			cout<<"value 'C' is : "<<c<<endl;
		}
};

class derived : public  virtual parenta, public virtual parentb, public virtual parentc
{
	private:
		int total;
	public:
		void compute(parenta &obj1, parentb &obj2, parentc &obj3)
		{
			int x,y,z;
			x=obj1.parenta_value(obj1);
			y=obj2.parentb_value(obj2);
			z=obj3.parentc_value(obj3);
			total=x+y+z;
		}
		void display()
		{
			cout<<"total sum is : "<<total<<endl;
		}
};

int main()
{
	parenta obj1(1);
	parentb obj2(2);
	parentc obj3(3);
	
	obj1.display_a();
	obj2.display_b();
	obj3.display_c();
	
	derived obj;
	
	obj.compute(obj1,obj2,obj3);
	obj.display();
	
	return 0;
}
