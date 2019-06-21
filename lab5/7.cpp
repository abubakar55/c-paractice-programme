#include <iostream>
using namespace std;
int main ()
{
  int n,r,a,l,w,b,h;
  cout<<"enter 1 to 4 for the foloowin programme\n";
  cin>>n;
  switch (n)
  {
    case 1:
    cout<<"enter radiuse\n";
    cin>>r;
    a=3.1416*r*r;
    cout<<"Area ="<<a;
    break;
    case 2:
    cout<<"enter lenth and width\n";
    cin>>l>>w;
    a=l*w;
    cout<<"area ="<<a;
    break;
    case 3:
    cout<<"enter base and height\n";
    cin>>b>>h;
    a=b*h*0.5;
    cout<<"area ="<<a;
    break;
    case 4:
    cout<<"enter correct number\n";

  }
  return 0;
}
