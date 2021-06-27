#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int a , b, c;
    cin >> a >> b >> c;
    int count = 0;
    int lucky = 0;
    int len = n.size();
    for(int i = 0; i < len; i++){
        if(n[i] == '4' || n[i] == '7')lucky++;
    }

    if(lucky > 0){
        int unlucky = len - lucky;
        if(a < c){
            count += (unlucky*a);
        } else{
            count += (unlucky*c);
        }
        cout << count;
    } else{
        int replace = len*a;
        int remove_insert = ((len)*c) + b;
        int remove_replace = ((len-1)*c) + a;
        int minum = min(replace,remove_replace);
        int minimum = min(minum,remove_insert);
        count = minimum;
        cout << count;
    }
    return 0;
}
