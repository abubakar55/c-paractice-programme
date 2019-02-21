#include <iostream>
using namespace std;
int main ()
{
  int hourse=0,hourse_rate=0,gross=0,over_work=0;
  cout<<"enter hourse of work\n";
  cin>>hourse;
  cout<<"enter hourly rate of employee\n";
  cin>>hourse_rate;
  if (hourse<=40)
  {
    gross=hourse*hourse_rate;
    cout<<"the gross of worker for hour less tha 40 is = "<<gross;
  }
  else
   {
    gross=hourse * hourse_rate+(hourse_rate/2) ;
    cout<<"the gross of worker for hour greater tha 40 is = "<<gross;
  }
  return 0;
}
