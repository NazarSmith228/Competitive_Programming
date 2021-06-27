#include <iostream>
using namespace std;
int main() {
     int n;
     cin >> n;
     int arr[n];
     long long sum = 0;
     long long res[n];
     for(int i = 0; i < n; i++){
          cin >> arr[i];
     }
     for(int j = 0; j < n; j++){
          sum+=arr[j];
          res[j] = sum;
     }
     long long fin = 0;
     for(int k = 0; k < n; k++){
          fin += res[k];
     }
     cout << fin;
     return 0;
}
