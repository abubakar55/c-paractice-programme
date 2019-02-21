#include <iostream>
using namespace std;
int main ()
{
short a;
short b=65535;
short c;
cout<<"enter a number which is to be masked";
cin>>a;
c=a|b;
cout<<c;
return 0;
}
