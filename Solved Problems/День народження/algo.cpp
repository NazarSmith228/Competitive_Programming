#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     long long R,r;
     long long arr[n][2];
     for(int i = 0; i < n; i++){
          cin >> R >> r;
          if(R*(2*pow(3,0.5)-3)>=r) {
               cout << "Dry" << endl;
          } else{
               cout << "Wet" << endl;
          }
     }
     return  0;
}
