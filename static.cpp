#include<iostream>

using namespace std;

class sample
{
	static int a;
	
	public:
		sample()
		{
			a=a+1;
		}
		
		static void putdata()
		{
			cout<<"\n total object = "<<a;
		}
};
int sample::a;
int main()
{
	sample obj1,obj2,obj3;
	sample::putdata();
	return 0;	
}
