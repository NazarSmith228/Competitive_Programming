#include <iostream>
#include <string>
using  namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    int C = N*M;
        if (N % 2 != 0 && M % 2 != 0 && N > 2 && M > 2) {
            cout << "Imp" << endl;
        } 
        else if( N == 1 && M == 1){
            cout << "Imp" << endl;
        }
        else {
            cout << "Dragon" << endl;
        }
    return 0;
}
