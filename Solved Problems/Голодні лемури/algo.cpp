#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    if(n % k == 0){
        cout << 0;
        return 0;
    }
    if(n > k) {
        int t = 0, t1 = 0, mint = min(n - n % k, n % k);
        int r = k;
        for(int i = r; i < n; i++){
            t = min(k - n % k,n % k);
            k++;
            if(mint > t + t1){
                mint = t + t1;
            }
            t1++;
        }
        k = r;
        t = 0;
        t1 = 0;
        for( ; k > 1; k--){
            t = min(k - n % k,n % k);
            if(mint > t + t1){
                mint = t + t1;
            }
            t1++;
        }
        cout << mint;
        return 0;
    }
    if(k > n){
        cout << min(n,k-n);
        return 0;
    }
}


