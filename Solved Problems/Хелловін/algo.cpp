#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int arr[a],array[b],min1 = 0,min2 = 0;
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    sort(arr , arr + a);
    for(int j = 0; j < b; j++){
        cin >> array[j];
    }
    sort(array, array + b);
    min1 = arr[0];
    min2 = array[0];
    cout << min1 + min2 << endl;
    return 0;
}
