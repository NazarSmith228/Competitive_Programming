#include <bits/stdc++.h>
using namespace std;
string findNthNo(int n)
{
    string res;
    while (n >= 1)
    {
        if (n & 1)
        {
            res += "4";
            n = (n-1)/2;
        }

        else
        {
            res += "7";
            n = (n-2)/2;
        }
    }

    reverse(res.begin(), res.end());
    return res;
}
long long binpow(long long a, long long n,long long m) {
    if (n == 0) return 1;
    else if (n % 2 != 0) {
        return (binpow(a, n - 1,m)% m * a % m) % m;
    } else {
        long long b = binpow(a, n / 2,m)%m;
        return (b * b) % m;
    }
}
int main(){
    int i,j,k;
    cin >> i >> j >> k;
    string first = findNthNo(i);
    string second = findNthNo(j);
    string third = findNthNo(k);
    stringstream ss1(first);
    stringstream ss2(second);
    stringstream ss3(third);
    long long  x = 0, y = 0, z = 0;
    ss1 >> x;
    ss2 >> y;
    ss3 >> z;
    long long  res = binpow(x,y,z);
    cout << res;
    return 0;
}


