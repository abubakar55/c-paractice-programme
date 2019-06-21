#include <iostream>
using namespace std;
int main ()
{
int n1,n2;
cout<<"press 1 for ROCK and 2 for PAPER and 3 for SCISSOR\n";
cout<<"player 1 enter his handsymbol\n";
cin>>n1;
cout<<"player 2 enter his handsymbol\n";
cin>>n2;
if (n1==1 && n2==2)
{
  cout<<"player 2 win\n";
}
else if (n1==1 && n2==3)
{
  cout<<"player 2 win the match\n";
}
else if (n1==2 && n2==1)
{
  cout<<"player 1 win\n";
}
else if (n1==2 && n2==3)
{
  cout<<"player 2 win\n";
}
 else if (n1==3 && n2==1)
{
  cout<<"player 2 win\n";
}
else if (n1==3 && n2==2)
{
  cout<<"player 1 wins\n";
}
else  if (n1==1 && n2==1 )
{
  cout<<"match draw\n";
}
else  if (n1==2 && n2==2 )
{
  cout<<"match draw\n";
}
else  if (n1==3 && n2==3 )
{
  cout<<"match draw\n";
}


return 0;
}
