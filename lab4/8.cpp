#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
  int sum=0;
   int n1,n2,s;
cout<<"enter your sum\n";
cin>>s;
srand(time(0));
n1=(rand()%10)+1;
srand(time(0));
n2=(rand()%10)+1;
sum=n1+n2;
if (s==sum)
{
  cout<<"true guess\n";
}
else {
  cout<<"try again\n";
}
cout<<"the sum ="<<sum;
return 0;
}
