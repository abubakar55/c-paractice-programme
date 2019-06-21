#include <iostream>
using namespace std;
int main ()
{

  char ch;
  float f=0,c=0;

do {
  cout<<"enter c for celciuse and and f for farenhite\n";
  cin>>ch;
  /* code */
  if (ch==c)
  {
    f=(c+32)*9/5;
  }
  else if (ch==f)
  {
    c=9/5*(f-32);
  }
} while(ch==c && ch==f );
/**cout<<"temperature in farenhite ="<<f;
cout << "temperature in celciuse =" << c; **********/
return 0;
}
