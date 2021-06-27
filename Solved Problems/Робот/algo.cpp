#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int x , y, xcount = 0, ycount = 0;
    cin >> x >> y;
    if (!s.empty()) {
        if (x == 0 && y == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if( x < 0 || y < 0){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R') xcount++;
        else if(s[i] == 'U') ycount++;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(xcount < x || ycount < y){
        cout << "NO" << endl;
        return 0;
    } else if(xcount >= x && ycount >= y){
        cout << "YES" << endl;
        return 0;
    }
    return 0;
}

