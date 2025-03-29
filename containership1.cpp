#include<iostream>

using namespace std;

class subject
{
	private:
		int scode;
		char sname[20];
		
	public:
		void getdatas()
		{
			cout<<"\n enter the subject code : ";
			cin>>scode;
			cout<<"\n enter the  subject name : ";
			cin>>sname;
		}
		void displays()
		{
			cout<<"\n subject code : "<<scode<<", subject name : "<<sname;
		}
};

class student
{
	private:
		int roll_no,marks[3],i;
		subject obj[3];
	public:
		void getdata()
		{
			cout<<"\n enter the student roll-no : ";
			cin>>roll_no;
			for(i=0;i<3;i++)
			{
				obj[i].getdatas();
				cout<<"\n enter the marks : ";
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"\n student roll-no : "<<roll_no<<endl;
			for(i=0;i<3;i++)
			{
				obj[i].displays(),cout<<", marks obtained : "<<marks[i];
			}
		}
};

int main()
{
	student s1;
	s1.getdata();
	s1.display();
	return 0;
}
