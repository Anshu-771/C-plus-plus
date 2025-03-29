#include<iostream>                // program 1 in file
using namespace std;




int main()
{
	int arr[3][3],brr[3][3],crr[3][3],i,j;
	cout<<"\n \n matrix A \n \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\a enter the value "<<i+j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\n \n matrix B \n \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\a enter the value "<<i+j<<" : ";
			cin>>brr[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
	
	cout<<"\n \n matrix A \n \n";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<arr[i][j];
		}
	}
	cout<<"\n \n matrix B \n \n";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<brr[i][j];
		}
	}
	cout<<"\n \n matrix C \n \n";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<crr[i][j];
		}
	}
	
	return 0;
}
