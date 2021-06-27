#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int first = 1,second = 1;
    int count = 0;
    while(first != 0 && second != 0){
        cin >> first >> second;
        count++;
    }
    count--;
    if(n - count == n - 1){
        cout << 0;
    } else{
        cout << n - 1 - count;
    }
    return 0;
}

