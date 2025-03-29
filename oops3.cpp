#include<iostream>

using namespace std;

class item{
	private:
		int item_no;
		char name[20];
		float price;
		
	public:
		float getprice()
		{
			return(price);
		}
		
		void getdata()
		{
			cout<<"enter item no. : ";
			cin>>item_no;
			char ch=cin.get();
			cout<<"enter item name : ";
			cin.getline(name,20);
			cout<<"enter the item price : ";
			cin>>price;
		}
		
		void putdata()
		{
			cout<<"\n item no.    : "<<item_no;
			cout<<"\n item name   : "<<name;
			cout<<"\n item price  : "<<price;
		}
};

int main()
{
	int i;
	item it[10];
	for(i=0;i<3;i++)
	{
		it[i].getdata();
	}
	cout<<" \n item that price is greater than 10,000 ";
	for(i=0;i<3;i++)
	{
		if(it[i].getprice()>10000)
		{
			it[i].putdata();
		}
	}	
	return 0;
}
