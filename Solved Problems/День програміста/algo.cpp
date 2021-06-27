#include <iostream>
#include <string>
#include <set>

using  namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    set <string> Name;
    for(int j = 0; j < (N+M); j++){
        string str;
        cin >> str;
        Name.insert(str);
    }

    cout << Name.size();

    return 0;
}