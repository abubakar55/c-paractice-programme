#include <iostream>
using namespace std;
int main()
{
  int n,i=2;
  cout<<"enter number";
  cin>>n;
  for ( i=2;i<=n;i++)
  {
    if (n%i==0)
    break;
  }
  if ((n==1) || (n==i))
  {
    cout<< n <<"prime number";
  }
 else
  {
    cout<< n <<"is not prime";
  }

return 0;
}
