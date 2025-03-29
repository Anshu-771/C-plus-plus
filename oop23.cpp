#include<iostream>
#include<math.h>
using namespace std;

int comp(const int p,const int r,const int t)   //function defination
{
	int ci;
	ci=p*pow((1+r/100.0),t)-p;
	return ci;
}

int main()
{
	int p,r,t;
	float ci;
	
	cout<<" enter the value of P,R,T : ";
	cin>>p>>r>>t;
	
	ci=comp(p,r,t);                            //function calling
	
	cout<<" Compound interest : "<<ci;
	
	cout<<" enter the value of P,R,T : ";
	cin>>p>>r>>t;
	
	ci=comp(p,r,t);                            //function calling
	
	cout<<" Compound interest : "<<ci;
	return 0;
}
