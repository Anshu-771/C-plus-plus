#include<iostream>

using namespace std;

class sample
{
	int a,b;
	
	public:
		sample()
		{
			cout<<"\n Enter the value of A : ";
			cin>>a;
			cout<<"\n Enter the value of B : ";
			cin>>b;
		}
		sample(sample &obj)
		{
			a=obj.a;
			b=obj.b;
		}
		void putdata()
		{
			cout<<"\n the value of A : "<<a;
			cout<<"\n the value of B : "<<b;
		}
};

int main()
{
	sample obj;
	sample obj1(obj);
	obj.putdata();
	obj1.putdata();
	return 0;
}
