#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
if(m == 1 && n % 13 == 0)
    {
        cout << -1;
        return 0;
    }
    if(m % 13 == 0){
        m--;
    }
    long long div = ceil((double)n/m);
    long long mod = n%m;
    if(mod != 0) {
        if (mod % 13 == 0 && mod == m - 1) {
            div++;
        }
    }
    if(div % 13 == 0){
        div++;
    }
    cout << div;
}


	