#include <iostream>
#include <cmath>
	int n;
using namespace std;
int countzero(int *n)
{
	int count=0;
	int x=0;
	while (*n!=0)
	{
	*n=*n/10;
	x=*n%10;
	 
	if (x==0)
	{
	count++;
	}
	  }
return count;
}
int main ()
{

	cout<<"enter a number in which you find zeroes\n";
	cin>>n;
    cout<<"yoiur  number of zeroes in number is =";
    // countzero(&n);
    cout<<countzero(&n);
    cout<<endl;
} 
