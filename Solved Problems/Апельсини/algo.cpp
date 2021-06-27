#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long a,b,c;
    cin >> a >> b >> c;
    if((a+ b) > c){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}
