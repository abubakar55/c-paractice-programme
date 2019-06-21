#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int a,h,charge,m;
  cout<<"/***********************************\n";
  cout<<"Package A is limited for 10 hours\n";
  cout<<"Package B is limited for 20 hours\n";
  cout<<"For unlimited\n";
  cout<<"if you select package B then the Package A in Normal condition you would get Disount of $100\n";
  cout<<"please enter month with 30 DAYS have only 720 hours onlt\n"<<"and month with 28 days has only 672 hours\n"<<"and month with 30 days has only 744 hours\n";
cout<<"Enter 1,2 and 3 for the services respectively\n";
cin>>a;
switch (a) {

  case 1:

  cout<<"enter number of month in 1,2,3 respectively month\n";
  cin>>m;
{
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
  {
    cout<<"enter hours less than 740\n";
  }
  else if (m==28)
  {
    cout<<"enter hours less than 672\n";
  }
  else  if (m==4 || m==6 || m==9 || m==11)
  {
    cout<<"enter hours less than 720\n";
  }
  cout<<"enter hours of usage\n";
  cin>>h;
  if (h<=10)
  {
    charge=h*9.95;
    cout<<"your charge is ="<<charge;
  }
  else if (h>=1)
  {
    charge=(h-10)*2*9.95;
    cout<<"your charge is ="<<charge;
    break;
   }
}
  case 2:
  cout<<"enter number of month in 1,2,3 respectively month\n";
  cin>>m;
{
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
  {
    cout<<"enter hours less than 740\n";
  }
  else if (m==28)
  {
    cout<<"enter hours less than 672\n";
  }
  else  if (m==4 || m==6 || m==9 || m==11)
  {
    cout<<"enter hours less than 720\n";
  }
  cout<<"enter hours of usage\n";
  cin>>h;
  if (h<=20)
  {
    charge=14.95*h;
    cout<<"your charges is =$"<<charge;
  }
  else if (h>=20)
  {
    charge=(h-10)*1*h;
    cout<<"your charges is =$"<<charge;
      break;
  }
  case 3:
  cout<<"enter number of month in 1,2,3 respectively month\n";
  cin>>m;
{
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
  {
    cout<<"enter hours less than 740\n";
  }
  else if (m==28)
  {
    cout<<"enter hours less than 672\n";
  }
  else  if (m==4 || m==6 || m==9 || m==11)
  {
    cout<<"enter hours less than 720\n";
  }
  cout<<"enter hours of usage\n";
  cin>>h;
  charge=19.95*h;
  cout<<"your charges is =$"<<charge;
  break;
}
return 0;
}
