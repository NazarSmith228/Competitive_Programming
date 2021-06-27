#include <iostream>
using  namespace std;
int main() {
    int N,M,K,sum = 0,counter = 0;
    cin >> N >> M >> K;
    int amount[M];
    for( int i = 0; i < M ; i++) {
        cin >> amount[i];
        sum += amount[i];
        if (sum > K) {
            counter++;
            sum = amount[i];
        }
    }
    counter ++;
        if( counter > N){
            cout << "-1" << endl;
        } else{
            int result = N - counter;
            cout << result << endl;
        }

    return 0;
}
