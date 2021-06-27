#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int R,H;
    cin >> R >> H;
    long double S, d, cos;
    d =  sqrt(H*(2*R + H));
    cos = (pow(R,2) + pow(R+H,2) - pow(d,2)) / (2*R*(R+H));
    S = 2 * M_PI * pow(R,2) * (1 - cos);
    cout << fixed << setprecision(6) << S;
    return 0;
}
