#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int counter = 0;
    if(s.empty()){
        cout << "0" << endl;
        return 0;
    }
    for( int i = 0; i < s.length(); i++){
        if(s[i] != s[i+1]){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}

