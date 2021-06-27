#include <bits/stdc++.h>
using namespace std;
int joseph (int n, int k) {
    int res = 0;
    for (int i=1; i<=n; ++i)
        res = (res + k) % i;
    return res + 1;
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << joseph(n,k);
    return  0;
}

