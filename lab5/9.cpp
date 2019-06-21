#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,max;
    max = (n1 > n2 && n1 > n3) ? n1 :
          (n2 > n3) ? n2 : n3;

cout <<"maximum number is"<<max '\n';;

    return 0;
}
