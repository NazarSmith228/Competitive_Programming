#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    auto res = (long long)pow(n,2);
    long long count = 1;
    long long adder = 0;
    while (count != n){
        res+=((n-count)*count)+adder;
        adder+=count/2;
        count++;
    }
    cout << res;
    return 0;
}

