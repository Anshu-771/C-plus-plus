#include<iostream>

using namespace std;

class student
{
	protected:
	int id,marks[3];
	char name[20];
	public:
		void enter_data()
	{
		cout<<"\n enter the id: ";
		cin>>id;
		cout<<"\n enter the name: ";
		cin>>name;
		for(int i=0;i<3;i++)
		{
			cout<<"\n enter the marks of subject "<<i<<" : ";
			cin>>marks[i];	
		}
	}
	void display_data()
	{
		cout<<"\n enter the id: "<<id;
		cout<<"\n enter the name: "<<name;
		for(int i=0;i<3;i++)
		{
			cout<<"\n enter the marks of subject "<<i<<" : "<<marks[i];
		}
	} 
	
	
};

class sport:public student
{
	protected:
	float weight;
	public:
	void enter_weight()
	{
		cout<<"\n enter student weight: ";
		cin>>weight;
	}
	void display_weight()
	{
		cout<<"\n enter student weight: "<<weight;
	} 	
};

class result:public sport
{
	private:
	float r;
		
	public:
	void process()
	{
		r=0;
		for(int i=0;i<3;i++)
		{
			r=r+marks[i];	
		}
	}
	void display_result()
	{
		display_data();
		display_weight();
		cout<<"\n result of student:    "<<r;
	} 
};

int main()
{
	result s1;
	s1.enter_data();
	s1.enter_weight();
	s1.process();
	s1.display_result();
	return 0;
}
