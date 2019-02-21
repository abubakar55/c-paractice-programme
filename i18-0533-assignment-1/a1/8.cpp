#include <iostream>
using namespace std;
int main ()
{
  int sale;
  float sale_tax;
  cout<<"enter amount of sale\n";
  cin>>sale;
  cout<<"enter amount for sale tax\n";
  cin>>sale_tax;
  sale_tax=sale_tax/100;
  sale=sale*sale_tax;
  cout<<"your sale is = "<<sale<<"\n and your sale tax is = "<<sale_tax<<endl;
  return 0;
}
