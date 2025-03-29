#include<iostream>
#include<string.h>
using namespace std;
struct table{
	int id;
	char name[10];
	int age;
}; 

int main()
{
	int i;
	struct table voter[5];
	for(i=0;i<5;i++)
	{
		cout<<"\n";
		cout<<"enter id: ";
		cin>>voter[i].id;
		cout<<"enter name: ";
		cin>>voter[i].name;
		cout<<"enter age: ";
		cin>>voter[i].age;
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n  id: "<<voter[i].id<<"; name: "<<voter[i].name<<"; age: "<<voter[i].age;
	}
	cout<<"\n\n\n age greater than equal to 38 \n\n\n";
	for(i=0;i<5;i++)
	{
		if(voter[i].age>=38)
		{
		cout<<"\n  id: "<<voter[i].id<<"; name: "<<voter[i].name<<"; age: "<<voter[i].age;
		}
	}
	return 0;
}
