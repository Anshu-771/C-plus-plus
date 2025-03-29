#include<iostream>
#include<string.h>
using namespace std;

class salesman
{
	int ts;
	char name[20];
	public:
		void getdata(char *name,int ts)
		{
			strcpy(this->name,name);
			this->ts=ts;
		}
		void putdata()
		{
			cout<<"\n name is : "<<name;
			cout<<"\n total sales is : "<<ts;
		}	
};
int main()
{
	salesman C;
	C.getdata("frontman",100000);
	C.putdata();
}
