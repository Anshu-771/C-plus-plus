#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p,b,h;
	cout<<"enter the value of P,B ";
	cin>>p>>b;
	h=sqrt(p*p+b*b);
	cout<<"hypot = "<<h;
	return 0;
}
