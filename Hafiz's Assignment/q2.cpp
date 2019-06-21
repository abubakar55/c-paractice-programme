#include<iostream>
using namespace std;
//This question should have to print true if the values are same otherwise it should return false
int main()
{
	int arr1[5]={0};
	int arr2[5]={0};
	cout<<"Enter the elements of array1";
	for(int i=0;i<4;i++)
	{
		cin>>arr1[i];	
	}
	cout<<"Enter the elements of array 2";
	for(int i=0;i<4;i++)
	{
		cin>>arr2[i];
	}
	bool flag=false;
	bool flag1=false;
	int i=0;
	while(i<4 && !flag1)
	{
		int j=0;
		while(j<4 )
		{
			if(arr1[i]==arr2[j] ) //If number found
			{
				j=0;
				i++;
				flag=true;
			}
			else//If number not found
			{
				j++;
		
	}
		}
		if(!flag)
		{
			cout<<"Number "<<arr1[i]<<" not found so the array is not equal\n";
			flag1=true;
		}
		i++;					
	}
	if(!flag1)
	{
		cout<<"The arrays are equal\n";
	}
}
