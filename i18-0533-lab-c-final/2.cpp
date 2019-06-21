#include <iostream>
using namespace std;
int main ()
{
	cout<<"in this programme wowles will remove from the sentence\n";
	 int length=80;
	char arr[length];
	cout<<"Enter a string\n";
	cin.getline(arr,80);
     cout<<endl;
   /*for (int i=0;arr[i]!='\0';i++)
   {
   // cout<<arr[i]<<endl;
   
   // if (arr[i]!='a'|| arr[i]!='A' || arr[i]!='E'|| arr[i]!='e'||arr[i]!='o'||arr[i]!='O'||arr[i]!='i'||arr[i]!='i'||arr[i]!='u'||arr[i]!='U')
   
   }*/	
// cout<<"your string is =\n"<<arr[i];
for (int j=0;arr[j]!='\0';j++)
{
if (arr[j]=='a'|| arr[j]=='A' || arr[j]=='E'|| arr[j]=='e'||arr[j]=='o'||arr[j]=='O'||arr[j]=='i'||arr[j]=='i'||arr[j]=='u'||arr[j]=='U')
 {
 	arr[j]=arr[j+1];
 }
  length--;
}

	for (int i=0;arr[i]!='\0';i++)
   {
    

   
    if (arr[i]!='a'|| arr[i]!='A' || arr[i]!='E'|| arr[i]!='e'||arr[i]!='o'||arr[i]!='O'||arr[i]!='i'||arr[i]!='i'||arr[i]!='u'||arr[i]!='U')
   cout<<arr[i];
   }	 
  cout<<endl;  

return 0;
}
