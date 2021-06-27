#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = 500 - n;
    int n1,n2,n3,n4,n5,n6,n7,n8;
    int res;
    n1 = m / 200;
    n2 = ( m % 200) / 100;
    n3 = (m % 200 % 100) / 50;
    n4 = (m % 200 % 100 % 50) / 20;
    n5 = (m % 200 % 100 % 50 % 20) / 10;
    n6 = (m % 200 % 100 % 50 % 20 % 10) / 5;
    n7 = (m % 200 % 100 % 50 % 20 % 10 % 5) / 2;
    n8 = (m % 200 % 100 % 50 % 20 % 10 % 5 % 2) / 1;
    res = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;
    cout << res << endl;
    return 0;
}
