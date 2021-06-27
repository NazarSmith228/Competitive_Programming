#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= 2) sum++;
        if(arr[i] >= 3 && arr[i] <= 7)sum+=2;
        if(arr[i] >= 8 && arr[i] <= 47)sum+=3;
        if(arr[i] > 47)sum +=4;
    }
    cout << sum;
    return  0;
}
