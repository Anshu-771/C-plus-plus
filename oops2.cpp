#include<iostream>

using namespace std;

class salesman{
	private:
		int sal_no,amt;
		char name[20];
		float comm;
		
	public:
		void getdata()
		{
			cout<<"enter sales-man no. : ";
			cin>>sal_no;
			char ch=cin.get();
			cout<<"enter stubent name : ";
			cin.getline(name,20);
			cout<<"enter the sales-amt : ";
			cin>>amt;
		}
		
		void compute()
		{
			if(amt>10000)
			{
				comm=(amt*12.0)/100.0;	
			}
			else
			{
				comm=(amt*10.0)/100.0;
			}
		}
		
		void putdata()
		{
			cout<<"\n sales-man no. : "<<sal_no;
			cout<<"\n Name     : "<<name;
			cout<<"\n sales-amount : "<<amt;
			cout<<"\n commission : "<<comm;	
		}
};

int main()
{
	salesman s;
	s.getdata();
	s.compute();
	s.putdata();
	return 0;
}
