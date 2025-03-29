#include<iostream>
#include<math.h>

using namespace std;

class hy
{
	int pr,ba;
	float h;
	
	public:
		hy(int a,int b)
		{
			pr=a;
			ba=b;
			compute();
		}
		
		void compute()
		{
			h=(pr,ba);	
			cout<<"\n hypot: "<<h;
		}
};

int main()
{
	int p,b;
	cout<<"enter the value of parpandicular: ";
	cin>>p;
	cout<<"enter the value of base: ";
	cin>>b;
	hy obj(p,b);
	return 0;
}
