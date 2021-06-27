#include <bits/stdc++.h>
using namespace std;
long long VectorToInt(vector<long long> v)
{
    reverse(v.begin(), v.end());
    long long decimal = 1;
    long long total = 0;
    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}
int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long>mods;
    vector<long long>modulus;
    while (n >= 1){
        long long temp = n%7;
        mods.push_back(temp);
        n/=7;
    }
    while (k >= 1){
        long long temp = k % 7;
        modulus.push_back(temp);
        k/=7;
    }
    reverse(mods.begin(),mods.end());
    reverse(modulus.begin(),modulus.end());
    long long n7 = VectorToInt(mods);
    long long k7 = VectorToInt(modulus);
    string n_seven = to_string(n7);
    string k_seven = to_string(k7);
    int count = 0;
    int posN = n_seven.size()-1;
    int posK = k_seven.size()-1;
    int temp = 0;
    int adder = 0;
    while (posN >= 0 && posK >= 0){
        temp = (n_seven[posN] - '0') + (k_seven[posK] - '0') + adder;
        adder = 0;
        if(temp > 6){
            count++;
            adder++;
        }
        posN--;
        posK--;
    }
    cout << count;
    return 0;
}

