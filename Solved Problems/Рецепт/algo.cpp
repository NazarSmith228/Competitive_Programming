#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double arr[N];
    double res = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    if( N > 1) {
        res = (arr[0] + arr[1]) / 2;
        for (int j = 2; j < N; j++) {
            res = (res + arr[j]) / 2;
        }
    }
    else{
        res = arr[0];
    }
    cout << fixed << setprecision(9) << res;
    return  0;
}

