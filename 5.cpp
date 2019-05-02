#include <iostream>
using namespace std;
void reverse_array(int arr[],int arr_size)
{
	int *p1=arr;
	*p2=arr+arr_size-1;
	while (p1<p2)
	{
      swap(p1,p2);
      p1++;
      p2--      
	}
}
void print_array(int *arr,int arr_size)
{
int *size=arr+arr_size;
*i=arr;
cout<<"your array after swaaping is =";
for (int i = arr; i < size; i++)
{
	cout<<*i<<" ";
}
}
int main ()
{
int arr[10000];
int n;
cout<<"enter number for the array\n";
cin>>n;
cout<<"enter array element\n";
for (int j=0;j<n;j++)
{
	cin>>arr[i];
}

    cout << "Original array \n"; 
    print_array(array, 6); 
  
    cout << "Reverse "; 
    reverse_array(array, 6); 
    print_array(array, 6);
    return 0; 
}