#include <iostream>
using namespace std;
int main ()
{
  int x,y;
  //swapping variable without using temp
  cout<<"enter value of x\n";
  cin>>x;
  cout<<"enter value of y\n";
  cin>>y;
  x=x + y;
  y=x - y;
  x=x - y;
  cout<<"after swapping number is x="<< x <<"\nafter swapping number is y="<< y<<endl;
  return 0;
}
