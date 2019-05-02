#include <iostream>
using namespace std;
void swap(int *p1,int *p2)
{
	int temp;
	
	
     temp=*p1;
     *p1=*p2;
     *p2=temp;
}



int main ()
{
	int a,b;
	 int *p2;
	 int *p1;
	 p1=&a;
	p2=&b;
	
	cout<<"enter two number\n";
	cin>>a>>b;
swap(a,b);
cout<<"number after swapping is ="<<a<<endl<<b;
return 0;
}