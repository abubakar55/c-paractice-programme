#include <iostream>
using namespace std;
int main ()
{
  int sum=0,s1,s2,s3;
  cout<<"enter three side of triangle\n";
  cin>>s1>>s2>>s3;
  sum=s1+s2+s3;
  if (sum==180)
  {
    cout<<"valid\n";
  }
  else
  {
    cout<<"not valid\n";
  }
  return 0;
}
