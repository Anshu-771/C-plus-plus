#include<iostream>

using namespace std;

class sample
{
	private:
		int a,b,c;
		void compute()
		{
			c=a+b;	
		}
		
	public:
		void getdata()
		{
			cout<<"enter the value of A: ";
			cin>>a;
			cout<<"enter the value of B: ";
			cin>>b;
		}
		
		int putdata()
		{
			compute();
			return(c);
		}
};

int main()
{
	sample obj;
	obj.getdata();
	int f=obj.putdata();
	cout<<"sum is : "<<f;
	return(0);
}
