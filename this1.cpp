#include<iostream>
#include<string.h>
using namespace std;

class sample
{
	int age;
	char name[20],address[20];
	public:
		void getdata(char *name,char *address,int age)
		{
			strcpy(this->name,name);
			strcpy(this->address,address);
			this->age=age;
		}
		void compute(sample &obj)
		{
			if(age>obj.age)
			{
				cout<<"\n this is elder :- \n";
				putdata();
			}
			else
			{
				cout<<"\n this is elder :- \n";
				obj.putdata();
			}
		}
		void putdata()
		{
			cout<<"\n name is : "<<name;
			cout<<"\n address is : "<<address;
			cout<<"\n age is : "<<age;
		}	
};
int main()
{
	sample c;
	sample C;
	c.getdata("subh","delhi",15);
	C.getdata("anshu","gurugram",40);
	c.compute(C);
	return 0;
}
