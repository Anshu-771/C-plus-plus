#include<iostream>
using namespace std;

class person
{
	int age;
	char name[20],address[20];
	public:
		void getdata()
		{
			cout<<"\a enter the name : ";
			cin>>name;
			cout<<"\a enter the age : ";
			cin>>age;
			cout<<"\a enter the address : ";
			cin>>address;
		}
		person compute(person &obj)
		{
			if(age>obj.age)
			{
				return *this;
			}
			else
			{
				return obj;
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
	person a,b,c;
	a.getdata();
	b.getdata();
	c=a.compute(b);
	c.putdata();
	return 0;
}
