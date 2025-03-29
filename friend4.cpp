#include<iostream>

using namespace std;

class sample1;
class sample                         //class for int a variable
{
	private: 
	int a;
	
	public:
	void getdata()
	{
		cout<<"enter the value of a: ";
		cin>>a;
	}
	void putdata()
	{
		cout<<"\n the value a is : "<<a;
	}
	friend void compute(sample &obj1,sample1 &obj2);
};

class sample1                        // class for int b variable
{
	private:
	int b;
	
	public:
	void getdata()
	{
		cout<<"enter the value of b: ";
		cin>>b;
	}	
	void putdata()
	{
		cout<<"\n the value b is : "<<b;
	}
	friend void compute(sample &obj1,sample1 &obj2);
};

void compute(sample &obj1,sample1 &obj2)              //non-member function(bridge between sample,sample1)
{
	int s;
	s=obj1.a;
	obj1.a=obj2.b;
	obj2.b=s;
//	cout<<"\n a value = "<<obj1.a;
//	cout<<"\n b value = "<<obj2.b;
}

int main()
{
	sample obj1;
	sample1 obj2;
	
	obj1.getdata();
	obj2.getdata();
	
	obj1.putdata();
	obj2.putdata();
	
	compute(obj1,obj2);                                //fuction calling for non-member function
	
	obj1.putdata();
	obj2.putdata();
	
	return 0;
}
