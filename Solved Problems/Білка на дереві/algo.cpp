#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
     double h,s,H;
    cin >> h >> H >> s;
    double d = sqrt(pow(h,2) + pow(s,2));
    double res = d * (H/h);
    cout << fixed << setprecision(4) << res << endl;
     return  0;
}
