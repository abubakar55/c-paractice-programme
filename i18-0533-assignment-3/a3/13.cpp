#include <iostream>
using namespace std;
int main ()
{
int d,p,salery;
cout<<"enter your days\n";
cin>>d;
cout<<"enter your pennis\n";
cin>>p;
do {
  /* code */
  cout<<"enter salery for days\n";
  cin>>d;
  cout<<"enter peenis\n";
  cin>>p;
  salery=d*p;
  if (salery>100)
  {
    cout<<"your salery in dollar is ="<<salery;
  }
  else if {
  cout<<"your salery is ="<<salery<<"peeniis ="<<p<<"days"<<p;
}
  p++;
} while(p<=30);
}
