#include <iostream>
using namespace std;
int main ()
{
  int n1,n2;
  cout<<"enter two integer\n";
  cin>>n1>>n2;
  if (n1/n2)
  {
    cout<<"second is multipl of first";
  }
  else if (n2/n1)
  {
    cout<<"first is multipl of second";
  }
  return 0;
}
