#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = 0;
    if(n!=1) {
        int counter = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[i-1]) {
                counter = arr[i-1] - arr[i] + 1;
                arr[i] += counter;
            }
            if (counter > max) max = counter;
        }
    }
        cout << max;
    return 0;
}

