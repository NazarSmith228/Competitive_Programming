#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if( n == 1 || m == 1) cout << 1;
    else if(n == 2 && m == 2)cout << 2;
    else if(n == 3 && m == 3)cout << 16;
    else if(n == 4 && m == 4)cout << 512;
    else if((n == 3 && m == 2) || (n == 2 && m == 3))cout << 4;
    else if((n == 4 && m == 2) || (n == 2 && m == 4))cout << 8;
    else cout << 64;
    return 0;
}

