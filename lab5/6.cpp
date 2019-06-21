#include<iostream>
using namespace std;
int main ()
{
int s,d,h,g;
cout<<"enter the basic salary of employee 10000,15000,20000,25000,30000:";
cin>>S;
switch(s)
{
  case 10000:
  h=10000*(20.0/100);
				d=10000*(70.0/100);
				g=s+d;
				cout<<"Gross salary = "<<g;
        break;
 case 15000:
 h=15000*(25.0/100);
				d=15000*(75.0/100);
				g=s+h+d;
				cout<<"Gross salary = "<<g;
case 20000:
  h=20000*(30.0/100);
				d=20000*(80.0/100);
				g=s+h+d;
				cout<<"Gross salary = "<<g;
				break;
      }
}
