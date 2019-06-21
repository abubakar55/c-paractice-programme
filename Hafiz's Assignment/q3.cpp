#include<iostream>
using namespace std;
int main()
{
	string para;
	cout<<"Enter a sentence";
	getline(cin,para);	
	char calphabets[26];
	char salphabets[26];
	int count[26]={0};
	for(int i=0;i<26;i++)
	{
		calphabets[i]=char(i+65);

		salphabets[i]=char(i+97);
	}		
	//Checking the counting of alphabets
	for(int i=0;para[i]!='\0';i++)
	{
		for(int j=0;j<26;j++)
		{
			if(para[i]==calphabets[j] || salphabets[j]==para[i])
			{
				count[i]+=1;	
			}
		}
	}
	for(int i=0;i<26;i++)
	{
		cout<<"There are "<<count[i]<<" "<<calphabets[i]<<endl;
		if(count[i]==0)
		{
			cout<<"There are no "<<calphabets[i]<<endl;
		}
	}		
			
}
