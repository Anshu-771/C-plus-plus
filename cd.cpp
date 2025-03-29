#include<iostream>

using namespace std;

class product
{
	protected:
		int code,quantity;
		float price,amt;
		char name[20];
		void compute()
		{
			amt=quantity*price;
		}
		void putdata()
		{
			cout<<"\n product code: "<<code;
			cout<<"\n product name: "<<name;
			cout<<"\n product price: "<<price;
			cout<<"\n product quantity: "<<quantity;
			cout<<"\n total product amount: "<<amt;
		}
	private:
		
	public:
		product()
		{
			cout<<"\n enter product code: ";
			cin>>code;
			cout<<"\n enter product name: ";
			cin>>name;
			cout<<"\n enter unit price  : ";
			cin>>price;
			cout<<"\n enter quantity of product: ";
			cin>>quantity;
			compute();
			putdata();
		}
		~product()
		{
			cout<<"\n object destroyed";
		}
};

int main()
{
	product p;
//	p.compute();
//	p.putdata();
	return 0;
}
