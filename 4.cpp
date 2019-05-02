#include <iostream>
using namespace std;
int sortarr1(int arr[],int n)
{
	int temp=0,i;
	// int n,arr[1000];
	
	int j=-1;
	for (int i = 0; i < n; ++i)
	{
    for (int j=n;j>0;j--)
        {
          if (arr[i]%2==0)
        {
          j++;
        }
        swap(arr[i],arr[j]);
        }   	
	}	
}
int main ()
{  
	 int n,arr[1000];
	// arr[1000];
	cout<<"enter N for the number of array\n";
	cin>>n;
	cout<<"enter an array\n";
    for (int i = 0; i < n; i++)
      {
      	/* code */
      	cin>>arr[i];
      }  
      sortarr1(arr,n);
      cout<<"your sorted array after swap is =";
      for (int i = 0; i < n; i++)
      {
      	/* code */
      	cout<<arr[i];
      }
}