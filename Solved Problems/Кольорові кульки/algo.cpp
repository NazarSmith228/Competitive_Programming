#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if( a == 0 && b == 0) return 0;
    while ( a > 0 || b > 0){
        if(a < b){
            if( b > 0) {
                cout << "G";
                b--;
            }
            if(a > 0) {
                cout << "Y";
                a--;
            }
        } else{
            if( a > 0) {
                cout << "Y";
                a--;
            }
            if(b > 0) {
                cout << "G";
                b--;
            }
        }
    }
    return 0;
}

