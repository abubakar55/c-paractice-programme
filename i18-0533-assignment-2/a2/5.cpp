#include <iostream>
using namespace std;
int main ()
{
char a;
cout<<"enter first letter month of \n";
cout<<"enter J for january annd K for july\n";
cout<<"enter M for march and z for may\n";
cin>>a;
switch(a)
{
  case 'J':
  case 'j':
  case 'F':
  case 'f':
  case 'M':
  case 'm':
  case 'k':
  case 'K':
  case 'z':
  case 'Z':
  cout<<"31";

}
}
