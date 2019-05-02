#include <iostream>
using namespace std;
int cuberoot(int a)
{
// int a,b,c,d;
	int b;
int *p1=&a;
	int *p2;
	// cout<<"enter three number\n";
// cin>>*p1>>*p2>>*p3;
// p1=&a;
// p2=&b;
// p3=&c;
// p4
// *p4=*p1+*p2+*p3;
	b=a*a*a;
	p2=&b;
cout<<"your cube root in the pointer  is =";
cout<<*p2;	
}
int main ()
{
	int a;
	cout<<"enter anumber you want its cuberoot\n";
	cin>>a;
cuberoot(a);
 return 0;
}