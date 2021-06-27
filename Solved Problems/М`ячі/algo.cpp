#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long R,r;
    cin >> R >> r;
    double d1 = r*sqrt(3) + r;
    double d2 = R*sqrt(3) - R;
    if(d1 > d2) cout << "rumpled";
    else cout << "safe";
     return  0;
}
