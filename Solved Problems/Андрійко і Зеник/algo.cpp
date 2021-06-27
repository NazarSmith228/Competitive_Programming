#include <iostream>
using namespace std;
int main() {
     int n;
     cin >> n;
     int arr[n];
     for(int i = 0; i < n; i++){
          cin >> arr[i];
     }
     int count = 0;
     int counter = 0;
     for(int i = 0; i < n; i++){
          if(arr[i] == 2)count++;
          if(arr[i] == 1)counter++;
     }
     if(arr[n-1] == 1)counter--;
     int res = count - counter;
     if(res < 0)res = 0;
     cout << res;
     return 0;
}
