#include <iostream>
#include <set>
using  namespace std;
int main() {
    int N;
    cin >> N;
    set <int> uniq;
    for(int i =0; i <N; i++){
        int var;
        cin >> var;
        uniq.insert(var);
    }
    cout << uniq.size() << endl;
    return 0;
}
