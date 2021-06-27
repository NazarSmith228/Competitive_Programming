#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int max = 0, k = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for( int j = 0; j < N; j++){
        if( max < arr[j]){
            max = arr[j];
            k = j;
        }
    }
    cout << k;
    return  0;
}

