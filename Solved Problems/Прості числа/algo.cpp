#include <bits/stdc++.h>
#define SIZE 1000047
using namespace std;
bool primes[SIZE];
bool arr[2*SIZE];
int main(){
    long long a,b;
    cin >> a >> b;
    memset(primes, true,SIZE);
    memset(arr, true,2*SIZE);
    for(int i = 2; i < SIZE; i++){
        if(primes[i]){
            for(int j = i*2; j < SIZE; j+=i){
                primes[j]= false;
            }
        }
    }
    for(int i = 2; i < SIZE; i++){
        if(primes[i]){
            for(long long j = i*((a+i-1)/i); j <= b; j+=i){
                if(i == j) continue;
                arr[j-a] = false;
            }
        }
    }
    long long count = 0;
    for(int i = 0; i <= b-a; i++){
        if(arr[i])count++;
    }
    cout << count;
    return  0;
}
