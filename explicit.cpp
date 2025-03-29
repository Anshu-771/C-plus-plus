#include<iostream>

using namespace std;

class sample
{
	int a,b;
	
	public:
		sample(int x,int y)
		{
			a=x;
			b=y;
		}
		
		void putdata()
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
		}
};

int main()
{
	sample obj1=sample(7,3);
	obj1.putdata();
	return 0;	
}
