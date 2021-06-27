#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int s,n;
    cin >> s >> n;
    double r = 0;
    r = s/((2*n)*tan(M_PI/(2*n)));
    double ss = ((n*r)/2)*sin(2*M_PI/(n));
    cout << fixed << setprecision(7) << ss;
    return  0;
}

