#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin >> n;
    cin >> k;
    int rats[k][2];
    for(int i = 0; i < k; i++){
        cin >> rats[i][0] >> rats[i][1];
    }
    cin >> m;
    int exits[m][2];
    for(int i = 0; i < m; i++){
        cin >> exits[i][0] >> exits[i][1];
    }
    int maxx = 0;
    int final = 0;
    for(int i = 0; i < k; i++){
         maxx = 1000000;
        for(int j = 0; j < m; j++){
            maxx = min(maxx,abs(rats[i][0] - exits[j][0]) + abs(rats[i][1] - exits[j][1]));
        }
        final = max(maxx,final);
    }
    cout << final;
    return 0;
}
