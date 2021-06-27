#include <iostream>
#include <string>
using namespace std;
long long n;
int main() {
    long m;
    int sum = 0;
    cin >> m;
    n = 5;
    long t = m;
    while ( n <= m){
        m /= n;
        sum += m;
        n *= 5;
        m = t;
    }
    cout << sum << endl;
}
