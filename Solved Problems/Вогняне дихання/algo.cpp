#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    long x,y;
    cin >> x >> y;
    int n , k;
    cin >> n >> k;
    long long arr[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    double array[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            array[i] = sqrt(pow(arr[i][0] - x,2) + pow(arr[i][1] - y,2));
        }
    }
    sort(array,array + n);
    double R = 0;
    R = array[k-1];
    cout << fixed << setprecision(8) << R;
    return  0;
}

