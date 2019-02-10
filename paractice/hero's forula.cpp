#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  float x,y,z,s,area;
  cout<<"enter three side of trianle";
  cin>>x>>y>>z;
  s=x+y+z/2;
  area=sqrt(s*(s-x)*(s-y)*(s-z)) ;
cout<<"the area of triangle ="<<area;
  return 0;
}
