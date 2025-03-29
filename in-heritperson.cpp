#include<iostream>

using namespace std;

class person
{
	private:
		int age;
		char name[20];
	public:
		void person_data()
		{
			cout<<"enter age: ";
			cin>>age;
			cout<<"enter name: ";
			cin>>name;
		}
		void person_display()
		{
			cout<<"\n age : "<<age;
			cout<<"\n name : "<<name;
		}
	
};

class fee :public person
{
	private:
		int tut,lib;
	public:
		void fee_data()
		{
			cout<<"enter tution fee : ";
			cin>>tut;
			cout<<"enter library fee : ";
			cin>>lib;
		}
		void fee_display()
		{
			cout<<"\n tution fee : "<<tut;
			cout<<"\n library fee : "<<lib;
		}
};

class marks:public fee
{
	private:
		int r,m[3];
	public:
		void marks_data()
		{
//			person_data();
//			fee_data();
			for(int i=0;i<3;i++)
			{
				cout<<"enter the marks of subject "<<i<<" : ";
				cin>>m[i];	
			}
//			proccessing();
//			display();
		}
		
		void proccessing()
		{
		r=0;
		for(int i=0;i<3;i++)
			{
				r=r+m[i];	
			}
		}
		             
		void display()
		{
			cout<<"\n total marks : "<<r;
			cout<<"\n percentage  : "<<r/3.0;
		}
};

int main()
{
	marks s1;
	s1.person_data();
	s1.fee_data();
	s1.marks_data();
	s1.proccessing();
	s1.person_display();
	s1.fee_display();
	s1.display();
	return 0;
}
