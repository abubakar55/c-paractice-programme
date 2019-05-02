#include <iostream>
using namespace std;
int add(int a,int b,int c,int d)
{
// int a,b,c,d;
	
int *p1=new int;
	int *p2=new int;
	int *p3=new int;
	int *p4=new int;
	cout<<"enter three number\n";
cin>>*p1>>*p2>>*p3;
// p1=&a;
// p2=&b;
// p3=&c;
// p4
*p4=*p1+*p2+*p3;
cout<<"your sum of three pointers is =";
cout<<*p4;	
}
int main ()
{
	int a,b,c,d;
	
add(a,b,c,d);
}