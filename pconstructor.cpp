#include<iostream>
#include<cmath>

using namespace std;

class compound
{
	int p,r,t;
	float ci;
	
	public:
		compound(int a,int b,int c)
		{
			p=a;
			r=b;
			t=c;
		}
		
		void compute()
		{
			ci=p*pow(1+r/100.0,t)-p;
			cout<<"\n compound interest: "<<ci;
		}
};

int main()
{
	compound obj(2,3,4);
	obj.compute();
	return 0;
}
