#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{

	int c;
	int b;
bool left;
bool right;
int number;
int i=10;
int arr1[i];
int arr2[i];


for (int i=0;i<5;i++)
{
	srand (time(0));
	number=rand() %100;
	arr1[i]=number;
}
for (int i=0;i<5;i++)
{
	srand (time(0));
	number=rand() %100;
	arr2[i]=number;
}
for (int i=0;i<5;i++)
{
	srand (time(0));
	number=(rand() %10)+1;
	b=number;
		srand (time(0));
	number=(rand() %10)              ;
	c=number;
	cout<<setw(b-1)<<arr1[i]<<setw(c)<<arr2[i];
	cout<<endl;
	b++;
}




	cout<<"|"<<setw(15)<<"|";
	cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
		cout<<endl;
	cout<<"|"<<setw(15)<<"|";
	cout<<endl;
cout<<" "<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_"<<"_";

cout<<endl;	

	/*******************
	if (arr[i] || arr[j] == "|")
	{
	bool right=false;
	bool left=true;
	}	
if (arr[i]==0 || arr[j]==0)
{
	for (int i=0;i<5;i++)
	{
	sum=arr1[i]+arr2[i];
	}
}

*/////////	

















    cout<<"the next programme is comment logic is build but implementaion did not succees\t\t";
    cout<<endl<<endl<<endl; 	
    }