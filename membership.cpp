#include<iostream>


using namespace std;

class sample                 
{
	protected:
		int b;
		int c;
		int a;
	public:
		void getdata()
		{
			a=12;
			b=15;
		}
		void bshow()
		{
			cout<<"\nenter the value of b: ";
			cin>>b;
		}
		void putdata()
		{
			cout<<"\na value: "<<a;
			cout<<"\nb value: "<<b;
		}
};

class sub:public sample
{
	public:
		
		void show()
		{
			cout<<"\nc value: "<<c;
			cout<<"\nb value: "<<b;
		}
};

int main()
{	
	sub obj;
	obj.getdata();
	obj.putdata();
	obj.bshow();
	obj.putdata();
	obj.show();



//	sample obj1;
//	obj1.getdata();
//	obj1.putdata();
	
	
	
	return 0;
}
