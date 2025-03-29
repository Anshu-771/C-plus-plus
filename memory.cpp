#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"\n Enter the size of array : ";
	cin>>n;
	int *ptr=new int[n];
	for(i=0;i<n;i++)								//taking the value of array dyanamically allocation.
	{
		cout<<"enter the value : ";
		cin>>ptr[i];
	}
	for(i=0;i<n;i++)								//display the array that is created dynamically.
	{
		cout<<"\nenter the value : "<<ptr[i];
	}
	delete[] ptr;
	return 0;
}
