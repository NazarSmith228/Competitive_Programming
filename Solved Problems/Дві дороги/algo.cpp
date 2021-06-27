#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int N, sum = 0;
    cin >> N;
    int arr[N][4];
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
    for(int k = 0; k < N; k++){
        sum +=(int) (sqrt(pow(arr[k][2] - arr[k][0],2) + pow(arr[k][3] - arr[k][1],2)));
    }
    cout << sum << endl;
}

