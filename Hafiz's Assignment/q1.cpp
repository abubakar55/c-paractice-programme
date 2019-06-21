#include<iostream>
using namespace std;
int main()
{
cout<<"________________ Sorting an array______________\n";
	bool flag=false;
	cout<<"Enter the size of an array";
	int size;
	cin>>size;
	int *arr=new int [size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
//For sorting
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
		if(arr[j]>arr[j+1])
		{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
		}
		}
	}
		for(int i=0;i<size;i++)
		{	
			cout<<arr[i]<<" ";
		}

cout<<"\n__________________Searching an array_______________\n";
	cout<<"\nNow enter a number for searching";
	int search;
	cin>>search;

int first = 0, last = size - 1, middle, position = -1;
bool found = false;
while (!found && first <= last)
{
middle = (first + last) / 2; 
if (arr[middle] == search) { 

	found = true;
	position = middle;
	}
else if (arr[middle] > search) 

	last = middle - 1;
else
	first = middle + 1;

}
if(found)
{
cout<<"The number is situated in "<<position<<endl;
}
else
{
	cout<<"The number doesnot exist";
	cout<<"\n";
	
}
}
