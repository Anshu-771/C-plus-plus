#include<iostream>
using namespace std;

struct student
{
	int c;
	char name[20];
	float m[3],avg,total;
};





int main()
{
	int z=3;	
	struct student s[z];
	for(int j=0;j<z;j++)
	{	
		cout<<"\n enter the class: ";
		cin>>s[j].c;
		cout<<"\n enter the name: ";
		cin>>s[j].name;
		for(int i=0;i<3;i++)
		{
			cout<<"\n enter the marks: ";
			cin>>s[j].m[i];
		}
		s[j].total=0;
	}
	
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			s[j].total+=s[j].m[i];
		}
	s[j].avg=s[j].total/3.0;
	}
	
	for(int j=0;j<3;j++)
	{
		cout<<"\n class: "<<s[j].c;
		cout<<"\n name: "<<s[j].name;
		for(int i=0;i<3;i++)
		{
			cout<<"\n marks: "<<s[j].m[i];
		}
		cout<<"\n total marks: "<<s[j].total;
		cout<<"\n average marks: "<<s[j].avg;
	}
	
	return 0;
}
