#include<iostream>

using namespace std;

class patient
{
	int id,a;
	char nm[20],fv[20];
	
	
	public:
		patient()
		{
			cout<<"patient id: ";
			cin>>id;
			cout<<"patient age: ";
			cin>>a;
			cout<<"patient name: ";
			cin>>nm;
			cout<<"patient disease: ";
			cin>>fv;
			cout<<endl;
		}
		
		void putdata()
		{
			if(a<=10)
			{
			cout<<"\n patient id: "<<id;
			cout<<"\n patient age: "<<a;
			cout<<"\n patient name: "<<nm;
			cout<<"\n patient disease: "<<fv;
			}
		}
};

int main()
{
	patient obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].putdata();
	}
	return 0;	
}
