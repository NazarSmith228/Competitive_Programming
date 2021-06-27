#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n,x;
    cin >> n >> x;
    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
                if (min(arr[i][1],arr[j][1]) - max(arr[i][0],arr[j][0]) == x) {
                    cout << 2 << endl;
                    if (i < j) cout << i + 1 << " " << j+1;
                    else cout << j + 1 << " " << i+1;
                    return 0;
                }
        }
    }
    return 0;
}

