#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a , b;
    cin >> a >> b;
    int c = 0;
    if( a == b){
        cout << "-1" << endl;
        return 0;
    }
    srand(time(NULL));
    if( a < b){
        if((b - a) <= 1){
            cout << "-1" << endl;
            return 0;
        } else {
            c = rand() % (b - a - 1) + a +1;
        }
    }
    if( b < a){
        if((a - b) <= 1){
            cout << "-1" << endl;
            return 0;
        } else {
            c = rand() % (a - b - 1) + b + 1;
        }
    }
    cout << c << endl;
    return 0;
}
