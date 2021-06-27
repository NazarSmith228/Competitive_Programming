#include <set>
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    if(n == m){
        cout << n;
        return 0;
    }
    if(n < 10 && m > n && m < 10){
        cout << n;
        return 0;
    }
    if(n == 1){
        cout << "1";
        return 0;
    } else if(n <= 10 && m >= 10){
        cout << "10";
        return 0;
    }
    if(n > 10 && m < 100){
        cout << n;
        return 0;
    } else if(n > 10 && m >= 100 && n < 100){
        cout << "100";
        return 0;
    }
    if(n <= 100 && m >= 100){
        cout << "100";
        return 0;
    }
    if(n > 100 && m < 1000 ){
        cout << n;
        return 0;
    } else if(n > 100 && m >= 1000 && n < 1000){
        cout << "1000";
        return 0;
    }
    if(n <= 1000 && m >= 1000){
        cout << "1000";
        return 0;
    }
    if(n > 1000 && m < 10000 ){
        cout << n;
        return 0;
    } else if(n > 1000 && m >= 10000 && n < 10000){
        cout << "10000";
        return 0;
    }
    if(n <= 10000 && m >= 10000){
        cout << "10000";
        return 0;
    }
    if(n > 10000 && m < 100000 ){
        cout << n;
        return 0;
    } else if(n > 10000 && m >= 100000 && n < 100000){
        cout << "100000";
        return 0;
    }
    if(n <= 100000 && m >= 100000){
        cout << "100000";
        return 0;
    }
    if(n > 100000 && m < 1000000 ){
        cout << n;
        return 0;
    } else if(n > 100000 && m >= 1000000 && n < 100000){
        cout << "1000000";
        return 0;
    }
    if(n <= 1000000 && m >= 1000000){
        cout << "1000000";
        return 0;
    }
    if(n > 1000000 && m < 10000000 ){
        cout << n;
        return 0;
    } else if(n > 1000000 && m >= 10000000 && n < 1000000){
        cout << "10000000";
        return 0;
    }
    if(n <= 10000000 && m >= 10000000){
        cout << "10000000";
        return 0;
    }
    if(n > 10000000 && m < 100000000 ){
        cout << n;
        return 0;
    } else if(n > 10000000 && m >= 100000000 && n < 10000000){
        cout << "100000000";
        return 0;
    }
    if(n <= 100000000 && m >= 100000000){
        cout << "100000000";
        return 0;
    }
    if(n > 100000000 && m < 1000000000 ){
        cout << n;
        return 0;
    } else if(n > 100000000 && m == 1000000000 && n < 100000000){
        cout << "1000000000";
        return 0;
    }
}

