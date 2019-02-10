#include <iostream>
using namespace std;
int main ()
{
  bool num1,num2,num3,num4;
  num1=7* (1==2);
  cout<<num1;
  num2=7* (1==1);
  cout<<num2;
  num3=(3!=4) % (5+3);
  cout<<num3;
  num4=3 / ((-2 >= -2) == (3 <= 4));
  cout<<num4;
  return 0;
}
