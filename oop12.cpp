#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	char cha[10],chaa[10];
	int opt,l,r;
	cout<<"\n string operation\n1.length\n2.copy\n3.reverse\n4.compara\n5.upper\n6.lower\n7.joinig\n select option : ";
	cin>>opt;
	switch(opt)
	{
		case 1:cout<<"enter the name : ";
			   cin>>cha;
			   l=strlen(cha);
			   cout<<"string length: "<<l;
			   break;
			   
		case 2:cout<<"enter the name : ";
			   cin>>cha;
			   strcpy(chaa,cha);
			   cout<<"source : "<<cha<<"\ndestination : "<<chaa;
			   break;
			   
		case 3:cout<<"enter the name : ";
			   cin>>cha;
			   strrev(cha);
			   cout<<"source : "<<cha;
			   break;
			   
		case 4:cout<<"enter the name 1 : ";
			   cin>>cha;
			   cout<<"enter the name 2 : ";
			   cin>>chaa;
			   r=strcmp(chaa,cha);
			   cout<<"compara : "<<r;
			   break;
			   
		case 5:cout<<"enter the name : ";
			   cin>>cha;
			   strupr(cha);
			   cout<<"upper : "<<cha;
			   break;
			   
		case 6:cout<<"enter the name : ";
			   cin>>cha;
			   strlwr(cha);
			   cout<<"lower : "<<cha;
			   break;
			   
		case 7:cout<<"enter the name 1 : ";
			   cin>>cha;
			   cout<<"enter the name 2 : ";
			   cin>>chaa;
			   strcat(cha,chaa);
			   cout<<"destination : "<<cha;
			   break;
			   
		default:cout<<"wrong choice select";
			   break;
	}
	return 0;
}
