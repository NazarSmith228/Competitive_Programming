#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for(int num = 1; num <= n; num++){
        if( num <= 50 || num % 50 == 0){
            cout << 1 << " " << num << endl;
        } else{
            cout << 2 << " " << (num/50)*50 << " " << num % 50 << endl;
        }
    }
    return 0;
}

