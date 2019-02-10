#include <iostream>
using namespace std;
int main ()
{
  int n,sum=0,div;
  cout<<"enter number to which you find perfect number";
  cin>>n;
  for (int i=1;i<n;i++)
  {
    div=n%i;
    if ( div==0)
    {
      sum=sum+i;
    }
  }
if (sum==n)
{
  cout<<"perfect number";
}
if (sum!=n)
{
  cout<<"not perfect number";
}
return 0;
}
