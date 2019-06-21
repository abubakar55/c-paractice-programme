#include <iostream>
using namespace std;
int main ()
{
  int a;
  float t;
  cout<<"enter your temperature in farenhite or celciuse\n";
  cin>>t;
  cout<<"enter 1 for farenhite and 2 for celcius\n";
  cin>>a;
  switch (a) {
    case 1:
    t=(t*9.0/5)+32;
    cout<<"your temperature in farenhite is ="<<t;
    break;
    case 2:
    t=(t-32)*5.0/9;
    cout<<"your temperature in farenhite is ="<<t;
    break;
    default :
    cout<<"enter 1 or 2\n";
  }
  return 0;
}
