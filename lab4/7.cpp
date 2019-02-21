#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int x=0,new_saving=0,new_cheking=0;
  char saving,checking;
cout<<"enter your account type\n";
cin>>saving>>checking;
cout<<"enter your amount\n";
cin>>x;
if (x<=200)
{
  saving=saving-10;
  cout<<"your ammount is ="<<saving;
}
else if (x<=200);
{
  checking=checking-25;
  cout<<"your current balance is ="<<checking;
}
if (x>=500)
{
  saving=+saving*4/100;
  new_saving=saving;
  cout<<"your balance is ="<<saving;
}
else if (x>=500);
{
  checking=+checking*5/100;
  new_cheking=checking;
  cout<<"your current balance is ="<<checking;
}
return 0;

}
