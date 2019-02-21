#include <iostream>
using namespace std;
int main ()
{
  int n1,n2,n3;
  cout<<"enter three side of triangle\n";
  cin>>n1>>n2>>n3;
  if(n1==n2 && n2==n3)
  	{
  		cout<<"Triagle is a equilateral triangle\n";
  	}
  	else if(n1!=n2 && n2!=n3)
  	{
  		cout<<"Triagle is a scalene triangle\n";
  	}
  	else if (n1==n2 && n2!=n1)
    {
  		cout<<"Triangle is a isosceles tiangle\n";
}
  return 0;
}
