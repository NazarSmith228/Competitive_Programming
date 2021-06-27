#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    int arr[N][M];
    int maxArr[M];
    int max,sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];

        }
    }
    for(int j = 0; j < M; j++){
        max = 0;
        for(int i = 0; i < N; i++){
            if(arr[max][j] < arr[i][j]){
                max = i;
            }
        }
        maxArr[j] = arr[max][j];
    }
    for(int i = 0; i < M; i++){
        sum += maxArr[i];
    }

    cout << sum << endl;
    return 0;
}
