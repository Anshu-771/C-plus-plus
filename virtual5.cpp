#include<iostream>
#include<string.h>
using namespace std;

class publication
{
	protected:
	char name1[20];
	int cost1;
	
	public:
	publication(char *n,int p)
	{
		strcpy(name1,n);
		cost1=p;
	}
	virtual void putdata()=0;
};

class book : public publication
{
	protected:
	int pages;
	public:
	book(char *n,int p,int p1):publication(n,p)
	{
		pages=p1;
	}
	void putdata()
	{
		cout<<"\n book name : "<<name1;
		cout<<"\n book cost : "<<cost1;
		cout<<"\n total pages : "<<pages;
	}	
};

class tape : public publication
{
	protected:
	float time;
	public:
	tape(char *n,int p,float t1):publication(n,p)
	{
		time=t1;
	}
	void putdata()
	{
		cout<<"\n tape name : "<<name1;
		cout<<"\n tape cost : "<<cost1;
		cout<<"\n playing time(in hours) : "<<time;
	}
};

int main()
{
	publication *ptr;
	book b("abc",300,90);
	tape t("xyz",400,56.2);
	ptr=&b;
	ptr->putdata();
	ptr=&t;
	ptr->putdata();
	return 0;
}
