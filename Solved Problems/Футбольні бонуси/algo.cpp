#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int salary = 1000000/n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = -1;
    for(int i = 0; i < n; i++){
        if(max < arr[i]) max = arr[i];
    }
    int payments[n];
    int r = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        r = max - arr[i];
        payments[i] = salary - r;
        sum += payments[i];
    }
    int result = 1000000 - sum;
    cout << result % n;
    return 0;
}


