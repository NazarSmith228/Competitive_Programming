#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin >> l >> r;
    int temp = 0;
    for(int i = 2; i <= 100; i++){
        for(int n = 1; n <= 60; n++){
            if((long long)pow(i,n) <= r && (long long)pow(i,n) >= l){
                if(n > temp) temp = n;
            }
        }
    }
    cout << temp;
    return 0;
}

