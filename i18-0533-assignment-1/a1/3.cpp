#include <iostream>
using namespace std;
int main ()
{
  int weight,widgetsonpallet,length;
  //widgets on paleet programme
  cout<<"enter length of widgets\n";
  cin>>length;
  cout<<"enter weight of pallet\n";
  cin>>weight;
  widgetsonpallet=weight/length;
  cout<<"YOUR WIDGETS ON PALLET IS ="<<widgetsonpallet<<endl;
  return 0;
}
