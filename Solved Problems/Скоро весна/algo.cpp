#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        double l;
        cin >> l >> n;
        double speed[n];
        for(int i = 0; i < n; i++){
            cin >> speed[i];
            speed[i] = abs(speed[i]);
        }
        double t;
        cin >> t;
        vector<double>posibility;
        posibility.reserve(static_cast<unsigned int>(n));
        for(int i = 0; i < n; i++){
            if(speed[i] != 0)
            posibility.push_back(1 - ((speed[i] * t ) / l));
        }
        double temp = 1;
        for(auto &i: posibility){
            temp *= i;
        }
        double res = 1 - temp;
        cout << fixed << setprecision(7) << res;
        return 0;
    }


