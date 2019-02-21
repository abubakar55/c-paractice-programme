#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int height,bmi,weight;
  cout<<"enter your height\n";
  cin>>height;
  cout<<"enter your weight\n";
  cin>>weight;
  bmi=weight * 703/height*height;
  cout<<"YOUR BMI IS = "<<bmi<<endl;
  return 0;
}
