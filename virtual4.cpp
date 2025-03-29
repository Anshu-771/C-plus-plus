#include<iostream>
#include<string.h>
using namespace std;

class publication
{
	protected:
	char name[20];
	int cost;
	public:
	void getdata(const char *name,int cost)
	{
		strcpy(this->name,name);
		this->cost=cost;
	}
	virtual void putdata();
};

class book : public publication
{
	protected:
	int pages;
	public:
	void getdata(const char *name,int cost,int pages):getdata(name,cost)
	{
		this->pages=pages;
	}
	void putdata()
	{
		cout<<"\n book name : "<<name;
		cout<<"\n book cost : "<<cost;
		cout<<"\n total pages : "<<pages;
	}	
};

class tape : public publication
{
	protected:
	int time;
	public:
	void getdata(const char *name,int cost,int time):getdata(name,cost)
	{
		this->time=time;
	}
	void putdata()
	{
		cout<<"\n tape name : "<<name;
		cout<<"\n tape cost : "<<cost;
		cout<<"\n playing time(in hours) : "<<time;
	}
};

int main()
{
	book b;
	tape t;
	b.getdata("ca",40,199);
	t.getdata("Cb",700,2);
	b.putdata();
	t.putdata();
	return 0;
}
