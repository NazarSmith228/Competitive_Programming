#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int,int>>pairs(t,{0,0});
    for(int i = 0; i < t; i++){
        cin >> pairs[i].first >> pairs[i].second;
        if(pairs[i].first == 1 && pairs[i].second == 1){
            cout << 3 << endl;
        }
        else if(pairs[i].first >= 2 && pairs[i].second >= 2)
            cout << 0 << endl;
        else if(pairs[i].first==1)
            cout<<2+pairs[i].second%2<<endl;
        else
            cout<<2+pairs[i].first%2<<endl;
    }
}

