#include<iostream>

using namespace std;

class pro
{
	float s,os;
	char nm[20],cm[20];
	
	
	public:
		pro()
		{
			cout<<"name : ";
			cin>>nm;
			cout<<"company : ";
			cin>>cm;
			cout<<"basic salary : ";
			cin>>s;
			cout<<endl;
		}
		void com(float i)
		{
			os=s*(i/100);
			os=s+os;
		}
		void putdata()
		{
			cout<<"\n name: "<<nm;
			cout<<"\n company: "<<cm;
			cout<<"\n basic salary: "<<s;
			cout<<"\n official salary: "<<os;
		}
};

int main()
{
	int i;
	pro obj;
	cout<<"enter the salary percentage to increase salary: ";
	cin>>i;
	obj.com(i);
	obj.putdata();
	return 0;	
}
