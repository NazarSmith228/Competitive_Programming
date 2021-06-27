#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     int n;
     cin >> n;
//     if(n % 2 == 0){
//         cout << "-1" ;
//         return 0;
//     }
     int arr[n];
     for(int i = 0; i < n; i++){
         cin >> arr[i];
     }
     sort(arr,arr+n);
     int temp = 0;
     for(int i = 1; i < n-1; i++){
         if(arr[i] > arr[i-1] && arr[i] < arr[i+1]){
             temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
         }
         if(arr[i] < arr[i-1] && arr[i] > arr[i+1]){
             temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
         }
     }
     for(int i = 0; i < n; i++){
         cout << arr[i] << " ";
     }
     return 0;
}

