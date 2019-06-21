#include <iostream>
using namespace std;
int main ()
{
  int s= 1,m;
  int n=6,a=n*2;
  for (int i=1;i<=n;n--)
  {
    for (int j=n;j>=i;j--)
    {
    cout<<"*";

  }
  for(int k=1;k<=s;k++)
  {
    cout<<" ";
  }
  for (int j=2*n;j>=i;j--)
  {
  cout<<"/";
 }
 s++;
  for(int k=1;k<=s;k++)
  {
    cout<<" ";
  }
 for (int r=1;r<=i;r++)
 {
   cout<<"k";
 }
 /*for (int m=i;m<=n;m--)
 {
   cout<<"*";
 }

/* for (int l=1;l>=i;l+=2)
 {
   cout<<" ";
 }
/* for (int s=1;s<=n;s++)
 {
   cout<<"k";
 }


/** for (int j=n;j>=i;j--)
 {

 cout<<"*";
  }
  for (int s=0;s<=n;s++)
  {
    cout<<" ";
  }*/
cout<<endl;
}
return 0;
}
