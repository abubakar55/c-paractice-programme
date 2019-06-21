#include <iostream>
using namespace std;
int main ()
{
  float n,charge;
  cout<<"do not enter time more than 0.59 and 23.59\n";
  cout<<"enter hours 23:58minutes like 23.8 and minutes 3:5sec as 3.5\n";
  cin>>n;
    if (n>=0 || n<=6.59)
    {
      charge=n*0.12;
      cout<<"your charges for the calll is ="<<charge;
    }
  else  if (n>=7.0 || n<=19.0 )
    {
      charge=n*0.55;
      cout<<"your charges for the calll is ="<<charge;
    }
  else if (n>=19.0 || n<=23.59)
  {
    charge=n*0.35;
    cout<<"your charges for the calll is ="<<charge;
  }
  else if (n>23.59)
  {
    cout<<"enter correct number ";
  }
  return 0;
}
