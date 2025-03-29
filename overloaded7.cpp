#include<iostream>

using namespace std;

class height{
	private:
		int feet,inche;
		
	public:
		void getdata()
		{
			cout<<"enter foot. : ";
			cin>>feet;
			cout<<"enter inche  : ";
			cin>>inche;
		}
		
		height operator+(height a)
		{
			height t;
			t.inche=inche+a.inche;
			t.feet=feet+a.feet+(t.inche/12);
			t.inche=t.inche%12;
			return t;
		}
		
		void putdata()
		{
			cout<<"feet is: "<<feet<<" inche is: "<<inche;
		}
};

int main()
{
	int i;
	height anshu,subh,total;
	anshu.getdata();
	subh.getdata();
	total=anshu+subh;
	total.putdata();
	return 0;
}
