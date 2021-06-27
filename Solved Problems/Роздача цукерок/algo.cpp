#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int min = 1000000;
    for(int i = 0; i < n-k+1;i++){
        if(min > arr[i+k-1] - arr[i]){
            min = arr[i+k-1] - arr[i];
        }
    }
    cout << min;
    return 0;
}


