#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    int L,W;
    cin >> L >> W;
    double res = sqrt(pow(L,2) + pow(W,2));
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}

