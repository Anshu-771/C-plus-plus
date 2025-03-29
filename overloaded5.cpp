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
		
		void operator++()
		{
			a++;
		}
		
		void putdata()
		{
			cout<<"\n output\t \t      : "<<a;
		}
};
int main()
{
	sample obj;
	obj.getdata();
	obj++;
	obj.putdata();
	return 0;
}
