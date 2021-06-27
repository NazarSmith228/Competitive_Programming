#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    set<int>possible;
    for(int i = 0; i <= n-2; i++){
        if(arr[i] == arr[i+1] || arr[i] == arr[i+2]){
            possible.insert(arr[i]);
        }
    }
    cout << possible.size();
    return 0;
}

