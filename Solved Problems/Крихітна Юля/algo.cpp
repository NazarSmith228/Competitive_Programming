#include <iostream>
using namespace std;
long m;
long long binpow(long a, long n) {
    if (n == 0) return 1;
    else if (n % 2 != 0) {
        return (binpow(a, n - 1)% m * a % m) % m;
    } else {
        long long b = binpow(a, n / 2)%m;
        return (b * b) % m;
    }
}
int main() {
    long  n;
    cin >> n >> m;
    long long res = (binpow(2,n)- 1 -n%m)%m;
    if(res < 0)res += m;
    cout << res;
    return 0;
}
