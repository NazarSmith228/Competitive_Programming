#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long first[11];
    long long second[11];
    for (long long &i : first) {
        cin >> i;
    }
    for (long long &i : second) {
        cin >> i;
    }
    long long distances[11];
    for(int i = 0; i < 11; i++){
        distances[i] = second[i] - first[i] - 1;
    }
    long long XOR = 0;
    for(int i = 0; i < 11; i++){
        XOR ^= distances[i];
    }
    if(XOR == 0) cout << "Werder";
    else cout << "Shakhtar";
    return  0;
}
