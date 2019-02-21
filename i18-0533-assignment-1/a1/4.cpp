#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int amount,r500,r100,r50,r20,r10,r5,r1;
	cout<<"Enter amount you want to divide it into pieces ";
	cin>>amount;
	r500=amount/500;
	amount=amount%500;
	r100=amount/100;
	amount=amount%100;
	r50=amount/50;
	amount=amount%50;
	r20=amount/20;
	amount=amount%20;
	r10=amount/10;
	amount=amount%10;
  r5=amount/5;
	amount=amount%5;
	r1=amount;
	cout<<"Rs.500 = "<<r500<<"\nRs.100 = "<<r100<<"\nRs. 50 = "<<r50<<
		"\nRs. 20 = "<<r20<<"\nRs. 10 = "<<r10<<"\nRs.  5 = "<<r5<<"\nRe.  1 = "<<r1;


	return 0;
}
