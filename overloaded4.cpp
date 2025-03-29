#include<iostream>
#include<string.h>

using namespace std;

class sample
{
	private:
		int a,b,c;
	public:
		void getdata()
		{
			cout<<"\n enter the value of A : ";
			cin>>a;
			cout<<"\n enter the value of B : ";
			cin>>b;
		}
		
		sample operator+()
		{
			sample obj3;
			obj3.c=a+b;
			return(obj3);
		}
		
		void putdata()
		{
			cout<<"\n output\t \t      : "<<c;
		}
};
int main()
{
	sample obj,obj3;
	obj.getdata();
	obj=obj.operator+();
	obj.putdata();
	return 0;
}
