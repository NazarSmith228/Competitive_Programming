#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int N,K;
    double per1,per2;
    cin >> N >> K;
    if( N == 0 || K == 0) {
        cout << "0" << endl;
        return 0;
    }
     per1 = 1.0 / N;
     per2 = 1.0 / K;
    cout << fixed << setprecision(6) << per1 * per2 << endl;
}

