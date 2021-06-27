#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    int p;
    int voices[m] = {0};
    int max = 0;
    int count = 0;
    int leader = 0;
    for(int i = 0; i < n; i++){
        cin >> p;
        voices[p-1]++;
        if(voices[p-1] > max){
            max = voices[p-1];
            count = 0;
            leader = p;
            cout << leader << ' ';
        }
        else if(voices[p-1] == max){
            count = 1;
            cout << '+' << ' ';
        }
        else {
            if(count == 0){
                cout << leader << ' ';
            } else cout << '+' << ' ';
        }
    }
}
