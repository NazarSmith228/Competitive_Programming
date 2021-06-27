#include <bits/stdc++.h>
using namespace std;
int primes[1000000];
int main(){
    int n;
    cin>>n;
    primes[0] = 1;
    primes[1] = 1;
    vector<long long>prosti;
    for(long long i = 2; i < n; i++){
        for(long long j = i*i; j <= n; j+=i){
            if(j > n)break;
            primes[j] = 1;
        }
    }
    for(long long i = 2; i <= n; i++){
        if(primes[i] == 0)prosti.push_back(i);
    }
    sort(prosti.begin(),prosti.end());
    long long second = prosti.back();
    long long first = n - second;
    if(primes[first] == 0) {
        cout << first << "+" << second;
    } else{
        if(n % 2 == 0){
            for(long long i = second; i >= second/2; i--){
                if(primes[i] == 0){
                    if(primes[n-i] == 0){
                        cout << n-i<< "+" << (second + first)-(n-i);
                        return 0;
                    }
                }
            }
        } else{
            for(long long i = second; i > second/2; i--){
                if(primes[i] == 0){
                    if(primes[n-i] == 0){
                        cout << n-i<< "+" << (second + first)-(n-i);
                        return 0;
                    }
                }
            }
        }
        cout << "-1";
    }
    return 0;
}
