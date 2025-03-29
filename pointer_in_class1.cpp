#include<iostream>

using namespace std;

class item
{
	private:
		int id,stock;
		char name[20];
		float price,amt;
	public:
		void getdata()
		{
			cout<<"enter item id : ";
			cin>>id;
			cout<<"enter item name : ";
			cin>>name;
			cout<<"enter item price of 1 unit : ";
			cin>>price;
			cout<<"enter stock available : ";
			cin>>stock;
		}
		void compute()
		{
			amt=price*stock;
		}
		void display()
		{
			cout<<"\n item id : "<<id;
			cout<<"\n item name : "<<name;
			cout<<"\n item price of single unit : "<<price;
			cout<<"\n stock available : "<<stock;
			cout<<"\n gross amount of available stock : "<<amt;
		}
};

int main()
{
	int n,i;
	item *itc;
	cout<<"\n enter the value of n : ";
	cin>>n;
	itc=new item[n];
	
	for(i=0;i<n;i++)
	{
		itc[i].getdata();
		itc[i].compute();	
	}
	for(i=0;i<n;i++)
	{
		itc[i].display();
	}
	delete[] itc;
	return 0;
}
