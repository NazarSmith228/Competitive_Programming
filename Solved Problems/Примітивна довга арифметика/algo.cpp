#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,n,k;
    cin >> x >> n >> k;
    string res ;
    long long current = 0;
    long long div = 0;
    long long mod = 0;
    if( x == 9) {
        if(n <= k ) {
            for (long long i = 1; i <= n; i++) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            if(k - n <= 1) {
                for (long long i = k - 1; i >= 0; i--) {
                    current = x * i + div;
                    div = current / 10;
                    mod = current % 10;
                    res += mod + '0';
                }
                reverse(res.begin(), res.end());
                cout << res;
            } else{
                for(long long i = 0; i < k-n; i++){
                    current = x*n +div;
                    div = current/10;
                    mod = current % 10;
                    res += mod + '0';
                }
                for(long long i = n-1; i >= 0; i--){
                    current = x*i + div;
                    div = current/10;
                    mod = current % 10;
                    res += mod + '0';
                }
                reverse(res.begin(), res.end());
                cout << res;
            }
        } else{
            long long temp = 0;
            for (long long i = 1; i <= n-(n-k); i++) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
                temp = i;
            }
            for(long long i = n-(n-k); i <n; i++){
                current = x * temp + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            for (long long i = k - 1; i >= 0; i--) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            reverse(res.begin(), res.end());
            cout << res;
        }
    } else {
        if (n <= k) {
            for (long long i = 1; i <= n; i++) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            if(k - n <= 1) {
                for (long long i = k - 1; i >= 1; i--) {
                    current = x * i + div;
                    div = current / 10;
                    mod = current % 10;
                    res += mod + '0';
                }
                reverse(res.begin(), res.end());
                cout << res;
            } else{
                for(long long i = 0; i < k-n; i++){
                    current = x*n +div;
                    div = current/10;
                    mod = current % 10;
                    res += mod + '0';
                }
                for(long long i = n-1; i >= 1; i--){
                    current = x*i + div;
                    div = current/10;
                    mod = current % 10;
                    res += mod + '0';
                }
                reverse(res.begin(), res.end());
                cout << res;
            }
        } else{
            long long temp = 0;
            for (long long i = 1; i <= n-(n-k); i++) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
                temp = i;
            }
            for(long long i = n-(n-k); i <n; i++){
                current = x * temp + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            for (long long i = k - 1; i >= 1; i--) {
                current = x * i + div;
                div = current / 10;
                mod = current % 10;
                res += mod + '0';
            }
            reverse(res.begin(), res.end());
            cout << res;
        }
    }
    return 0;
}
