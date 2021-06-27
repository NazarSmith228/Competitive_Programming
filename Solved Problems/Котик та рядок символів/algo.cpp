#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int counter = 0;
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
