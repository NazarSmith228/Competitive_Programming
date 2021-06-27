#include <iostream>
using namespace std;
int main() {
    int S, counter = 0;
    cin >> S;
        if(S%2==0){
            counter = S/2;
        }
        else {
            if (S < 9) {
                counter=1;
            }
            else if (S == 9) {
                counter = S / 3;
            } else {
                counter = (S - 6 - 3) / 2 + 2;
            }
        }
        cout << counter << endl;

    return 0;
}