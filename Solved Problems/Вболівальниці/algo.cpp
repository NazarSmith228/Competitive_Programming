#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N,K,Z;
    cin >> N >> K >> Z;
    int arr[N];
    long sum = 0;
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    for(int i = 0; i <N; i++){
        sum += arr[i]*2;
        if(sum <= Z) count++;
    }
    if ( count == N && sum <= Z){
        cout << K;
    } else{
        cout << count;
    }
    return  0;
}

