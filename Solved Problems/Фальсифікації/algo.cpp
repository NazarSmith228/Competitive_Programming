#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long s;
    cin >> s;
    long arr1[n],arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    long ns = 0;
    for(int j = 0; j < n; j++){
        ns += abs(arr1[j] - arr2[j]);
    }
    cout <<  s - ns;
    return  0;
}

