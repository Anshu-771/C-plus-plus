#include<iostream>

using namespace std;

class employees
{
	protected:
	int id;
	char name[20],position[20];
	
};

class emp_salary:private employees
{
	private:
	int amt,nh,hr;
	
	public:
	void enter_data()
	{
		cout<<"\n enter the id: ";
		cin>>id;
		cout<<"\n enter the name: ";
		cin>>name;
		cout<<"\n enter the position: ";
		cin>>position;
		cout<<"\n number of hour: ";
		cin>>nh;
		cout<<"\n hour rate:  ";
		cin>>hr;
	}
	void process()
	{
		amt=nh*hr;
	}
	void display_salary()
	{
		cout<<"\n id: "<<id;
		cout<<"\n name: "<<name;
		cout<<"\n position: "<<position;
		cout<<"\n salary: "<<amt;
	} 
};

int main()
{
	emp_salary e1;
	e1.enter_data();
	e1.process();
	e1.display_salary();
	return 0;
}
