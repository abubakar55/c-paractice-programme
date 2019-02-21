#include <iostream>
using namespace std;
int main ()
{
  int n1,n2,s=0,m=0,p=0,d=0;
  char a;
cout<<"enter two number\n ";
cin>>n1>>n2;
cout<<"enter operation\n";
cin>>a;
if (a=='+')
{
  s=n1+n2;
  cout<<"sum ="<<s;
}
else if (a=='*')
{
  m=n1*n2;
  cout<<"multiply ="<<p;
}
else if (a=='-')
{
  m=n1-n2;
  cout<<"nminus ="<<m;
}
else if (a=='/')
{
  d=n1/n2;
  cout<<"divide ="<<d;
}
return 0;
}
