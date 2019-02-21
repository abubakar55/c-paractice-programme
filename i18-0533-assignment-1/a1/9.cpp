#include <iostream>
using namespace std;
int mian ()
{
  int s,t1,t2,t3,s1;
  cout<<"enter yoour total sale";
  cin>>s;
  t1=s*0.02;
  t2=s*0.05;
  t3=t1+t2;
  s1=t3/1.06;
  cout<<"\nyour sale is = "<<s<<"\ntotal tax is = "<<t3<<"\n product sale is = "<<s1;
return 0;
}
