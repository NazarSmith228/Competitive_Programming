#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> Character;
    for( int i = 0 ; i < s.length() ; i++){
        Character.insert(s[i]);
    }
    cout << Character.size() << endl;
}
