#include <iostream>
using namespace std;
int main ()
{
  float d;
  char m,a,w,s;
  const int sa=1100;
  const int sw=4900;
  const int ss=16400;
  cout<<"enter the medium of distance in which air is travelled\n";
  cin>>d;
  cout<<"enter medium\n";
  cin>>m;
  if (m=='a')
  {
    d=float(sa)*d;
    cout<<"distance travelled in air is ="<<d;
  }
  else if (m=='w')
  {
    d=float(sw)*d;
    cout<<"distance travelled in air is ="<<d;
  }
  if (m=='s')
  {
    d=float(sa)*d;
    cout<<"distance travelled in air is ="<<d;
  }
  else if (m!='m')
  {
  cout<<"enter corrrect mediun\n";
  }
  return 0;
}
