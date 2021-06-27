#include <iostream>
#include <string>
using  namespace std;
int main() {
    int N , K;
    cin >> N >> K;
    int arr[N];
    int counter1 = 0, counter2 = 0;
    for( int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i]>= K){
            counter1 ++;
            if(counter2 < counter1){
                counter2 = counter1;
            }
            
        } else{
            counter1 = 0;
        }
    }
    cout << counter2 << endl;
    return 0;
}
