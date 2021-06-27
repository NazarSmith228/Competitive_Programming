#include <iostream>
using namespace std;
int main() {
     int n;
     cin >> n;
     long arr[n];
     int count = 1;
     for(int i = 0; i < n; i++){
          cin >> arr[i];
     }
     long min = arr[0];
     for(int i = 1; i < n; i++){
          if(arr[i] <= min){
               count++;
               min = arr[i];
          }
     }
     cout << count;
     return 0;
}
