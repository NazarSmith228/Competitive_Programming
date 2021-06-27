#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int H,R;
    cin >> R >> H;
    int H1 = H - (2 * R);
    double V1 = M_PI * pow(R,2) * H1;
    double S1 = 2 * M_PI * R * H1;
    double V2 = (4 * M_PI * pow(R,3))/3;
    double S2 = 4 * M_PI * pow(R,2);
    double SS = S1 + S2;
    double VV = V1 + V2;
    cout << fixed << setprecision(7) << VV << " " << SS;
    return  0;
}

