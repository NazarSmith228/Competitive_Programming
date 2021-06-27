#include <bits/stdc++.h>
using  namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    long long doors[n];
    priority_queue <long long> pencils;
    for(int i = 0; i < n; i++){
        cin >> doors[i];
    }
    long long pencil = 0;
    for(int i = 0; i < k; i++){
        cin >> pencil;
        pencils.push(pencil);
    }
    long long maximum = 0;
    sort(doors,doors+n);
    for(long long i = n-1; i >= 0; i--){
        maximum += pencils.top()*doors[i];
        pencils.push(pencils.top()-1);
        pencils.pop();
    }
    cout << maximum;
    return 0;
}
