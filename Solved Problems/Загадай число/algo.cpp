#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int arr1[a];
    int arr2[b];
    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < b; i++){
        cin >> arr2[i];
    }
    int array[100000];
    int count = 0;
    for(int p = 1; p <= n; p++){
        for(int i = 0; i < a; i++) {
            array[p / arr1[i]] = p;
        }
            for(int j = 0; j < b; j++){
                if(array[p%arr2[j]] == p){
                    count++;
                    break;
                }
            }
    }
    cout << count;
    return 0;
}
