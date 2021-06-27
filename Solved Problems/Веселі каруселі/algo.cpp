#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int K,N,counter = 0,sum = 0;
    cin >> K >> N;
    if( K <= 0 || N <= 0){
        cout << "0" << endl;
        return 0;
    }
    if( K == 0 || N == 0){
        cout << "0" << endl;
        return 0;
    }
    int arr[N];
    for(int i =0 ; i < N ; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for(int j = 0; j < N; j++){
        if( sum <= K){
            sum += arr[j];
            counter++;
        }
    }
    if(sum > K){
        counter--;
    }
    cout << counter << endl;
    return 0;
}

