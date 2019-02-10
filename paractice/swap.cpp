#include <iostream>
using namespace std;
int main ()
{
  int x,y,temp=0;
  cout<<"please enter two number which you want to swap";
  cin>>x>>y;
  temp=y;
  y=x;
  x=temp;

  cout<<"first number is "<<x<<"\n";
  cout<<"second number is "<<y<<"\n";
  return 0;
}
