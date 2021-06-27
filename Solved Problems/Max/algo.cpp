#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     long arr[n],max = -123456789;
     for(int i = 0; i < n; i++){
          cin >> arr[i];
          if(max < arr[i]){
               max = arr[i];
          }
     }
     cout << max;
     return  0;
}
