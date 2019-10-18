#include <iostream>
using namespace std;
int main ()
{
    int units,income,ptv,njs,cost_per_unit,nt;
    float gst,income_tax,sub_total;
    cost_per_unit=12;
    njs=90;
    ptv=35;
     cout<<"  ****************  \n";
    cout<<"    ************    \n";
    cout<<"Programme for the Electricity Billing\n";
     cout<<"    ************    \n";
    cout<<"  ****************  \n";
    cout<<"Enter your units consumed\n";
    cin>>units;
    cout<<"Enter Your Income\n";
    cin>>income;
    income_tax=income*10.0/100;
    cout<<"Your Income Tax is = RS "<<income_tax<<endl;
    sub_total=units*cost_per_unit;
    cout<<"Your bill for the units consumed is = RS "<<sub_total<<endl;
    gst=sub_total*20.0/100;
    cout<<"Your GST for the bill is = RS "<<gst<<endl;
    nt=gst+sub_total+income_tax+njs+ptv;
    cout<<"your ptv charges is = "<<ptv<<endl<<"your njs charges is = "<<njs<<endl;
    cout<<"  ****************    \n";
    cout<<"    ************    \n";
    cout<<"Your total bill is = "<<nt<<endl;
    cout<<"    ************    \n";
    cout<<"  ****************  \n";



    return 0;
}