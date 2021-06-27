#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if ( b == 0)return a;
    else return gcd(b,a%b);
}
int main(){
    int n;
    cin >> n;
    long long main[n];
    for(int i = 0; i < n; i++){
        cin >> main[i];
    }
    sort(main,main+n);
    long long begin[n] = {0};
    long long end[n] = {0};
    begin[0] = main[0];
    end[n-1] = main[n-1];
    for(int i = 1; i < n; i++){
        begin[i] = gcd(begin[i-1],main[i]);
    }
//    for(int i = 0; i < n; i++){
//        cout << begin[i] << " ";
//    }
//    cout << endl;
    for(int i = n-2; i >= 0; i--){
        end[i] = gcd(end[i+1],main[i]);
    }
//    for(int i = 0; i < n; i++){
//        cout << end[i] << " ";
//    }
    long long maximum = 0;
    maximum = max(main[0] + end[1],begin[n-2] + main[n-1]);
    for(int i = 1; i < n-1; i++){
        maximum = max(gcd(begin[i-1],end[i+1]) + main[i],maximum);
    }
    cout << maximum;
    return  0;
}

