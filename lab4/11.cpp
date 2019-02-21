#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int m1=0,m2=0,m3=0,m4=0,m5=0;
	int total=0,percent=0;
	cout<<"Enter marks of five subjects\n";
	cin>>m1>>m2>>m3>>m4>>m5;
	total=m1+m2+m3+m4+m5;

	percent=total*100/500;
	cout<<"PERCENTAGE = "<<percent<<"%\n";
	if(percent>=90)
	{
		cout<<"GRADE A \n";
	}
	else if(percent>=80)
	{
		cout<<"GRADE B \n";
	}
	else if(percent>=70)
	{
		cout<<"GRADE C \n";
	}
	else if(percent>=60)
	{
		cout<<"GRADE D \n";
	}
	else if(percent>=40)
	{
		cout<<"GRADE E \n";
	}
	else if (percent<40)
{
		cout<<"GRADE F \n";
}
return 0;
}
