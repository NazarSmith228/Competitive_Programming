#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        long long n,m;
        cin >> n >> m;
        if(m == 1 && n % 6 == 0)
        {
            cout << "Life is business";
            return 0;
        }
        if(m % 6 == 0){
            m--;
        }
        long long div = (long long)(ceil((long double)n/m));
        long long mod = n%m;
        if(mod != 0) {
            if (mod % 6 == 0 && mod == m - 1) {
                div++;
            }
        }
        if(div % 6 == 0){
            div++;
        }
        cout << div;
    return 0;
}