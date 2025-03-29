#include<iostream>


using namespace std;


class sample                        // class global
{
	private:
		int a,b,c;
	public:
		void getdata()
		{
			cout<<"enter the data: ";
			cin>>a>>b>>c;
		}
		
		void putdata()
		{
			cout<<"data : "<<a<<" "<<b<<" "<<c;
		}
};

sample obj;                         // object global


int main()
{
	obj.getdata();
	obj.putdata();
	return 0;
}
