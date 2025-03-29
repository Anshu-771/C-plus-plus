#include<iostream>

using namespace std;

int x;

class sample{
	private:
		int x;
		
	public:
		void getdata();
		void putdata();
		
};
void sample::getdata()
	{
		x=12;
		::x=15;
	}
void sample::putdata()
	{
		cout<<"\nx   =  "<<x;
		cout<<"\n::x =  "<<::x;
	}
		
int main()
{
	sample s;
	s.getdata();
	s.putdata();	
}
