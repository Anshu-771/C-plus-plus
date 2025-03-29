#include<iostream>

using namespace std;

class sample
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		void getdata()
		{
			cout<<"enter the data for a,b: ";
			cin>>a>>b;
		}
		void compute()
		{
			c=a+b;
			cout<<"sum = "<<c;
		}
};

int main()
{
	sample obj;
	obj.getdata();
	obj.compute();
	return 0;
}
