#include <iostream>
using namespace std;
int main ()
{
    // pass and fail project
    cout<<"If you do shopping more than RS.1000 You will be given discount\n";
    int n;
    float m,d;
    cout<<"Enter Shpping net bill\n";
    cin>>n;
    if (n>1000)         
    {
        m=n*10/100;
        d=n-m;
        cout<<"you have recived discount of RS = "<<d;
        // cout<<"you are passed in the subject = "<<n<<" with these marks!\n";
    } 
    else
    {
        cout<<"You are not eligible for this discount\n";
    }
    return 0;
    
}