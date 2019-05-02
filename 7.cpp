#include <iostream>
using namespace std;
int multiplyby2(int arr[])
{
int n;

double arr[100];
double *pt1=arr;
cout<<"enter number to which you want to run array\n";
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
for (int i = 0; i < n; ++i)
{
	cout<<(arr[i]*2);
}
}

int main ()
{

	// double arr[100];
	int a;
multiplyby2(arr);
}