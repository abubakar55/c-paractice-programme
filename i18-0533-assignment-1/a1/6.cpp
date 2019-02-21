#include <iostream>
using namespace std;
int main ()
{
  int d,m,y;
cout<<"enter  number of days";
cin>>d;
y=d/365;
d=d%365;
m=d/365;
d=d%365;
cout<<"YEAR = "<<y<<"\nMONTH = "<<m<<"\nDAYS = "<<d;
return 0;
}
