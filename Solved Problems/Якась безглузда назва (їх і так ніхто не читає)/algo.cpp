#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a1,b1,q1,a2,b2,q2;
    cin >> a1 >> b1 >> q1;
    cin >> a2 >> b2 >> q2;
    long long counter = 2;
    set<long long>dif_set;
    dif_set.insert(a1);
    dif_set.insert(a2);
    dif_set.insert(b1);
    dif_set.insert(b2);
    long long res1 = a1;
    long long res2 = a2;
    while(res1 < b1){
        res1 *= q1;
        counter++;
        dif_set.insert(res1);
    }
    while(res2 < b2){
        res2 *= q2;
        counter++;
        dif_set.insert(res2);
    }
    long long different = dif_set.size();
    long long res = counter-different;
    cout << res;
    return 0;
}
