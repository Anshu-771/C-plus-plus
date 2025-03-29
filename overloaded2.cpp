#include<iostream>
#include<string.h>

using namespace std;

class sample
{
	private:
		char nm[20];
	public:
		sample(char *nm1)
		{
			strcpy(nm,nm1);
		}
		sample()
		{
		
		}
		sample join(sample obj2)
		{
			sample obj3;
			strcpy(obj3.nm,nm);
			strcat(obj3.nm,obj2.nm);
			return(obj3);
		}
		
		void putdata()
		{
			cout<<"\n Name : "<<nm; 
		}
};
int main()
{
	sample obj("Anshu ");
	sample obj2("Kumar");
	sample obj3;
	obj3=obj.join(obj2);
	obj3.putdata();
	return 0;
}
