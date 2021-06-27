#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int d,v;
    if(a > n){
        cout << 0;
        return 0;
    }
    if(a >= m){
        cout << 0;
        return 0;
    }
    b = min(b,m-1);
    d = n/m;
    v = d*(b-a+1);
    v+= max(0,min(b,n%m)-a+1);
    cout << v;
    return 0;
}

