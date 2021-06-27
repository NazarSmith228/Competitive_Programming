#include <iostream>
using namespace std;
int main() {
    int N, max, min;
    cin >> N;
    int temp[N];
    for( int i = 0; i < N; i++){
        cin >> temp[i];
        if(i == 0){
            max = temp[0];
            min = temp[0];
        }
        if(max<temp[i]){
            max = temp[i];
        }
        if(min > temp[i]){
            min = temp[i];
        }
    }
    cout << max - min << endl;
    return 0;
}
