#include<iostream>
#include<cmath>

using namespace std;

class copyi
{
	int x,z;
	
	public:
		copyi()
		{
			cout<<"enter the value of x: ";
			cin>>x;
			cout<<"enter the value of z: ";
			cin>>z;
		}
		
		copyi(copyi &o)
		{
			x=o.x;
			z=o.z;
		}
		
		void display()
		{
			cout<<"\n x is = "<<x;
			cout<<"\n z is = "<<z;
		}
};

int main()
{
	copyi obj;
	copyi obj1=obj;
	obj.display();
	obj1.display();
	return 0;
}
