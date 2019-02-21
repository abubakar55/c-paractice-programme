#include <iostream>
using namespace std;
int main ()
{
  char x;
  cout<<"enter character\n";
  cin>>x;
  if (x>=65 && x<=90)
  {
    cout<<"uppeer case\n";
  }
  else if (x>=97 && x<=122)
  {
    cout<<"lower case\n";
  }
  else if (x>=48 && x<=57)
  {
    cout<<"first ten natural number\n";

  }
  else if ((x>=0 && x<=47 ) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127) )
  {
    cout<<"special case\n";
  }
  return 0;
}
