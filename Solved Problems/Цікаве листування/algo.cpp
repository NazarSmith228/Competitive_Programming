#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,q;
    cin>>n;
    q = sqrt(n);
    string str;
    cin>>str;
    string resL,resR;
    for (int i = 0, ii = q - 1 ; i < q; ++i, --ii)
    {
        int x = i, xx = ii, y = 0, yy = q-1;
        for (int j = 0, jj = 0; x >= 0; ++j, ++jj)
        {
            resL += str[y*q + x];
            if (q -1 -yy != xx) resR = str[yy*q + xx] + resR;
            ++y; --yy; --x; ++xx;
        }
    }
    cout<<(resL+resR);
}
