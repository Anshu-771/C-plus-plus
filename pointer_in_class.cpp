#include<iostream>

using namespace std;

class sample
{
	private:
		int dd,mm,yy;
	public:
		void getdata()
		{
			cout<<"enter the date in format of DD/MM/YYYY : ";
			cin>>dd>>mm>>yy;
		}
		void putdata()
		{
			cout<<"\n displaying date in American standard format : "<<mm<<"/"<<dd<<"/"<<yy;
		}
};



int main()
{
	sample obj;                                             // displaying date without pointer.
	obj.getdata();
	obj.putdata();
	
	sample *ptr;											//displaying date with using pointer variable 
	ptr=&obj;
	ptr->putdata();
	return 0;
}
