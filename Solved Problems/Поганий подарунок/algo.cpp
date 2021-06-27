#include <iostream>
using namespace std;
int main() {
    long x;
    long long z;
    long long res = 0;
    long long final = 0;
    cin >> x >> z;
    if(x > z){
        cout << "Stupid.";
    }
    else {
         res = (z - (x*x)) % (2 * x);
        if (res == 0) {
             final = (z - (x*x)) / (2 * x);
            if(final >= 0) {
                cout << final;
            }
            else {
                cout << "Stupid.";
            }
        }
        else {
            cout << "Stupid.";
        }
    }
    return 0;
}

