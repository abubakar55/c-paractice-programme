#include <iostream>
using namespace std;
int main ()
{
  int x,y;
cout<<"ENTER TWO NUMBER WHICH YOU WANT TO SWAP\n";
cin>>x>>y;
x=x ^ y;
y=x ^ y;
x=x ^ y;
cout<<"AFTER SWAPPING THE NUMBER IS X= "<<x <<"\nY = "<<y;
return 0;
}
