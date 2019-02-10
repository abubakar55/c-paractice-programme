#include <iostream>
using namespace std;
int main ()
{
  int num,num1,num2,num3,num4,num5,num6;
  cout<<"enter 3 digit";
  cin>>num;
  num1=num/1000;
  num2=num%1000;
  cout<<num1;
  num3=num1/100;
  num4=num3%100;
  cout<<num3;
  num5=num4/10;
  num6=num5%10;
  cout<<num5;
return 0;
}
