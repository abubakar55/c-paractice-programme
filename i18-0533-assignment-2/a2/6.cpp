#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
  int q,p;
  char ch;
  cout<<"burgers\n"<<"pizza\n"<<"sandwitch\n"<<"fries\n";
  cout<<"enetr b,f,p,s for burger,fries,pizza,sandwitch\n";
  cin>>ch;
  switch(ch)
  {
    case 'b':
    cout<<"enter quantity of burgers\n";
    cin>>q;
    p=q*200;
    cout<<"your price for burgers ="<<p;
    break ;
    case 'f':
    cout<<"enter quantity of fries\n";
    cin>>q;
    p=q*50;
    cout<<"your price for fries ="<<p;
    break ;
    case 's':
    cout<<"enter quantity of sandwitches\n";
    cin>>q;
    p=q*150;
    cout<<"your price for sandwitches ="<<p;
    break ;
    case 'p':
    cout<<"enter quantity of burgers\n";
    cin>>q;
    p=q*500;
    cout<<"your price for pizaa ="<<p;
    break ;
    default:
    std::cout << "enter correct value \n" << '\n';
  }
  return 0;
}
