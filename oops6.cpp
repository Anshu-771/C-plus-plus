#include<iostream>

using namespace std;

int x;

class sample{
	private:
		int x;
		
	public:
		void getdata()
		{
			x=12;
			::x=15;
		}
		void putdata()
		{
			cout<<"\nx   =  "<<x;
			cout<<"\n::x =  "<<::x;
		}
		
};

int main()
{
	sample s;
	s.getdata();
	s.putdata();	
}
