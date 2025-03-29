#include<iostream>
#include<string.h>

using namespace std;

class sample
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"\n enter the value of A : ";
			cin>>a;
			cout<<"\n enter the value of B : ";
			cin>>b;
		}
		
		friend sample operator+(sample obj,int n)
		{
			sample obj2;
			obj2.a=obj.a+n;
			obj2.b=obj.b+n;
	    	return obj2;
		}
		
		void putdata()
		{
			cout<<"\n output :\t      : "<<a;
			cout<<"\n output :\t      : "<<b;
		}
};



int main()
{
	sample obj,obj2;
	obj.getdata();
	obj2=obj+20;
	obj2.putdata();
	return 0;
}
