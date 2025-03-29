#include<iostream>
#include<string.h>

using namespace std;

class sample
{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"\n enter the value of A : ";
			cin>>a;
		}
		
		sample operator+(int b)
		{
			sample obj3;
			obj3.a=a+b;
			return obj3;
		}
		
		void putdata()
		{
			cout<<"\n output :\t      : "<<a;
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
