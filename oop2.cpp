#include<iostream>
int main()
{
	int a,b,c;
	std::cout<<"enter the value of a,b,c ";
	std::cin>>a>>b>>c;
	if(a>b && a>c)
	std::cout<<"a is greater";
	else if(b>c && b>a)
	std::cout<<"b is greater";
	else if(c>a && c>b)
	std::cout<<"c is greater";
	return 0;
}
