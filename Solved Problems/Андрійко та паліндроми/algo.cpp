#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cin >> n >> k;
    int sum = 0;
    int i = 0;
    while(n-i > 0){
        sum += n-i;
        i++;
    }
    if(k > sum) cout << -1;
    else
        for(int i = 0; i < n; i++)cout <<"a";
    return 0;
}


