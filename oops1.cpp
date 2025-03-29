#include<iostream>
#include<string.h>

using namespace std;

class student{
	private:
		int roll_no,marks[5],tm,i;
		char name[20];
		float percentage;
		
	public:
		void getdata()
		{
			cout<<"enter student roll no. : ";
			cin>>roll_no;
			cout<<"enter stubent name : ";
			cin>>name;
			for(i=0;i<5;i++)
			{
				cout<<"enter subject marks : ";
				cin>>marks[i];
			}
		}
		
		void compute()
		{
			tm=0;
			for(i=0;i<5;i++)
			{
				tm=tm+marks[i];
			}
			percentage=tm/5.0;
		}
		
		void putdata()
		{
			cout<<"\n Roll No. : "<<roll_no;
			cout<<"\n Name     : "<<name;
			cout<<"\n Percentage : "<<percentage;
			cout<<"\n Total marks : "<<tm;	
		}
};

int main()
{
	student s;
	s.getdata();
	s.compute();
	s.putdata();
	return 0;
}
