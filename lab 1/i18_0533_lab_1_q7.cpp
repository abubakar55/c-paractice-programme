#include <iostream>
using namespace std;
int main ()
{
  const int pi=3.1416;
  int r=4;
  int circum,diam,area;
  diam=2*r;
  circum=2*pi*r;
  area=pi*r*r;
  cout<<"circum ="<<circum<<"\narea ="<<area<<"\ndiam ="<<diam;
return 0;
}
