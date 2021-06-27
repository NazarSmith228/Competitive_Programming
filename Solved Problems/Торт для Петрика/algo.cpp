#include <iostream>
#include <cmath>
#include <iomanip>
using  namespace std;
int main() {
    int N,R;
    cin >> N >> R;
    double res = (double)R/sqrt(N);
    cout << fixed << setprecision(4) << res << endl;
    return 0;
}
