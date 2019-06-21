#include <iostream>
using namespace std;
int main ()
{
  int h,s,d;
  cout<<"do not negative integer\n";
cout<<"enter speed of car\n";
cin>>s;
cout<<"enter hour\n";
cin>>h;
for (int i=1;i<h;i++,h++)
{

  d=s*h;
  cout<<"distance travelled is ="<<d<<" "<<h<<endl; //////////////add hour in this groupn
}
return 0;
}
