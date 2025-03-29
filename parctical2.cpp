#include<iostream>

using namespace std;

struct student{
	int c,ar[3];
	char n[10];
	float avg,total;
};

int main()
{
	
	student s[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter the class number : ";
		cin>>s[i].c;
		cout<<"Enter the name of student : ";
		cin>>s[i].n;
		s[i].total=0;
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the marks of "<<j+1<<" subject : ";
			cin>>s[i].ar[j];
			s[i].total=s[i].total+s[i].ar[j];
		}
		
		s[i].avg=s[i].total/3.0;
		
		cout<<"\n class number is : "<<s[i].c;
		cout<<"\n name of student : "<<s[i].n;
		cout<<"\n total marks is  : "<<s[i].total;
		cout<<"\n percentage is   : "<<s[i].avg<<endl;
	}
}
