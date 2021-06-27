#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    long n;
    cin >> n;
    if(n <= 0){
        return 0;
    }
    int counter = 0;
    string s = to_string(n);
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '4' || s[i] == '7'){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}

