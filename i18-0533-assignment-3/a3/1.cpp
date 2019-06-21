#include <iostream>
using namespace std;
int main ()
{
  int n=0,m,ave=0,sum=0;
/*average of the students by using while loop*/
  while (n<=8){
    cout<<"enter marks\n";
    cin>>m;
    sum+=m;
    n++;


  }
  ave=sum/n;
  cout<<"the average of the student marks is ="<<ave;
  return 0;
}
