#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int n1,n2,s,m,p,d,sq,r;
  char o;
  cout<<"enter two numbers\n";
  cin>>n1>>n2;
  cout << "enter a operation" << '\n';
  cin>>o;
if (o=='+')
{
  s=n1+n2;
cout<<"sum ="<<s<<endl;
}
else if (o=='-')
{
  m=n1-n2;
cout<<"minus"<<m<<endl;
}
else if (o=='*')

{
  m=n1*n2;
  cout<<"multiply"<<m<<endl;
}
else if (o=='%')
{
  r=n1%n2;
cout<<"remiander"<<r<<endl;
}
else if (o=='<')
{
  sq=pow(n1,1/2);
cout<<"square root"<<sq<<endl;
}
else
{
cout<<"enter correct answer";
}

  return 0;
}
