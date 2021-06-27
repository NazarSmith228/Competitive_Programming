#include <iostream>
using namespace std;
int main() {
     int n,k;
     cin >> n >> k;
     if(k == 0){
          for(int i = n; i > 0; i--){
               cout << i << " ";
          }
          return 0;
     }
     if(n % 2 == 0) {
          if (k > (n / 2) - 1) {
               cout << "-1";
               return 0;
          }
     } else{
          if(k > n/2){
               cout << "-1";
               return 0;
          }
     }
     int count = 0;
     int arr[n];
     for(int i = 0; i < n; i++){
          arr[i] = n-i;
     }
     for(int i = 1; i < n-1; i++){
          if(count < k){
               if(arr[i] < arr[i-1] && arr[i] > arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    count++;
               }
          }
     }
     for(int i = 0; i < n; i++){
          cout << arr[i] << " ";
     }
     return 0;
}

