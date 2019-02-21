#include <iostream>
using namespace std;
int main ()
{
  int x,y,z;
cout<<"enter three intger\n";
cin>>x>>y>>z;
 if(x>y && x>z)
	{
		cout<<"greater number is "<<x<<endl;
	}
else	if(y>x && y>z)
	{
		cout<<"greater number is "<<y<<endl;
	}
else	if(z>x && z>y)
	{
		cout<<"the greater number is "<<z<<endl;
	}
  return 0;
}
