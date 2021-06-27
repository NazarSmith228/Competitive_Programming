#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    if(n % 2 == 0 && m % 2 == 0){
        cout << "Sergei";
    } else{
        cout << "Larry";
    }
    return  0;
}

