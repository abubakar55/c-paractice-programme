#include <iostream>
using namespace std;
int main ()
{
  int num1,num2,hcf;
  cout<<"enter first number";
  cin>>num1;
  cout<<"enter second number";
  cin>>num2;
  for (int i=1; i<=num1 && i<=num2;i++  )
  {
    if (num1%i==0 && num2%i==0)
    {
       hcf=i;                               /////giving only one answer
    }
        }
    cout<<"hightest HCF is"<<hcf;
return 0;
}
