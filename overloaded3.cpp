#include<iostream>
#include<string.h>

using namespace std;

class sample
{
	private:
		int real;
		float imag;
	public:
		void getdata()
		{
			cout<<"\n enter the (real/imaginary) number: ";
			cin>>real>>imag;
		}
		
		sample operator+(sample obj2)
		{
			sample obj3;
			obj3.real=real+obj2.real;
			obj3.imag=imag+obj2.imag;
			return(obj3);
		}
		
		void putdata()
		{
			cout<<"\n real : "<<real;
			cout<<"\n imaginary : "<<imag; 
		}
};
int main()
{
	sample obj,obj2,obj3;
	obj.getdata();
	obj2.getdata();
	obj3=obj+obj2;
	obj3.putdata();
	return 0;
}
