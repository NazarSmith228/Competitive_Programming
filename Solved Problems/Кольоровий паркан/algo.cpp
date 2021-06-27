
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        while(arr[i] != arr[n-1]){
            count++;
            i++;
        }
    }
    cout << count;
    return  0;
}
