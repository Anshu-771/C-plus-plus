#include<iostream>

using namespace std;

class pro
{
	int x,y,z;
	
	
	public:
		pro(int a)
		{
			x=a;
		}
		pro(int c,int b)
		{
			x=0;
			y=c;
			z=b;
		}
		pro()
		{
			cout<<"\n x : "<<x;
			cout<<"\n y : "<<y;
			cout<<"\n z : "<<z;
			cout<<endl;
		}
};

int main()
{
	pro obj(1,2);
	return 0;	
}
