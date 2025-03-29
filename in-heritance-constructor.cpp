#include<iostream>

using namespace std;

class parent
{
	public:
		parent()
		{
			cout<<"\nconstructor super ";
		}
		~parent()
		{
			cout<<"\ndestructor super ";
		}
};

class comp:public parent
{
	public: 
		comp()
		{
			cout<<"\nconstructor sub ";
		}
		~comp()
		{
			cout<<"\ndestructor sub ";
		}
	
};

int main()
{
	comp obj;
	return 0;
}
