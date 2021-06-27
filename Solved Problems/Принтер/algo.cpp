#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int mid = s.size()/2;
    int  zero_count = 0;
    int result = 0;
    if(s[mid] == '0')zero_count++;
        for(int i = 0; i <= mid-1; i++){
            if(s[i] == '0')zero_count++;
        }
        result = mid - zero_count;
        cout << result;
    return 0;
}
