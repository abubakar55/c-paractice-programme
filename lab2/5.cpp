#include <iostream>
using namespace std;
int main ()
{
    // pass and fail project
    int n;
    cout<<"Enter your marks in any Subject\n";
    cin>>n;
    if (n>33)
    {
        cout<<"you are passed in the subject = "<<n<<" with these marks!\n";
    } 
    else
    {
        cout<<"AH! Sorry you are failed in the subjects\n";
    }
    return 0;
    
}