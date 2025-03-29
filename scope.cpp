#include<iostream>


using namespace std;





int main()
{
	class sample                        // class local
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
	sample obj;                         // object local
	obj.getdata();
	obj.putdata();
	return 0;
}
