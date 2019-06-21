#include <iostream>
using namespace std;
int main ()
{
  int d;
  cout<<"enter number of days\n";
  cin>>d;
  switch (d)
  {
    case 1:
    cout<<"Monday\n";
    break;
    case 2:
    cout<<"tuesday\n";
    break;
    case 3:
    cout<<"Wednesday\n";
    break;
    case 4:
    cout<<"Thursday\n";
    break;
    case 5:
    cout<<"Friday\n";
    break;
    case 6:
    cout<<"Saturday\n";
    break;
    case 7:
    cout<<"Suunday\n";
    break;
    default :
    cout<<"Enter 1 to 7 only\n";
  }
  return 0;
}
