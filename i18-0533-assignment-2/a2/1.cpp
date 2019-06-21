#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int n1,n2,s,m,p,d,sq,mod;
  char o;
  cout<<"enter two numbers\n";
  cin>>n1>>n2;
  cout << "enter a operation" << '\n';
  cin>>o;
  switch (o) {
    case '+':
    s=n1+n2;
    cout<<"sum ="<<s;
    break;
    case '-':
    m=n1-n2;
    cout<<"minus ="<<m;
    break;
    case '^':
    p=pow(n1,n2);
    cout<<"power="<<p;
    break;
    case '/':
    d=n1/n2;
    cout<<"divisor ="<<d;
    break;
    case '!':
    sq=pow(n1,1/2);
    cout<<"square root ="<<sq;
    break;
    case '%':
    mod=n1%n2;
    cout<<"mod ="<<mod;
    break;
    default:
    cout<<"enter correct operation\n";

  }
  return 0;
}
