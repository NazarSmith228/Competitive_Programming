#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long num_count = 0;
    if(s.size() == 1){
        cout << s;
    }
    else if(s == "11" || s == "22" || s == "33" || s == "12" || s =="13"){
        cout << s;
    }
    else if(s.size() == 2 && s[s.size()-1] == '1'){
        cout << s;
    }
    else if(s.size() == 2 && s[s.size()-1] == '2'){
        cout << s;
    }
    else if(s.size() == 2 && s[s.size()-1] == '3'){
        cout << s;
    }
    else {
        for (long long i = 1; i < s.size(); i++) {
            if (s[i] == '0')num_count++;
            else break;
        }
        if (num_count == 0) {
            cout << s[0] << "<<";
            for (long long i = 1; i < s.size(); i++) {
                cout << s[i];
            }
        } else if (num_count == s.size() - 1) {
            cout << s;
        } else if (num_count == s.size() - 2 && s[s.size() - 1] - '0' < 4) {
            cout << s;
        } else {
            cout << s[0];
            long long i = 1;
            while (s[i] == '0') {
                cout << s[i];
                i++;
            }
            cout << "<<";
            for (long long j = i; j < s.size(); j++) {
                cout << s[j];
            }
        }
    }
    return 0;
}

