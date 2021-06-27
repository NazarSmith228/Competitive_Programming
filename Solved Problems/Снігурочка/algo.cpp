#include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s;
    int count = 0;
    while(cin >> s){
        transform(s.begin(), s.end(), s.begin(),
                  [](unsigned char c){ return std::tolower(c); });
        if(s == string(s.rbegin(),s.rend())) count++;
    }
    cout << count;
    return 0;
}
