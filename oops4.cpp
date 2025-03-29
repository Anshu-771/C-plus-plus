#include<iostream>

using namespace std;

class room{
	private:
		int l,b,area;
		
	public:
		void getdata(int a,int bi)
		{
			l=a;
			b=bi;
		}
		
		int compute()
		{
			area=l*b;
			return(area);
		}
		
};

int main()
{
	room bca;
	bca.getdata(7,8);
	int ar=bca.compute();
	cout<<" area : "<<ar;
	return 0;
}
