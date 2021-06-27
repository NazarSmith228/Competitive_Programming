#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(k == 1 && n > 1){
        cout << -1;
    }
    else if(k <= n){
        if(n == k){
            for(int i = 0; i < k; i++){
                cout << alp[i];
            }
        } else{
            int dif = k-2;
            int mod = n - dif;
            if(mod % 2 == 0){
                for(int i = 0; i < mod/2; i++){
                    cout << "ab";
                }
                for(int i = 0,j = 2; i < dif; i++,j++){
                    cout << alp[j];
                }
            } else{
                for(int i = 0; i < mod/2; i++){
                    cout << "ab";
                }
                cout << "a";
                for(int i = 0,j = 2; i < dif; i++,j++){
                    cout << alp[j];
                }
            }
        }
    } else{
        cout << -1;
    }
}


